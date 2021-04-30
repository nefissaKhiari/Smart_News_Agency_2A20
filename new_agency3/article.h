#ifndef ARTICLE_H
#define ARTICLE_H

#include <QSqlQuery>
#include <QSqlQueryModel>

class article
{
public:
    article();
    article(QString/*,QString*/,QString,QString,QString);

    bool ajouter();
    bool modifier(QString);
     QSqlQueryModel * afficher();
      bool supprimer(QString);
      bool archiver(QString,QString);


    QString id/*,image*/,titre,categorie,contenu;
};

#endif // ARTICLE_H
