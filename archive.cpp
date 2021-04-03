#include "archive.h"

archive::archive()
{

}

archive::archive(QString s1 ,QString s2,QString s3,QString s4 ){

    id=s1;
    intitule=s2;
    access=s3;
    traitement=s4;

}


bool archive::ajouter(){

    QSqlQuery query;


    query.prepare("INSERT INTO ARCHIVE (ID, INTITULE, DROIT_ACCESS,TRAITEMENT) VALUES (:id, :intitule, :access,:traitement)");

    query.bindValue(":id", id);
    query.bindValue(":intitule",intitule);
    query.bindValue(":access",access);
    query.bindValue(":traitement",traitement);

    return    query.exec();

}

bool archive::modifier(QString selected){

    QSqlQuery query;


    query.prepare(" UPDATE ARCHIVE SET INTITULE= :intitule ,DROIT_ACCESS= :access, TRAITEMENT=:traitement where ID= :id");
    query.bindValue(":id", selected);
    query.bindValue(":intitule",intitule);
    query.bindValue(":access",access);
    query.bindValue(":traitement",traitement);

    return    query.exec();

}

 QSqlQueryModel * archive::afficher(){

     QSqlQueryModel * modal=new QSqlQueryModel();
     modal->setQuery("SELECT * FROM ARCHIVE");

     return modal;

 }
  bool archive::supprimer(QString selected){

      QSqlQuery query;
      query.prepare("Delete from ARCHIVE where ID = :id ");
      query.bindValue(":id", selected);
      return    query.exec();


  }
