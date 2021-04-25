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

#include "mainwindowvideo.h"
#include "equipement.h"
#include "add_equipement.h"
#include "maintenance.h"
#include "add_maintenance.h"
#include <QMediaPlayer>
#include <QVideoWidget>

namespace Ui {
class gestion_wael;
}

class gestion_wael : public QMainWindow
{
    Q_OBJECT
public slots:
   void clockTimer();
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

   // void on_video_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

  //  void on_pushButton_6_clicked();

   // void on_pushButton_7_clicked();

    void on_play_clicked();

    void on_stop_clicked();

private:
    MainWindowvideo*video;
    Ui::gestion_wael *ui;
    QMediaPlayer* player;
    QVideoWidget* vw;
      QString filename;
       QTimer *qTimer;
       QMediaPlayer * music = new QMediaPlayer();
    QString selected_equipement="",selected_maintenance="";
    int sel_col_equipement=-1,sel_col_maintenance=-1;
};

#endif // GESTION_WAEL_H
