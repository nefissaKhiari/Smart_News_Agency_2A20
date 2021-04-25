#include "client.h"

client::client()
{

}

client::client(QString s1,QString s2,QString s3,QString s4){

    id=s1;
    nom=s2;
    naissance=s3;
    mail=s4;

}


bool client::ajouter(){

    QSqlQuery query;


    query.prepare("INSERT INTO CLIENT (ID,NOM,NAISSANCE,MAIL) VALUES (:id,:nom,:naissance,:mail)");

    query.bindValue(":id", id);
    query.bindValue(":nom",nom);
    query.bindValue(":naissance",naissance);
    query.bindValue(":mail",mail);


    return    query.exec();

}

bool client::modifier(QString selected){

    QSqlQuery query;


    query.prepare(" UPDATE CLIENT SET NOM= :nom, NAISSANCE=:naissance, MAIL=:mail"
                  " where ID= :id");
    query.bindValue(":id", selected);
    query.bindValue(":nom",nom);
    query.bindValue(":naissance",naissance);
    query.bindValue(":mail",mail);


    return    query.exec();

}

 QSqlQueryModel * client::afficher(){

     QSqlQueryModel * modal=new QSqlQueryModel();
     modal->setQuery("SELECT * FROM CLIENT");

     return modal;

 }
  bool client::supprimer(QString selected){

      QSqlQuery query;
      query.prepare("Delete from CLIENT where ID = :id ");
      query.bindValue(":id", selected);
      return    query.exec();


  }
