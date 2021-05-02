#ifndef GESTION_ZOUHOUR_H
#define GESTION_ZOUHOUR_H

#include <QMainWindow>
#include <QSortFilterProxyModel>
#include <QTextTableFormat>
#include <QStandardItemModel>
#include <QDialog>
#include <QFileDialog>


#include "missions.h"
#include "emp.h"
#include "stat_mission.h"
#include "arduino.h"


namespace Ui {
class gestion_zouhour;
}

class gestion_zouhour : public QMainWindow
{
    Q_OBJECT

public:
    explicit gestion_zouhour(QWidget *parent = nullptr);
    ~gestion_zouhour();

    emp tmp_emp;
    missions tmp_mission;
    QSortFilterProxyModel *proxy_emp,*proxy_mission;
    void show_emp();
    void show_mission();
    void show_tables();



    QString naissance() const ; //date
    QString nom() const ; //line
    QString prenom() const; //line
    QString mail() const ; //line
    QString id() const ; //line
    QString occupation() const ; //combo
    QString mission() const ; //combo

    void get_missions(); // fill combo

    void fill_form(QString);
    void clear_form();



    QString description() const; //text
    QString type() const ; //line
    QString id2() const ; //line

    void fill_form2(QString);
    void clear_form2();


private slots:

    void on_rech_emp_textChanged(const QString &arg1);

    void on_actiondelete_emp_clicked();


    void on_actionadd_emp_clicked();

    void on_emp_sel_col_currentIndexChanged(int index);

    void on_table_emp_clicked(const QModelIndex &index);

    void on_table_emp_doubleClicked(const QModelIndex &index);



    void on_table_mission_doubleClicked(const QModelIndex &index);

    void on_table_mission_clicked(const QModelIndex &index);

    void on_mission_sel_col_currentIndexChanged(int index);

    void on_rech_mission_textChanged(const QString &arg1);

    void on_actionadd_mission_clicked();

    void on_actiondelete_mission_clicked();

    void on_stat_emp_clicked(bool checked);



    void on_actiondeconnecter_triggered();

    void on_modif_emp_clicked();

    void on_modif_mission_clicked();

private:
    Ui::gestion_zouhour *ui;
    QString selected_emp="",selected_mission="";
    int sel_col_emp=-1,sel_col_mission=-1;
    stat_mission *s;
    Arduino A;
      QByteArray data ;
};

#endif // GESTION_ZOUHOUR_H
