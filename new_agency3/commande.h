#ifndef COMMANDE_H
#define COMMANDE_H

#include <QSqlQuery>
#include <QSqlQueryModel>

class commande
{
public:
    commande();
    commande(QString,QString,int);

    bool ajouter();
    bool modifier(QString);
     QSqlQueryModel * afficher();
      bool supprimer(QString);

      QString id,client;
      int attente;

};

#endif // COMMANDE_H
