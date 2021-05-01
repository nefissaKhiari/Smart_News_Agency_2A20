#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    c.createconnect();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_submit_clicked()
{
    QString userID;


    //extract userId and password

    userID=ui->lineEdit_userID->text();;
    given_password= ui->lineEdit_password->text();

    //check if user is in default list
    QString users="zouhour/abir/islem/aziz/wael"; // you add your ID in format admin(first 2 letters of your departement name)
    bool user_ex = users.contains(userID);

    //check if password is in default list
    QString password ="admin/1234"; // you add your password in format ADM-(first 2 letters of your departement name)
    bool pass_ex = password.contains(given_password);





if(user_ex && pass_ex){
close();

//open zouhour Space
/*
 ---------------pour tester------------
 username : zouhour
 mdp : admin
 --------------------------------------
*/

if (userID=="zouhour"){

gestion_zouhour *ws;
ws = new gestion_zouhour();
ws->setWindowTitle("News Agency");
ws->show();


}

//open abir Space
/*
 ---------------pour tester------------
 username : abir
 mdp : admin
 --------------------------------------
*/

if (userID=="abir"){
gestion_abir *ws;
ws = new gestion_abir();
ws->setWindowTitle("News Agency");
ws->show();
}

//open islem Space
/*
 ---------------pour tester------------
 username : islem
 mdp : admin ou 1234
 --------------------------------------
*/

if (userID=="islem"){
gestion_islem *ws;
ws = new gestion_islem();
ws->setWindowTitle("News Agency");
ws->show();
}

//open aziz Space
/*
 ---------------pour tester------------
 username : aziz
 mdp : admin
 --------------------------------------
*/

if (userID=="aziz"){
gestion_aziz *ws;
ws = new gestion_aziz();
ws->setWindowTitle("News Agency");
ws->show();
}

//open wael Space
/*
 ---------------pour tester------------
 username : wael
 mdp : admin
 --------------------------------------
*/

if (userID=="wael"){
gestion_wael *ws;
ws = new gestion_wael();
ws->setWindowTitle("News Agency");
ws->show();
}


}//end test login
else if( userID.length()<2 )
       ui->statusbar->showMessage("Check userID format",3000);
    else if( given_password.length()<4 )
           ui->statusbar->showMessage("Password too short",3000);
else ui->statusbar->showMessage("login and password don't match",3000);

}
