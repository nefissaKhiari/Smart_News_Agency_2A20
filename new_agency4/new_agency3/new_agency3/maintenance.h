#ifndef MAINTENANCE_H
#define MAINTENANCE_H

#include <QSqlQuery>
#include <QSqlQueryModel>

class maintenance
{
public:
    maintenance();
    maintenance(QString,QString,QString,double,QString);

    bool ajouter();
    bool modifier(QString);
     QSqlQueryModel * afficher();
      bool supprimer(QString);

      QString id,equipement,duree,panne;
      double total;
};

#endif // MAINTENANCE_H
