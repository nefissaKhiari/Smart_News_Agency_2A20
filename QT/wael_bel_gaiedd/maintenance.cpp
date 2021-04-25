#include "maintenance.h"

maintenance::maintenance()
{

}

maintenance::maintenance(QString s1,QString s2,QString s3,double x,QString s4){

    id=s1;
    equipement=s2;
    duree=s3;
    total=x;
    panne=s4;


}


bool maintenance::ajouter(){

    QSqlQuery query;


    query.prepare("INSERT INTO MAINTENANCE VALUES (:id,:equipement,:duree,:total,:panne)");

    query.bindValue(":id", id);

    query.bindValue(":equipement",equipement);
    query.bindValue(":duree",duree);
    query.bindValue(":total",total);
    query.bindValue(":panne",panne);

    return    query.exec();

}

bool maintenance::modifier(QString selected){

    QSqlQuery query;


    query.prepare(" UPDATE MAINTENANCE SET  EQUIPEMENT=:equipement, DUREE=:duree, TOTAL=:total ,PANNE=:panne"
                  " where ID= :id");
    query.bindValue(":id", selected);

    query.bindValue(":equipement",equipement);
    query.bindValue(":duree",duree);
    query.bindValue(":total",total);
    query.bindValue(":panne",panne);

    return    query.exec();

}

 QSqlQueryModel * maintenance::afficher(){

     QSqlQueryModel * modal=new QSqlQueryModel();
     modal->setQuery("SELECT * FROM MAINTENANCE");

     return modal;

 }

 bool maintenance::supprimer(QString selected){

      QSqlQuery query;
      query.prepare("Delete from MAINTENANCE where ID = :id ");
      query.bindValue(":id", selected);
      return    query.exec();


  }
