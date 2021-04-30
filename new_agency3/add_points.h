#ifndef ADD_POINTS_H
#define ADD_POINTS_H

#include <QDialog>
#include "smtp.h"
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class add_points;
}

class add_points : public QDialog
{
    Q_OBJECT

public:
    explicit add_points(QWidget *parent = nullptr);
    ~add_points();


    int points() const;
    bool sum_points(QString,int);
    bool get_remise(QString);

    void set_remise();
    void reset_points();

    int total=0,remise=0;
    QString client,mail;


public slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void checkpoint();
    void felicitation();



private:
    Ui::add_points *ui;
};

#endif // ADD_POINTS_H
