#ifndef ADD_MISSION_H
#define ADD_MISSION_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class add_mission;
}

class add_mission : public QDialog
{
    Q_OBJECT

public:
    explicit add_mission(QWidget *parent = nullptr);
    ~add_mission();

    QString description() const; //text
    QString type() const ; //line
    QString id() const ; //line

    void fill_form(QString);

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::add_mission *ui;
};

#endif // ADD_MISSION_H
