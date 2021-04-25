#ifndef MISSIONS_H
#define MISSIONS_H

#include <QSqlQuery>
#include <QSqlQueryModel>

class missions
{
public:
    missions();
    missions(QString,QString,QString);


    bool ajouter();
    bool modifier(QString);
     QSqlQueryModel * afficher();
      bool supprimer(QString);
     QSqlQueryModel * afficherid();
      QString id, type, description;
};

#endif // MISSIONS_H
