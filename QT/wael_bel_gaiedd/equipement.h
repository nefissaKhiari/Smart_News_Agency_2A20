#ifndef EQUIPEMENT_H
#define EQUIPEMENT_H

#include <QSqlQuery>
#include <QSqlQueryModel>

class equipement
{
public:
    equipement();
    equipement(QString,QString,QString,double,QString);

    bool ajouter();
    bool modifier(QString);
     QSqlQueryModel * afficher();
      bool supprimer(QString);
      int get_total();

      QString id,nom,date,etat;
      double prix;

};

#endif // EQUIPEMENT_H
