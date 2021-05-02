#include "carte.h"

carte::carte()
{

}

carte::carte(QString s1,QString s2,int x){

    id=s1;
    client=s2;
    points=x;


}


bool carte::ajouter(){

    QSqlQuery query;


    query.prepare("INSERT INTO CARTE_FID (ID,CLIENT,POINTS,REMISE) VALUES (:id,:client,:points,:remise)");

    query.bindValue(":id", id);
    query.bindValue(":client",client);
    query.bindValue(":points",points);
    query.bindValue(":remise","Pas de remise");


    return    query.exec();

}

bool carte::modifier(QString selected){

    QSqlQuery query;


    query.prepare(" UPDATE CARTE_FID SET  CLIENT=:client, POINTS=:points"
                  " where ID= :id");
    query.bindValue(":id", selected);
    query.bindValue(":client",client);
    query.bindValue(":points",points);



    return    query.exec();

}

 QSqlQueryModel * carte::afficher(){

     QSqlQueryModel * modal=new QSqlQueryModel();
     modal->setQuery("SELECT * FROM CARTE_FID");

     return modal;

 }
  bool carte::supprimer(QString selected){

      QSqlQuery query;
      query.prepare("Delete from CARTE_FID where ID = :id ");
      query.bindValue(":id", selected);
      return    query.exec();


  }


