#include "add_mission.h"
#include "ui_add_mission.h"

add_mission::add_mission(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_mission)
{
    ui->setupUi(this);
}

add_mission::~add_mission()
{
    delete ui;
}

//recuperation des donnees du formulaire
QString add_mission::id() const { //line edit

    return ui->id->text();
}

QString add_mission::type() const { //line edit

    return ui->type->text();
}

QString add_mission::description() const { //text edit

    return ui->description->toPlainText();
}

//remplissage des champs du formulaire a partir de la base

void add_mission::fill_form(QString selected ) {
    QSqlQuery query;
    query.prepare("select * from MISSION where ID= :ch");
    query.bindValue(":ch", selected);
    query.exec();
    while(query.next()){
        ui->id->setText(query.value(0).toString()); //line edit
        ui->type->setText(query.value(1).toString()); //line edit
        ui->description->setText(query.value(2).toString()); //text edit
    }

}

//config ok et cancel

void add_mission::on_buttonBox_accepted()
{
    accept();
}

void add_mission::on_buttonBox_rejected()
{
    reject();
}
