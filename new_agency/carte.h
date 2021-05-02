#ifndef CARTE_H
#define CARTE_H

#include <QSqlQuery>
#include <QSqlQueryModel>


class carte
{
public:
    carte();
    carte(QString,QString,int);

    bool ajouter();
    bool modifier(QString);
     QSqlQueryModel * afficher();
      bool supprimer(QString);

      QString id,client;
      int points;


};

#endif // CARTE_H
