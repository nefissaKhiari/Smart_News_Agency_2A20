#include "add_carte.h"
#include "ui_add_carte.h"

add_carte::add_carte(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_carte)
{
    ui->setupUi(this);
    get_client();
}

add_carte::~add_carte()
{
    delete ui;
}

//configurer ok et cancel
void add_carte::on_buttonBox_accepted()
{
    accept();
}

void add_carte::on_buttonBox_rejected()
{
    reject();
}

//get form content
int add_carte::points() const { //combo box

    return ui->point->value();
}

QString add_carte::client() const { //combo box

    return ui->client->currentText();
}

QString add_carte::id() const { //line edit

    return ui->id->text();
}

//remplissage des champs du formulaire a partir de la base

void add_carte::fill_form(QString selected ) {
    QSqlQuery query;
    query.prepare("select * from CARTE_FID where ID= :id");
    query.bindValue(":id", selected);
    query.exec();
    while(query.next()){
  ui->id->setText(query.value(0).toString()); //line edit
   ui->point->setValue(query.value(2).toInt()); //INT edit
   ui->client->setCurrentText(query.value(1).toString()); //combobox

    }

}

//remplissage du combobox des journaliste a partir de la base
void add_carte::get_client(){
    QSqlQuery query;
    QSqlQueryModel * modal=new QSqlQueryModel();
    query.prepare("select NOM from CLIENT");
    query.exec();
    modal->setQuery(query);
    ui->client->setModel(modal);


}
