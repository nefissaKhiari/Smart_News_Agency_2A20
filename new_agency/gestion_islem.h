#ifndef GESTION_ISLEM_H
#define GESTION_ISLEM_H

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

#include "vente.h"
#include "add_vente.h"
#include "commande.h"
#include "add_commande.h"
#include "exportexcelobject.h"


namespace Ui {
class gestion_islem;
}

class gestion_islem : public QMainWindow
{
    Q_OBJECT

public:
    explicit gestion_islem(QWidget *parent = nullptr);
    ~gestion_islem();

    commande tmp_commande;
    vente tmp_vente;
    QSortFilterProxyModel *proxy_commande,*proxy_vente;
    void show_vente();
    void show_commande();
    void show_tables();

private slots:

    void on_actionadd_commande_triggered();

    void on_table_commande_clicked(const QModelIndex &index);

    void on_table_commande_doubleClicked(const QModelIndex &index);

    void on_actiondelete_commande_triggered();

    void on_commande_sel_col_currentIndexChanged(const QString &arg1);

    void on_rech_commande_textChanged(const QString &arg1);


    void on_actionadd_vente_triggered();

    void on_table_vente_clicked(const QModelIndex &index);

    void on_table_vente_doubleClicked(const QModelIndex &index);

    void on_actiondelete_vente_triggered();

    void on_vente_sel_col_currentIndexChanged(const QString &arg1);

    void on_rech_vente_textChanged(const QString &arg1);

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_actiondeconnecter_triggered();

private:
    Ui::gestion_islem *ui;
    QString selected_commande="",selected_vente="";
    int sel_col_commande=-1,sel_col_vente=-1;
};

#endif // GESTION_ISLEM_H
