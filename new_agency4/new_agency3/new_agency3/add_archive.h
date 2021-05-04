#ifndef ADD_ARCHIVE_H
#define ADD_ARCHIVE_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class add_archive;
}

class add_archive : public QDialog
{
    Q_OBJECT

public:
    explicit add_archive(QWidget *parent = nullptr);
    ~add_archive();


    QString traitement() const ; //text
    QString intitule() const ; //line
    QString droit_access() const; //line
    QString id() const ; //line

    void fill_form(QString);

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::add_archive *ui;
};

#endif // ADD_ARCHIVE_H
