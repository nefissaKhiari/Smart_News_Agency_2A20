#include "add_equipement.h"
#include "ui_add_equipement.h"

add_equipement::add_equipement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_equipement)
{
    ui->setupUi(this);
}

add_equipement::~add_equipement()
{
    delete ui;
}

//configurer ok et cancel
void add_equipement::on_buttonBox_accepted()
{
    accept();
}

void add_equipement::on_buttonBox_rejected()
{
    reject();
}

//get form content

double add_equipement::prix() const{ //float

    return ui->prix->value();
}

QString add_equipement::etat() const { //combo box

    return ui->etat->currentText();
}

QString add_equipement::nom() const { //line edit

    return ui->nom->text();
}

QString add_equipement::date() const { //time

    return ui->date->date().toString("dd.MM.yyyy");
}

QString add_equipement::id() const { //line edit

    return ui->id->text();
}

//remplissage des champs du formulaire a partir de la base

void add_equipement::fill_form(QString selected ) {
    QSqlQuery query;
    query.prepare("select * from EQUIPEMENT where ID= :id");
    query.bindValue(":id", selected);
    query.exec();
    while(query.next()){
   ui->id->setText(query.value(0).toString()); //line edit
   ui->nom->setText(query.value(1).toString()); //line edit
   ui->date->setDate(QDate::fromString(query.value(2).toString(),"dd.MM.yyyy"));//date
   ui->prix->setValue(query.value(3).toReal()); // reel
   ui->etat->setCurrentText(query.value(4).toString()); //combobox

    }

}
