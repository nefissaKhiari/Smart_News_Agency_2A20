#ifndef GESTION_WAEL_H
#define GESTION_WAEL_H

#include <QMainWindow>
#include <QSortFilterProxyModel>
#include <QTextTableFormat>
#include <QStandardItemModel>
#include <QDialog>
#include <QFileDialog>
#include <QMessageBox>

#include <QPainter>
#include <QtPrintSupport/QPrinter>
#include <QTextDocument>
#include <QPrintDialog>
#include <QTextStream>


#include "equipement.h"
#include "add_equipement.h"
#include "maintenance.h"
#include "add_maintenance.h"

namespace Ui {
class gestion_wael;
}

class gestion_wael : public QMainWindow
{
    Q_OBJECT

public:
    explicit gestion_wael(QWidget *parent = nullptr);
    ~gestion_wael();

    equipement tmp_equipement;
    maintenance tmp_maintenance;
    QSortFilterProxyModel *proxy_equipement,*proxy_maintenance;
    void show_maintenance();
    void show_equipement();
    void show_tables();

private slots:
    void on_actionadd_equipement_triggered();

    void on_table_equipement_clicked(const QModelIndex &index);

    void on_table_equipement_doubleClicked(const QModelIndex &index);

    void on_actiondelete_equipement_triggered();

    void on_equipement_sel_col_currentIndexChanged(const QString &arg1);

    void on_rech_equipement_textChanged(const QString &arg1);

    void on_actionadd_maintenance_triggered();

    void on_table_maintenance_clicked(const QModelIndex &index);

    void on_table_maintenance_doubleClicked(const QModelIndex &index);

    void on_actiondelete_maintenance_triggered();

    void on_maintenance_sel_col_currentIndexChanged(const QString &arg1);

    void on_rech_maintenance_textChanged(const QString &arg1);

    void on_pushButton_2_clicked();

    void on_actiondeconnecter_triggered();

private:
    Ui::gestion_wael *ui;
    QString selected_equipement="",selected_maintenance="";
    int sel_col_equipement=-1,sel_col_maintenance=-1;
};

#endif // GESTION_WAEL_H
