#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "connexion.h"
#include "gestion_abir.h"
#include "gestion_aziz.h"
#include "gestion_islem.h"
#include "gestion_wael.h"
#include "gestion_zouhour.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

QString userID;
QString given_password;

private slots:
    void on_pushButton_submit_clicked();

private:
    Ui::MainWindow *ui;
    Connexion c;
};
#endif // MAINWINDOW_H
