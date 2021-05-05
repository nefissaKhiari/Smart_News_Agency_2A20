#ifndef ADD_MAINTENANCE_H
#define ADD_MAINTENANCE_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class add_maintenance;
}

class add_maintenance : public QDialog
{
    Q_OBJECT

public:
    explicit add_maintenance(QWidget *parent = nullptr);
    ~add_maintenance();

    QString panne() const;
    double total() const;
    QString duree() const;
    QString equipement() const;
    QString id() const ;

    void get_equipement();
    void fill_form(QString);

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::add_maintenance *ui;
};

#endif // ADD_MAINTENANCE_H
