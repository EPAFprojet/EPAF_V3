#include "patinageartistique.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QMessageBox>
#include <QtSql>
PatinageArtistique::PatinageArtistique()
{

}
void PatinageArtistique::setPatID(int id)
{
    mIDPat = id;
}

void PatinageArtistique::setNoClub(int club)
{
    mNoClub = club;
}

void PatinageArtistique::setNivDanse(QString danse)
{
    mNivDanse = danse;
}

void PatinageArtistique::setNivStyle(QString style)
{
    mNivStyle = style;
}

void PatinageArtistique::setNivHab(QString hab)
{
    mNivHab = hab;
}

void PatinageArtistique::setPAGroupe(QString groupe)
{
    mPAGroupe = groupe;
}
void PatinageArtistique::setNumPa(int paCa)
{
    mNumPa = paCa;
}

void PatinageArtistique::PAtoBD()
{
    QSqlQuery query;
    query.prepare("INSERT INTO `patartistique` (`FIG_PAT_num`, `FIG_numPatCA`, `FIG_noClub`, `FIG_nivDanse`, `FIG_nivHab`, `FIG_nivStyle`, `FIG_groupe`) "
    "VALUES ('"+QString::number(mIDPat)+"', '"+QString::number(mNumPa)+"', '"+QString::number(mNoClub)+"', '"+mNivDanse+"', '"+mNivHab+"', '"+mNivStyle+"', '"+mPAGroupe+"')");
    query.exec();
}
