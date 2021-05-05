#ifndef VENTE_H
#define VENTE_H

#include <QSqlQuery>
#include <QSqlQueryModel>

class vente
{
public:
    vente();
    vente(QString,QString,QString,QString,double);

    bool ajouter();
    bool modifier(QString);
     QSqlQueryModel * afficher();
      bool supprimer(QString);

      QString id,commande,livraison,payement;
      double prix;
};

#endif // VENTE_H
