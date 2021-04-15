#ifndef GESTION_ZOUHOUR_H
#define GESTION_ZOUHOUR_H

#include <QMainWindow>
#include <QSortFilterProxyModel>
#include <QTextTableFormat>
#include <QStandardItemModel>
#include <QDialog>
#include <QFileDialog>


#include "mission.h"
#include "add_mission.h"
#include "emp.h"
#include "add_emp.h"
#include "stat_mission.h"



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
    mission tmp_mission;
    QSortFilterProxyModel *proxy_emp,*proxy_mission;
    void show_emp();
    void show_mission();
    void show_tables();
private slots:

    void on_rech_emp_textChanged(const QString &arg1);

    void on_actiondelete_emp_triggered();


    void on_actionadd_emp_triggered();

    void on_emp_sel_col_currentIndexChanged(int index);

    void on_table_emp_clicked(const QModelIndex &index);

    void on_table_emp_doubleClicked(const QModelIndex &index);



    void on_table_mission_doubleClicked(const QModelIndex &index);

    void on_table_mission_clicked(const QModelIndex &index);

    void on_mission_sel_col_currentIndexChanged(int index);

    void on_rech_mission_textChanged(const QString &arg1);

    void on_actionadd_mission_triggered();

    void on_actiondelete_mission_triggered();

    void on_stat_emp_clicked(bool checked);

private:
    Ui::gestion_zouhour *ui;
    QString selected_emp="",selected_mission="";
    int sel_col_emp=-1,sel_col_mission=-1;
    stat_mission *s;
};

#endif // GESTION_ZOUHOUR_H
