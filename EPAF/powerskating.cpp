#include "powerskating.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QMessageBox>
#include <QtSql>

PowerSkating::PowerSkating()
{

}
void PowerSkating::setPatID(int id)
{
    mPatID = id;
}

void PowerSkating::setPowGroupe(QString groupe)
{
    mGroupe = groupe;
}

void PowerSkating::setNiveau(QString niv)
{
    mNiveau = niv;
}

void PowerSkating::powToBD()
{
    QSqlQuery query;
    query.prepare("INSERT INTO `powerskating` (`POW_num`, `POW_PAT_num`, `POW_niv`, `POW_GRO_nom`) VALUES (NULL, '"+QString::number(mPatID)+"', '"+mNiveau+"', '"+mGroupe+"')");
    query.exec();
}
