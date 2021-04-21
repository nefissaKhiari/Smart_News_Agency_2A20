#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    //ouverture connection base de donnees
    Connexion c;

    if( c.createconnect()){
     close();
     gestion_wael *go;
     go = new gestion_wael();
     go->show();
     }
}