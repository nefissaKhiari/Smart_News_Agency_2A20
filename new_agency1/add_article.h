#ifndef ADD_ARTICLE_H
#define ADD_ARTICLE_H

#include <QDialog>
#include <QFileDialog>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class add_article;
}

class add_article : public QDialog
{
    Q_OBJECT

public:
    explicit add_article(QWidget *parent = nullptr);
    ~add_article();

    QStringList files;

   // QString image() const ; //line
    QString categorie() const ; //line
    QString titre() const; //line
    QString id() const ; //line
    QString contenu() const; //text


    void fill_form(QString);

private slots:
  //  void on_pushButton_clicked();

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::add_article *ui;


};

#endif // ADD_ARTICLE_H
