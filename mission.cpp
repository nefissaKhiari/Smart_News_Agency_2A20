#include "mission.h"

mission::mission()
{

}

mission::mission(QString s1 ,QString s2,QString s3 ){

    id=s1;
    type=s2;
    description=s3;

}


bool mission::ajouter(){

    QSqlQuery query;


    query.prepare("INSERT INTO MISSION VALUES (:id, :type, :description)");

    query.bindValue(":id", id);
    query.bindValue(":type",type);
    query.bindValue(":description", description);

    return    query.exec();

}

bool mission::modifier(QString selected){

    QSqlQuery query;


    query.prepare(" UPDATE MISSION SET TYPE= :type ,DESCRIPTION= :description where ID= :id");
    query.bindValue(":id", selected);
    query.bindValue(":type",type);
    query.bindValue(":description", description);

    return    query.exec();

}

 QSqlQueryModel * mission::afficher(){

     QSqlQueryModel * modal=new QSqlQueryModel();
     modal->setQuery("SELECT * FROM MISSION");

     return modal;

 }
  bool mission::supprimer(QString selected){

      QSqlQuery query;
      query.prepare("Delete from MISSION where ID = :id ");
      query.bindValue(":id", selected);
      return    query.exec();


  }
