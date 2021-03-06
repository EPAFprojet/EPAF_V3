#ifndef HOCKEY_H
#define HOCKEY_H
#include<QString>

class Hockey
{
public:
    Hockey();
public :
    void setIDpat(int patID);
    void setEquipe(QString equipe);
    void setCategorie(QString cat);
    void setPosition(QString position);
    void setLateralite(QString lat);
    void setHockGroupe(QString groupe);
    void setTraiteur(int traiteur);
    void setCombine(int combine);
    void setLieuCombine(QString lieuCombine);

    void hocToBD();

private:
    int mIDpat; //Le numéro du patineur
    int mHockNum = NULL; //NUM AUTO
    QString mEquipe;
    QString mCategorie;
    QString mPosition;
    QString mLateralite;
    QString mHockGroupe;
    int mTraiteur = 0;
    int mCombine = 0;
    QString mLieuComb = NULL;
};

#endif // HOCKEY_H
