#ifndef CLIENT_H
#define CLIENT_H

#include <QSqlQuery>
#include <QSqlQueryModel>

class client
{
public:
    client();
    client(QString,QString,QString,QString);

    bool ajouter();
    bool modifier(QString);
     QSqlQueryModel * afficher();
      bool supprimer(QString);


    QString id,nom,mail,naissance;

};

#endif // CLIENT_H
