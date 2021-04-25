#ifndef EMPLOYESMISSION_H
#define EMPLOYESMISSION_H

#include <QSqlQuery>
#include <QSqlQueryModel>
class employesmission
{   private:
    QString id,nom,idmission,idemp1,idemp2;
public:
    employesmission();
    employesmission(QString,QString,QString,QString,QString);
    bool ajouter();
    bool modifier(QString);
     QSqlQueryModel * afficher();
      bool supprimer(QString);
};

#endif // EMPLOYESMISSION_H
