#include "add_article.h"
#include "ui_add_article.h"

add_article::add_article(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_article)
{
    ui->setupUi(this);
}

add_article::~add_article()
{
    delete ui;
}
/*
void add_article::on_pushButton_clicked()
{
    files.clear();

    QFileDialog dialog(this);
    dialog.setDirectory(QDir::homePath());
    dialog.setFileMode(QFileDialog::ExistingFiles);

    if (dialog.exec())
        files = dialog.selectedFiles();

    QString fileListString;
    foreach(QString file, files)
        fileListString.append( "\"" + QFileInfo(file).path() + "\" " );

    ui->image->setText( fileListString );

}*/

//config ok et cancel
void add_article::on_buttonBox_accepted()
{
    accept();
}

void add_article::on_buttonBox_rejected()
{
    reject();
}

//recuperation des donnees du formulaire
QString add_article::id() const { //line edit

    return ui->id->text();
}

QString add_article::titre() const { //line edit

    return ui->titre->text();
}

QString add_article::categorie() const { //line edit

    return ui->categorie->text();
}
/*
QString add_article::image() const { //line edit

    return ui->image->text();
}
*/
QString add_article::contenu() const { //text edit

    return ui->contenu->toPlainText();
}

//remplissage des champs du formulaire a partir de la base

void add_article::fill_form(QString selected ) {
    QSqlQuery query;
    query.prepare("select * from ARTICLE where ID= :ch");
    query.bindValue(":ch", selected);
    query.exec();
    while(query.next()){
        ui->id->setText(query.value(0).toString()); //line edit
        ui->titre->setText(query.value(1).toString()); //line edit
        ui->categorie->setText(query.value(2).toString()); //line edit
       // ui->image->setText(query.value(1).toString()); //line edit
        ui->contenu->setText(query.value(3).toString()); //text edit
    }

}
