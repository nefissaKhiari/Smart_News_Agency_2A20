#include "employesmission.h"

employesmission::employesmission()
{

}
employesmission::employesmission(QString id,QString nom,QString idmission,QString idemp1,QString idemp2)
{
    this->id=id;
    this->nom=nom;
    this->idmission=idmission;
    this->idemp1=idemp1;
    this->idemp2=idemp2;
}
bool employesmission::ajouter()
{
    QSqlQuery query;


    query.prepare("INSERT INTO employesmission(id,nom,idmission,idemp1,idemp2) VALUES (:id, :nom, :idmission ,:idemp1,:idemp2)");

    query.bindValue(":id", id);
    query.bindValue(":nom", nom);
    query.bindValue(":idmission",idmission);
    query.bindValue(":idemp1", idemp1);
    query.bindValue(":idemp2", idemp2);

    return    query.exec();
}
QSqlQueryModel * employesmission::afficher(){

    QSqlQueryModel * modal=new QSqlQueryModel();
    modal->setQuery("SELECT * FROM employesmission");

    return modal;
}
bool employesmission::supprimer(QString selected){

    QSqlQuery query;
    query.prepare("Delete from employesmission where ID = :id ");
    query.bindValue(":id", selected);
    return    query.exec();


}
bool employesmission::modifier(QString selected){

    QSqlQuery query;


    query.prepare(" UPDATE employesmission SET nom= :nom ,idmission= :idmission,idemp1=:idemp1,idemp2=:idemp2 where ID= :id");
    query.bindValue(":id", selected);
    query.bindValue(":nom",nom);
    query.bindValue(":idmission",idmission);
    query.bindValue(":idemp1", idemp1);
    query.bindValue(":idemp2", idemp2);


    return    query.exec();

}
