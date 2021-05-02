#include "emp.h"

emp::emp()
{

}

emp::emp(QString s1 ,QString s2,QString s3 ,QString s4 ,QString s5,QString s6,QString s7 ){

    id=s1;
    nom=s2;
    prenom=s3;
    mail=s4;
    naissance=s5;
    occupation=s6;
    mission=s7;
}


bool emp::ajouter(){

    QSqlQuery query;


    query.prepare("INSERT INTO EMPLOYE(ID,NOM,PRENOM,MAIL,NAISSANCE,OCCUPATION,MISSION) VALUES (:id, :nom, :prenom ,:mail,:naissance,:occupation,:mission)");

    query.bindValue(":id", id);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":mail", mail);
    query.bindValue(":naissance", naissance);
    query.bindValue(":occupation", occupation);
    query.bindValue(":mission", mission);

    return    query.exec();

}

bool emp::modifier(QString selected){

    QSqlQuery query;


    query.prepare(" UPDATE EMPLOYE SET NOM= :nom ,PRENOM= :prenom ,MAIL= :mail,NAISSANCE= :naissance ,OCCUPATION= :occupation,MISSION= :mission "
                  "where ID= :id");
    query.bindValue(":id", selected);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":mail", mail);
    query.bindValue(":naissance", naissance);
    query.bindValue(":occupation", occupation);
    query.bindValue(":mission", mission);


    return    query.exec();

}

 QSqlQueryModel * emp::afficher(){

     QSqlQueryModel * modal=new QSqlQueryModel();
     modal->setQuery("SELECT * FROM EMPLOYE");

     return modal;

 }
  bool emp::supprimer(QString selected){

      QSqlQuery query;
      query.prepare("Delete from EMPLOYE where ID = :id ");
      query.bindValue(":id", selected);
      return    query.exec();


  }

