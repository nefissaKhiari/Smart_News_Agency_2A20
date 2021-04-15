#include "add_emp.h"
#include "ui_add_emp.h"
//interface graphique:ui
add_emp::add_emp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_emp)
{
    ui->setupUi(this);
    get_missions();
}

add_emp::~add_emp()
{
    delete ui;
}

//config ok et annuler
void add_emp::on_buttonBox_accepted()
{
    accept();
}

void add_emp::on_buttonBox_rejected()
{
    reject();
}

//recuperation des donnees du formulaire
QString add_emp::id() const { //line edit

    return ui->id->text();
}

QString add_emp::nom() const { //line edit

    return ui->nom->text();
}

QString add_emp::prenom() const { //line edit

    return ui->prenom->text();
}

QString add_emp::mail() const { //line edit

    return ui->mail->text();
}

QString add_emp::naissance() const { //date
    return ui->naissance->date().toString("dd.MM.yyyy");
}

QString add_emp::occupation() const { //combo box

    return ui->occupation->currentText();
}

QString add_emp::mission() const { //combo box//affectation mission l employee : metier

    return ui->mission->currentText();
}

void add_emp::get_missions(){
    QSqlQuery query;
    QSqlQueryModel * modal=new QSqlQueryModel();
    query.prepare("select TYPE from MISSION");
    query.exec();
    modal->setQuery(query);
    ui->mission->setModel(modal);


}

//remplissage des champs du formulaire a partir de la base

void add_emp::fill_form(QString selected ) {
    QSqlQuery query;
    query.prepare("select * from Employe where ID= :ch");
    query.bindValue(":ch", selected);//bindvalue pour eviter :syberattack
    query.exec();
    while(query.next()){
        ui->id->setText(query.value(0).toString()); //line edit
        ui->nom->setText(query.value(1).toString()); //line edit
        ui->prenom->setText(query.value(2).toString()); //line edit
        ui->mail->setText(query.value(3).toString()); //line edit
        ui->naissance->setDate(QDate::fromString(query.value(4).toString(),"dd.MM.yyyy"));//date
        ui->occupation->setCurrentText(query.value(5).toString()); //combobox
        ui->mission->setCurrentText(query.value(6).toString()); //combobox
    }

}



