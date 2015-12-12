#ifndef ARCHIVE_H
#define ARCHIVE_H

#include <QSqlQuery>
#include <QSqlQueryModel>


class archive
{
public:
    archive();
    archive(QString,QString,QString,QString);

    bool ajouter();
    bool modifier(QString);
     QSqlQueryModel * afficher();
      bool supprimer(QString);

      QString id, intitule, access,traitement;

};

#endif // ARCHIVE_H
