#include "missions.h"

missions::missions()
{

}

missions::missions(QString s1 ,QString s2,QString s3 ){

    id=s1;
    type=s2;
    description=s3;

}


bool missions::ajouter(){

    QSqlQuery query;


    query.prepare("INSERT INTO MISSION VALUES (:id, :type, :description)");

    query.bindValue(":id", id);
    query.bindValue(":type",type);
    query.bindValue(":description", description);

    return    query.exec();

}

bool missions::modifier(QString selected){

    QSqlQuery query;


    query.prepare(" UPDATE MISSION SET TYPE= :type ,DESCRIPTION= :description where ID= :id");
    query.bindValue(":id", selected);
    query.bindValue(":type",type);
    query.bindValue(":description", description);

    return    query.exec();

}

 QSqlQueryModel * missions::afficher(){

     QSqlQueryModel * modal=new QSqlQueryModel();
     modal->setQuery("SELECT * FROM MISSION");

     return modal;

 }
 QSqlQueryModel * missions::afficherid(){

     QSqlQueryModel * modal=new QSqlQueryModel();
     modal->setQuery("SELECT id FROM MISSION");

     return modal;

 }
  bool missions::supprimer(QString selected){

      QSqlQuery query;
      query.prepare("Delete from MISSION where ID = :id ");
      query.bindValue(":id", selected);
      return    query.exec();


  }
