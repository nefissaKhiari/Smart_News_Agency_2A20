#ifndef ARCHIVER_ARTICLE_H
#define ARCHIVER_ARTICLE_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class archiver_article;
}

class archiver_article : public QDialog
{
    Q_OBJECT

public:
    explicit archiver_article(QWidget *parent = nullptr);
    ~archiver_article();

     QString archive() const ;
    void get_archives();
private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::archiver_article *ui;
};

#endif // ARCHIVER_ARTICLE_H
