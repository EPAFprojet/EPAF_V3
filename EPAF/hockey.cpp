#include "hockey.h"

#include <QSqlDatabase>
#include <QSqlError>
#include <QMessageBox>
#include <QtSql>

Hockey::Hockey()
{

}
void Hockey::setIDpat(int patID)
{
    mIDpat = patID;
}

void Hockey::setEquipe(QString equipe)
{
    mEquipe = equipe;
}

void Hockey::setCategorie(QString cat)
{
    mCategorie = cat;
    qDebug() << mCategorie;
}

void Hockey::setPosition(QString position)
{
    mPosition = position;
}

void Hockey::setLateralite(QString lat)
{
    mLateralite = lat;
}

void Hockey::setHockGroupe(QString groupe)
{
    mHockGroupe = groupe;
}

void Hockey::setTraiteur(int traiteur)
{
    mTraiteur = traiteur;
}

void Hockey::setCombine(int combine)
{
    mCombine = combine;
}

void Hockey::setLieuCombine(QString lieuCombine)
{
    mLieuComb = lieuCombine;
}

void Hockey::hocToBD()
{
    QSqlQuery query;
    query.prepare("INSERT INTO hockey(HOC_numauto, HOC_PAT_num, HOC_equipe, HOC_cat, HOC_position, HOC_lance, HOC_groupe, HOC_Traiteur, HOC_combine, HOC_LieuCombine) "
                  "VALUES(NULL,'"+QString::number(mIDpat)+"','"+mEquipe+"','"+mCategorie+"','"+mPosition+"','"+mLateralite+"','"+mHockGroupe+"','"+QString::number(mTraiteur)+"','"+QString::number(mCombine)+"','"+mLieuComb+"')");
    query.exec();
}
