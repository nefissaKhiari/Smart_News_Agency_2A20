#include "add_archive.h"
#include "ui_add_archive.h"

add_archive::add_archive(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_archive)
{
    ui->setupUi(this);
}

add_archive::~add_archive()
{
    delete ui;
}

//config ok et cancel

void add_archive::on_buttonBox_accepted()
{
    accept();
}

void add_archive::on_buttonBox_rejected()
{
    reject();
}

//recuperation des donnees du formulaire
QString add_archive::id() const { //line edit

    return ui->id->text();
}

QString add_archive::intitule() const { //line edit

    return ui->intitule->text();
}

QString add_archive::droit_access() const { //line edit

    return ui->access->text();
}

QString add_archive::traitement() const { //text edit

    return ui->traitement->toPlainText();
}

//remplissage des champs du formulaire a partir de la base

void add_archive::fill_form(QString selected ) {
    QSqlQuery query;
    query.prepare("select * from ARCHIVE where ID= :ch");
    query.bindValue(":ch", selected);
    query.exec();
    while(query.next()){
        ui->id->setText(query.value(0).toString()); //line edit
        ui->intitule->setText(query.value(1).toString()); //line edit
        ui->access->setText(query.value(2).toString()); //line edit
        ui->traitement->setText(query.value(3).toString()); //text edit
    }

}

