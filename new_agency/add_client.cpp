#include "add_client.h"
#include "ui_add_client.h"

add_client::add_client(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_client)
{
    ui->setupUi(this);
}

add_client::~add_client()
{
    delete ui;
}

//configuration ok et cancel
void add_client::on_buttonBox_accepted()
{
    accept();
}

void add_client::on_buttonBox_rejected()
{
    reject();
}

//get form content
QString add_client::mail() const { //line edit

    return ui->mail->text();
}

QString add_client::id() const { //line edit

    return ui->id->text();
}

QString add_client::nom() const { //line edit

    return ui->nom->text();
}

QString add_client::naissance() const { //date edit

    return ui->naissance->date().toString("dd.MM.yyyy");
}

//remplissage des champs du formulaire a partir de la base

void add_client::fill_form(QString selected ) {
    QSqlQuery query;
    query.prepare("select * from CLIENT where ID= :id");
    query.bindValue(":id", selected);
    query.exec();
    while(query.next()){
  ui->id->setText(query.value(0).toString()); //line edit
   ui->nom->setText(query.value(1).toString()); //line edit
   ui->naissance->setDate(QDate::fromString(query.value(2).toString(),"dd.MM.yyyy"));//date
   ui->mail->setText(query.value(3).toString()); //line edit

    }

}
