#ifndef GESTION_AZIZ_H
#define GESTION_AZIZ_H

#include <QMainWindow>
#include <QSortFilterProxyModel>
#include <QTextTableFormat>
#include <QStandardItemModel>
#include <QDialog>
#include <QFileDialog>
#include <QMessageBox>

#include "carte.h"
#include "add_carte.h"
#include "client.h"
#include "add_client.h"
#include "add_points.h"

namespace Ui {
class gestion_aziz;
}

class gestion_aziz : public QMainWindow
{
    Q_OBJECT

public:
    explicit gestion_aziz(QWidget *parent = nullptr);
    ~gestion_aziz();

    client tmp_client;
    carte tmp_carte;
    QSortFilterProxyModel *proxy_client,*proxy_carte;
    void show_carte();
    void show_client();
    void show_tables();

private slots:

    void on_actionadd_client_triggered();

    void on_table_client_clicked(const QModelIndex &index);

    void on_table_client_doubleClicked(const QModelIndex &index);

    void on_actiondelete_client_triggered();

    void on_client_sel_col_currentIndexChanged(const QString &arg1);

    void on_rech_client_textChanged(const QString &arg1);


    void on_actionadd_carte_triggered();

    void on_table_carte_clicked(const QModelIndex &index);

    void on_table_carte_doubleClicked(const QModelIndex &index);

    void on_actiondelete_carte_triggered();

    void on_carte_sel_col_currentIndexChanged(const QString &arg1);

    void on_rech_carte_textChanged(const QString &arg1);

    void on_actionadd_points_triggered();

    void on_actionget_remise_triggered();

    void on_actiondeconnecter_triggered();

private:
    Ui::gestion_aziz *ui;
    QString selected_client="",selected_carte="";
    int sel_col_client=-1,sel_col_carte=-1;
};

#endif // GESTION_AZIZ_H
