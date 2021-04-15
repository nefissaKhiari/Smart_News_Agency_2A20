#ifndef ADD_EMP_H
#define ADD_EMP_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlQueryModel>


namespace Ui {
class add_emp;
}

class add_emp : public QDialog
{
    Q_OBJECT

public:
    explicit add_emp(QWidget *parent = nullptr);
    ~add_emp();

    QString naissance() const ; //date
    QString nom() const ; //line
    QString prenom() const; //line
    QString mail() const ; //line
    QString id() const ; //line
    QString occupation() const ; //combo
    QString mission() const ; //combo

    void get_missions(); // fill combo

    void fill_form(QString);

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();


private:
    Ui::add_emp *ui;
};

#endif // ADD_EMP_H
