#ifndef PATINEUR_H
#define PATINEUR_H
#include<QString>
#include "Date.h"
class Patineur
{
public:
    Patineur();

public :

    bool setPatNom(QString nom);
    bool setPatPrenom(QString prenom);
    void setDateNaissance(Date naissance);
    bool setCourriel(QString courriel);
    void setAdresse(QString adresse);
    bool setVille(QString ville);
    bool setProvince(QString province);
    bool setCodePostal(QString codePostal);
    bool setParentResponsable(QString parent);
    void setNumTel(QString numTel);
    void setCondiMed(QString condiMed);
    void setPaiementStatus(bool paiement);

    QString upMahCase(QString myString);

    void patToBD();

private:

    int mPatNum = NULL; //Num auto
    QString mPatNom;
    QString mPatPrenom;
    Date mDateNaissance; //Passer le ui->label de la date dans la classe pour vérifications.
    QString mCourriel;
    QString mAdresse;
    QString mVille;
    QString mProvince;
    QString mCodePostal;
    QString mParentResponsable;
    QString mNumTel;
    QString mCondiMed;
    bool payer;
};

#endif // PATINEUR_H
