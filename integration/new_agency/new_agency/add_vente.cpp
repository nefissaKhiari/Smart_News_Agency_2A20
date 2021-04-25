#include "add_vente.h"
#include "ui_add_vente.h"

add_vente::add_vente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_vente)
{
    ui->setupUi(this);
    get_commande();
}

add_vente::~add_vente()
{
    delete ui;
}

//configurer ok et cancel
void add_vente::on_buttonBox_accepted()
{
    accept();
}

void add_vente::on_buttonBox_rejected()
{
    reject();
}

//get form content
double add_vente::prix() const { //double

    return ui->prix->value();
}

QString add_vente::commande() const { //combo box

    return ui->commande->currentText();
}

QString add_vente::livraison() const { //combo box

    return ui->livraison->currentText();
}

QString add_vente::payement() const { //combo box

    return ui->payement->currentText();
}
QString add_vente::id() const { //line edit

    return ui->id->text();
}

//remplissage des champs du formulaire a partir de la base

void add_vente::fill_form(QString selected ) {
    QSqlQuery query;
    query.prepare("select * from VENTE where ID= :id");
    query.bindValue(":id", selected);
    query.exec();
    while(query.next()){
  ui->id->setText(query.value(0).toString()); //line edit
   ui->prix->setValue(query.value(2).toReal()); //double edit
   ui->commande->setCurrentText(query.value(1).toString()); //combobox
   ui->livraison->setCurrentText(query.value(3).toString()); //combobox
   ui->payement->setCurrentText(query.value(4).toString()); //combobox


    }

}

//remplissage du combobox des journaliste a partir de la base
void add_vente::get_commande(){
    QSqlQuery query;
    QSqlQueryModel * modal=new QSqlQueryModel();
    query.prepare("select ID from COMMANDE");
    query.exec();
    modal->setQuery(query);
    ui->commande->setModel(modal);


}
