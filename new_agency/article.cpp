#include "article.h"

article::article()
{

}

article::article(QString s1/* ,QString s2*/,QString s3,QString s4,QString s5 ){

    id=s1;
   // image=s2;
    titre=s3;
    categorie=s4;
    contenu=s5;


}


bool article::ajouter(){

    QSqlQuery query;


    query.prepare("INSERT INTO ARTICLE(ID, TITRE,CATEGORIE,CONTENU) VALUES (:id, :titre,:categorie,:contenu)");

    query.bindValue(":id", id);
   // query.bindValue(":image",image);
    query.bindValue(":titre",titre);
    query.bindValue(":categorie",categorie);
    query.bindValue(":contenu",contenu);

    return    query.exec();

}

bool article::modifier(QString selected){

    QSqlQuery query;


    query.prepare(" UPDATE ARTICLE SET TITRE= :titre, CATEGORIE=:categorie,CONTENU=:contenu"
                  " where ID= :id");
    query.bindValue(":id", selected);
   // query.bindValue(":image",image);
    query.bindValue(":titre",titre);
    query.bindValue(":categorie",categorie);
    query.bindValue(":contenu",contenu);


    return    query.exec();

}

 QSqlQueryModel * article::afficher(){

     QSqlQueryModel * modal=new QSqlQueryModel();
     modal->setQuery("SELECT * FROM ARTICLE");

     return modal;

 }
  bool article::supprimer(QString selected){

      QSqlQuery query;
      query.prepare("Delete from ARTICLE where ID = :id ");
      query.bindValue(":id", selected);
      return    query.exec();


  }

  bool article::archiver(QString selected,QString archive){

      QSqlQuery query;
      query.prepare(" UPDATE ARTICLE SET DATE_ARCHIVAGE= SYSDATE ,ARCHIVE= :archive where ID= :id");
      query.bindValue(":id", selected);
      query.bindValue(":archive", archive);
      return    query.exec();


  }
