#include "patineur.h"

#include <QSqlDatabase>
#include <QSqlError>
#include <QMessageBox>
#include <QtSql>

Patineur::Patineur()
{

}
bool Patineur::setPatNom(QString nom)
{
    for (int i =0;i<nom.size();i++)
    {
        if (nom[i].isDigit())
        {
            return false;
        }
    }
    mPatNom = upMahCase(nom);
    return true;
}

bool Patineur::setPatPrenom(QString prenom)
{
    for (int i =0;i<prenom.size();i++)
    {
        if (prenom[i].isDigit())
        {
            return false;
        }
    }
    mPatPrenom = upMahCase(prenom);
    return true;
}

void Patineur::setDateNaissance(Date naissance)
{
    mDateNaissance = naissance;
    qDebug()<<mDateNaissance.getJour()<<mDateNaissance.getMois()<<mDateNaissance.getAnnee();
}

bool Patineur::setCourriel(QString courriel)
{
    if(courriel.contains("@") && courriel.contains("."))
    {
        mCourriel = courriel;
        return true;
    }
    return false;
}

void Patineur::setAdresse(QString adresse)
{
    mAdresse = adresse;
}

bool Patineur::setVille(QString ville)
{
    for (int i =0;i<ville.size();i++)
    {
        if (ville[i].isDigit())
        {
            return false;
        }
    }
    mVille = upMahCase(ville);
    return true;
}

bool Patineur::setProvince(QString province)
{
    for (int i =0;i<province.size();i++)
    {
        if (province[i].isDigit())
        {
            return false;
        }
    }
    mProvince = upMahCase(province);
    return true;
}

bool Patineur::setCodePostal(QString codePostal)
{
    if (codePostal.size() == 6 && codePostal[0].isLetter() && codePostal[1].isDigit() && codePostal[2].isLetter() && codePostal[3].isDigit() && codePostal[4].isLetter() && codePostal[5].isDigit())
    {
        codePostal.toUpper();
        mCodePostal = codePostal;
        return true;
    }
    else
        return false;
}

bool Patineur::setParentResponsable(QString parent)
{
    for (int i =0;i<parent.size();i++)
    {
        if (parent[i].isDigit())
        {
            return false;
        }
    }
    mParentResponsable = upMahCase(parent);
    return true;
}

void Patineur::setNumTel(QString numTel)
{
    mNumTel = numTel;
}

void Patineur::setCondiMed(QString condiMed)
{
    mCondiMed = condiMed;
}

void Patineur::setPaiementStatus(bool paiement)
{
    payer = paiement;
}

void Patineur::patToBD()
{
    QSqlQuery query;
    query.prepare("INSERT INTO patineur (PAT_num, PAT_nom,PAT_prenom,PAT_dateNaissance,PAT_courrielParent,PAT_adresse,PAT_ville,PAT_province,PAT_codePostal,PAT_parentRespon,PAT_numTel,PAT_condiMed) "
                  "VALUES ('"+QString::number(mPatNum)+"','"+mPatNom+"','"+mPatPrenom+"',:DateNaissance,'"+mCourriel+"','"+mAdresse+"','"+mVille+"','"+mProvince+"','"+mCodePostal+"','"+mParentResponsable+"','"+mNumTel+"','"+mCondiMed+"')");
    QString dateN = QString::number(mDateNaissance.getAnnee());
    qDebug() << mDateNaissance.getAnnee() << "Bug insert";
    dateN += "-";
    dateN += QString::number(mDateNaissance.getMois());
    dateN += "-";
    dateN += QString::number(mDateNaissance.getJour());
    query.bindValue(":DateNaissance", dateN);
    query.exec();
}

int Patineur::getverifAnnee()
{
    return mDateNaissance.getAnnee();
}

QString Patineur::upMahCase(QString myString)
{
    myString[0].toUpper();
    return myString;
}

void Patineur::setID(int id)
{
    mPatNum = id;
}

