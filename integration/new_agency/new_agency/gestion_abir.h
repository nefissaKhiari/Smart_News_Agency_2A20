#ifndef GESTION_ABIR_H
#define GESTION_ABIR_H

#include <QMainWindow>
#include <QSortFilterProxyModel>
#include <QTextTableFormat>
#include <QStandardItemModel>
#include <QDialog>
#include <QFileDialog>
#include <QtWidgets/QMessageBox>


#include "archive.h"
#include "add_archive.h"
#include "article.h"
#include "add_article.h"
#include "exportexcelobject.h"
#include "archiver_article.h"
#include "smtp.h"

namespace Ui {
class gestion_abir;
}

class gestion_abir : public QMainWindow
{
    Q_OBJECT

public:
    explicit gestion_abir(QWidget *parent = nullptr);
    ~gestion_abir();

    archive tmp_arch;
    article tmp_art;
    QSortFilterProxyModel *proxy_arch,*proxy_art;
    void show_arch();
    void show_art();
    void show_tables();

private slots:
    void on_actiondelete_archive_triggered();

    void on_actionadd_archive_triggered();

    void on_table_arch_clicked(const QModelIndex &index);

    void on_table_arch_doubleClicked(const QModelIndex &index);

    void on_rech_arch_textChanged(const QString &arg1);

    void on_arch_sel_col_currentIndexChanged(int index);

    void on_export_excel_clicked();

    void on_table_article_clicked(const QModelIndex &index);

    void on_table_article_doubleClicked(const QModelIndex &index);

    void on_rech_article_textChanged(const QString &arg1);

    void on_article_sel_col_currentIndexChanged(int index);

    void on_actionadd_article_triggered();

    void on_actiondelete_article_triggered();

    void on_actionarchiver_article_triggered();

    void on_actionenvoyer_article_triggered();

       void mailSent(QString);

       void on_actiondeconnecter_triggered();

private:
    Ui::gestion_abir *ui;
    QString selected_arch="",selected_art="";
    int sel_col_arch=-1,sel_col_art=-1;
    QString password="7a7a.kaka1998", recipient="medazizbenhaha@gmail.com";
};

#endif // GESTION_ABIR_H
