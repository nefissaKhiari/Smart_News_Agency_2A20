#include "add_commande.h"
#include "ui_add_commande.h"

add_commande::add_commande(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_commande)
{
    ui->setupUi(this);
    get_client();
}

add_commande::~add_commande()
{
    delete ui;
}

//configurer ok et cancel
void add_commande::on_buttonBox_accepted()
{
    accept();
}

void add_commande::on_buttonBox_rejected()
{
    reject();
}

//get form content
int add_commande::attente() const { //combo box

    return ui->attente->value();
}

QString add_commande::client() const { //combo box

    return ui->client->currentText();
}
QString add_commande::id() const { //line edit

    return ui->id->text();
}

//remplissage des champs du formulaire a partir de la base

void add_commande::fill_form(QString selected ) {
    QSqlQuery query;
    query.prepare("select * from COMMANDE where ID= :id");
    query.bindValue(":id", selected);
    query.exec();
    while(query.next()){
  ui->id->setText(query.value(0).toString()); //line edit
   ui->attente->setValue(query.value(2).toInt()); //INT edit
   ui->client->setCurrentText(query.value(1).toString()); //combobox

    }

}

//remplissage du combobox des journaliste a partir de la base
void add_commande::get_client(){
    QSqlQuery query;
    QSqlQueryModel * modal=new QSqlQueryModel();
    query.prepare("select ID from CLIENT");
    query.exec();
    modal->setQuery(query);
    ui->client->setModel(modal);


}
