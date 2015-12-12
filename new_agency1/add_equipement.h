#ifndef ADD_EQUIPEMENT_H
#define ADD_EQUIPEMENT_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class add_equipement;
}

class add_equipement : public QDialog
{
    Q_OBJECT

public:
    explicit add_equipement(QWidget *parent = nullptr);
    ~add_equipement();

    QString etat() const;
    double prix() const;
    QString date() const;
    QString nom() const;
    QString id() const ;

    void fill_form(QString);

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::add_equipement *ui;
};

#endif // ADD_EQUIPEMENT_H
