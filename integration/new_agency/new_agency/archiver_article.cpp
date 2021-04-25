#include "archiver_article.h"
#include "ui_archiver_article.h"

archiver_article::archiver_article(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::archiver_article)
{
    ui->setupUi(this);
    get_archives();
}

archiver_article::~archiver_article()
{
    delete ui;
}

void archiver_article::on_buttonBox_accepted()
{
    accept();
}

void archiver_article::on_buttonBox_rejected()
{
    reject();
}

void archiver_article::get_archives(){
    QSqlQuery query;
    QSqlQueryModel * modal=new QSqlQueryModel();
    query.prepare("select INTITULE from ARCHIVE");
    query.exec();
    modal->setQuery(query);
    ui->archive->setModel(modal);


}

QString archiver_article::archive() const { //combo box

    return ui->archive->currentText();
}
