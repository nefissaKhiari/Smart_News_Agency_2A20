#include "commande.h"

commande::commande()
{

}

commande::commande(QString s1,QString s2,int x){

    id=s1;
    client=s2;
    attente=x;


}


bool commande::ajouter(){

    QSqlQuery query;


    query.prepare("INSERT INTO COMMANDE (ID,CLIENT,ATTENTE) VALUES (:id,:client,:attente)");

    query.bindValue(":id", id);
    query.bindValue(":client",client);
    query.bindValue(":attente",attente);


    return    query.exec();

}

bool commande::modifier(QString selected){

    QSqlQuery query;


    query.prepare(" UPDATE COMMANDE SET  CLIENT=:client, ATTENTE=:attente"
                  " where ID= :id");
    query.bindValue(":id", selected);
    query.bindValue(":client",client);
    query.bindValue(":attente",attente);



    return    query.exec();

}

 QSqlQueryModel * commande::afficher(){

     QSqlQueryModel * modal=new QSqlQueryModel();
     modal->setQuery("SELECT * FROM COMMANDE");

     return modal;

 }
  bool commande::supprimer(QString selected){

      QSqlQuery query;
      query.prepare("Delete from COMMANDE where ID = :id ");
      query.bindValue(":id", selected);
      return    query.exec();


  }
