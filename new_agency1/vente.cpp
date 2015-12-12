#include "vente.h"

vente::vente()
{

}

vente::vente(QString s1,QString s2,QString s3,QString s4,double x){

    id=s1;
    commande=s2;
    livraison=s3;
    payement=s4;
    prix=x;


}


bool vente::ajouter(){

    QSqlQuery query;


    query.prepare("INSERT INTO VENTE (ID,COMMANDE,LIVRAISON,PAYEMENT,PRIX) VALUES (:id,:commande,:livraison,:payement,:prix)");

    query.bindValue(":id", id);
    query.bindValue(":commande",commande);
    query.bindValue(":livraison",livraison);
    query.bindValue(":payement", payement);
    query.bindValue(":prix",prix);


    return    query.exec();

}

bool vente::modifier(QString selected){

    QSqlQuery query;


    query.prepare(" UPDATE VENTE SET  COMMANDE=:commande, LIVRAISON=:livraison,PAYEMENT=:payement,PRIX=:prix"
                  " where ID= :id");
    query.bindValue(":id", selected);
    query.bindValue(":commande",commande);
    query.bindValue(":livraison",livraison);
    query.bindValue(":payement", payement);
    query.bindValue(":prix",prix);



    return    query.exec();

}

 QSqlQueryModel * vente::afficher(){

     QSqlQueryModel * modal=new QSqlQueryModel();
     modal->setQuery("SELECT * FROM VENTE");

     return modal;

 }

 bool vente::supprimer(QString selected){

      QSqlQuery query;
      query.prepare("Delete from VENTE where ID = :id ");
      query.bindValue(":id", selected);
      return    query.exec();


  }
