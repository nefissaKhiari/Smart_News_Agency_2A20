#include "add_maintenance.h"
#include "ui_add_maintenance.h"

add_maintenance::add_maintenance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_maintenance)
{
    ui->setupUi(this);
    get_equipement();
}

add_maintenance::~add_maintenance()
{
    delete ui;
}

//configurer ok et cancel
void add_maintenance::on_buttonBox_accepted()
{
    accept();
}

void add_maintenance::on_buttonBox_rejected()
{
    reject();
}

//get form content

double add_maintenance::total() const{ //float

    return ui->total->value();
}

QString add_maintenance::equipement() const { //combo box

    return ui->equipement->currentText();
}

QString add_maintenance::panne() const { //combo box

    return ui->panne->currentText();
}

QString add_maintenance::duree() const { //time

    return ui->duree->time().toString("hh:mm");
}

QString add_maintenance::id() const { //line edit

    return ui->id->text();
}

//remplissage des champs du formulaire a partir de la base

void add_maintenance::fill_form(QString selected ) {
    QSqlQuery query;
    query.prepare("select * from MAINTENANCE where ID= :id");
    query.bindValue(":id", selected);
    query.exec();
    while(query.next()){
   ui->id->setText(query.value(0).toString()); //line edit
   ui->equipement->setCurrentText(query.value(1).toString()); //combobox
   ui->duree->setTime(QTime::fromString(query.value(2).toString(),"hh:mm"));//time
   ui->total->setValue(query.value(3).toReal()); // reel
   ui->panne->setCurrentText(query.value(4).toString()); //combobox

    }

}

//remplissage du combobox des journaliste a partir de la base
void add_maintenance::get_equipement(){
    QSqlQuery query;
    QSqlQueryModel * modal=new QSqlQueryModel();
    query.prepare("select NOM from EQUIPEMENT");
    query.exec();
    modal->setQuery(query);
    ui->equipement->setModel(modal);


}
