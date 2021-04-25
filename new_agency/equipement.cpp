#include "equipement.h"

equipement::equipement()
{

}

equipement::equipement(QString s1,QString s2,QString s3,double x,QString s4){

    id=s1;
    nom=s2;
    date=s3;
    prix=x;
    etat=s4;


}


bool equipement::ajouter(){

    QSqlQuery query;


    query.prepare("INSERT INTO EQUIPEMENT VALUES (:id,:nom,:date,:prix,:etat)");

    query.bindValue(":id", id);

    query.bindValue(":nom",nom);
    query.bindValue(":date",date);
    query.bindValue(":prix",prix);
    query.bindValue(":etat",etat);

    return    query.exec();

}

bool equipement::modifier(QString selected){

    QSqlQuery query;


    query.prepare(" UPDATE EQUIPEMENT SET  NOM=:nom, DATE_ACHAT=:date, PRIX=:prix ,ETAT=:etat"
                  " where ID= :id");
    query.bindValue(":id", selected);

    query.bindValue(":nom",nom);
    query.bindValue(":date",date);
    query.bindValue(":prix",prix);
    query.bindValue(":etat",etat);

    return    query.exec();

}

 QSqlQueryModel * equipement::afficher(){

     QSqlQueryModel * modal=new QSqlQueryModel();
     modal->setQuery("SELECT * FROM EQUIPEMENT");

     return modal;

 }

 bool equipement::supprimer(QString selected){

      QSqlQuery query;
      query.prepare("Delete from EQUIPEMENT where ID = :id ");
      query.bindValue(":id", selected);
      return    query.exec();


  }
 int equipement::get_total()
 {
     QSqlQuery query;
     query.prepare("SELECT prix FROM equipement ");
  int total=0;
     if(query.exec())
     {
         while (query.next())
         {
             total+=query.value(0).toInt();
         }
     }
     return total;
 }
