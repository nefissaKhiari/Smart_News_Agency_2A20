#ifndef MISSION_H
#define MISSION_H

#include <QSqlQuery>
#include <QSqlQueryModel>


class mission
{
public:
    mission();
    mission(QString,QString,QString);


    bool ajouter();
    bool modifier(QString);
     QSqlQueryModel * afficher();
      bool supprimer(QString);

      QString id, type, description;

};

#endif // MISSION_H
