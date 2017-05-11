#include "recu.h"
#include "ui_recu.h"
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QMessageBox>
#include <QPrinter>
#include <QRect>
#include <QFileDialog>
#include <QFontMetrics>
#include <QPainter>
#include <Windows.h>
#include <QDesktopServices>
#include <QTime>



recu::recu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::recu)
{
    ui->setupUi(this);

    QObject::connect(ui->groupeRadioButton, SIGNAL(toggled(bool)), this, SLOT(displayGroupe()));
    QObject::connect(ui->saisonRadioButton, SIGNAL(toggled(bool)), this, SLOT(displaySaison()));
    QObject::connect(ui->nomRadioButton, SIGNAL(toggled(bool)), this, SLOT(displayNom()));
    QObject::connect(ui->imprimerButton, SIGNAL(clicked(bool)), this, SLOT(imprimerRecu()));
    QObject::connect(ui->imprimerButton, SIGNAL(clicked(bool)), this, SLOT(nomFichier()));
    QObject::connect(ui->imprimerButton, SIGNAL(clicked(bool)), this, SLOT(visualiser()));
}

void recu::displayGroupe()
{
    QString groupe = ui->rechercheEdit->text();
    QSqlQuery query;

    query.prepare("SELECT groupe.GRO_nom, groupe.GRO_description, groupe.GRO_prix FROM"
                  " groupe WHERE groupe.GRO_nom LIKE '%" + groupe + "%'");
    bool ok = query.exec();

    if(!ok)
    {
        QMessageBox::critical(this, "Query error", query.lastError().text());
    }

    if(ok)
    {
        QSqlQueryModel *model = new QSqlQueryModel();
        model -> setQuery(query);

        ui -> tableView -> setModel(model);
    }
}

void recu::displaySaison()
{
    QString saison = ui->rechercheEdit->text();
}

void recu::displayNom()
{
    QString nom = ui->rechercheEdit->text();
    QSqlQuery query;

    query.prepare("SELECT patineur.PAT_num, patineur.PAT_NOM, patineur.PAT_prenom, patineur.PAT_dateNaissance, achat.ACH_GRO_nom, groupe.GRO_prix "
                  "  FROM patineur, achat, groupe"
                  " WHERE (patineur.PAT_num = achat.ACH_NUM_pat) AND (achat.ACH_GRO_nom = groupe.GRO_nom)"
                  " AND (patineur.PAT_nom LIKE '%"+nom+"%' or patineur.PAT_prenom LIKE '%"+nom+"%')");


    bool ok = query.exec();

    if(!ok)
    {
        QMessageBox::critical(this, "Query error", query.lastError().text());
    }

    if(ok)
    {
        QSqlQueryModel *model = new QSqlQueryModel();
        model -> setQuery(query);

        ui -> tableView -> setModel(model);
    }
}

void recu::imprimerRecu()
{
    QString retourFichier = nomPourLeFichier();
    CapString = retourFichier;
    QString nomFichier = QFileDialog::getSaveFileName(0,"Création de reçu",retourFichier,"*.pdf");

    if (!nomFichier.isEmpty())
    {
        if(QFileInfo(nomFichier).suffix().isEmpty())
        nomFichier.append(".pdf");
        QPrinter printer(QPrinter::PrinterResolution);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setOutputFileName(nomFichier);
        printer.setPageSize(printer.Letter);
        QPainter painter(&printer);

        int positionHauteurActuelle = 0;




        QString titre("Reçu EPAF"); //Je définis ici le titre de ma page PDF
        QFont police("Arial",30);

        painter.setFont(police);
        QFontMetrics tailleMotPx = painter.fontMetrics(); //Je calcule la taille en largeur du titre
        int largeurLabel = tailleMotPx.width(titre);
        painter.setPen(Qt::black);
        painter.drawText(printer.width()/2 - largeurLabel/2,50,titre); //Pour pouvoir la centrer relativement ici

        police.setPointSize(15);  //Ici la ligne detail reçu
        painter.setFont(police);

        QPen stylePen;  //Ici le rectangle "participants"
        stylePen.setWidth(1);
        stylePen.setJoinStyle(Qt::RoundJoin);
        painter.setPen(stylePen);
        QRectF rectangleParticipants(20,250,printer.width()-40,10*15 + 35);
        painter.drawRect(rectangleParticipants);
        painter.drawText(30,280, tr("913, boul. l'Anse-à-Valleau"));
        painter.drawText(30,295, tr("Gaspé(QC) G4X 4A1"));
        int positionBaseNom = 340;

        QPixmap logo("logo_epaf.jpg");

        Date dateRecu;
        QString date;
        date = QString::number(dateRecu.getCurrentDay()) + "/";
        date += QString::number(dateRecu.getCurrentMonth()) + "/";
        date += QString::number(dateRecu.getCurrentYear());

        QSqlQuery queryMontant;
        queryMontant.prepare("SELECT groupe.GRO_prix FROM groupe, achat "
                             "WHERE groupe.GRO_nom = achat.ACH_GRO_nom AND achat.ACH_NUM_pat ="+numPatineur);
        queryMontant.exec();



        int totalLettre = nomPatineur.size()+prenomPatineur.size();


        for(int i = 0; i < 1; i++)
        {
            painter.drawPixmap(30,10,logo);

            painter.drawText(30,positionBaseNom,tr("Nom : "));
            painter.drawText(80,positionBaseNom, nomPatineur+ ", "  +prenomPatineur);
            painter.drawLine(80,345,(totalLettre + 250),345);

            painter.drawText(450,positionBaseNom,"Date : ");
            painter.drawText(500,positionBaseNom,date);
            painter.drawLine(500,345,560,345);

            positionBaseNom = positionBaseNom + 15;

        }
    }
}

void recu::visualiser()
{


     CapString += ".pdf";
     qDebug()<< CapString<<"Q2";

    if(!QDesktopServices::openUrl(QUrl::fromLocalFile("PDF//" + CapString)))
    {
        QMessageBox::critical(this, ("Erreur"),("Impossible d'ouvrir le fichier"));
    }
}


recu::~recu()
{
    delete ui;
}

void recu::on_tableView_clicked(const QModelIndex &index)
{
    QAbstractItemModel *model2;
    model2 = ui->tableView->model();
    int rowidx = ui->tableView->selectionModel()->currentIndex().row();
    numPatineur = model2->index(rowidx, 0).data().toInt();
    nomPatineur = model2->index(rowidx, 1).data().toString();
    prenomPatineur = model2->index(rowidx, 2).data().toString();
}

QString recu::nomPourLeFichier()
{
    Date date;
    QString nomFichier;
    QTime currentS ,currentM, currentH;
    int s,m,h;

    s = currentS.currentTime().second();
    m = currentM.currentTime().minute();
    h = currentH.currentTime().hour();


    nomFichier = QString::number(date.getCurrentDay());
    nomFichier += QString::number(date.getCurrentMonth());
    nomFichier += QString::number(date.getCurrentYear()) + "_";
    nomFichier += QString::number(h)+QString::number(m)+QString::number(s);


    qDebug()<<s<<m<<h<< "Q1";

    return nomFichier;
}
