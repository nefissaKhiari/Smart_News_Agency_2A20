#ifndef EMP_H
#define EMP_H

#include <QSqlQuery>
#include <QSqlQueryModel>

class emp
{
public:
    emp();
    emp(QString,QString,QString,QString,QString,QString,QString);
//declarer les fonctions cruds

    bool ajouter();
    bool modifier(QString);
     QSqlQueryModel * afficher();
      bool supprimer(QString);

      QString id, nom, prenom, mail, naissance,occupation,mission;

};

#endif // EMP_H
