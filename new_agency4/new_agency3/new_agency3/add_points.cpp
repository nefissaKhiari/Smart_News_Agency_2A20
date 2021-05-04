#include "add_points.h"
#include "ui_add_points.h"

add_points::add_points(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_points)
{
    ui->setupUi(this);
    connect(ui->buttonBox, SIGNAL(accepted()),this, SLOT(checkpoint()));
}

add_points::~add_points()
{
    delete ui;
}

//configurer ok et cancel
void add_points::on_buttonBox_accepted()
{
    accept();
}

void add_points::on_buttonBox_rejected()
{
    reject();
}

//get form content
int add_points::points() const { //combo box

    return ui->point->value();
}

void add_points::checkpoint()
{
    QSqlQuery query;

    query.prepare("select MAIL from CLIENT where NOM= :nom");
    query.bindValue(":nom", client);
    query.exec();
    while(query.next()){
    mail=query.value(0).toString();
    }

    QString message="Felicitations,\n vous avez accumulé "+ QString::number(total) +"points !\n pour les transformer en remise de "+ QString::number(remise) +" % veuillez visiter l'application.";

    Smtp* smtp = new Smtp("mohamedaziz.khemira@esprit.tn","wolverine2313", "smtp.gmail.com");
        smtp->sendMail("mohamedaziz.khemira@esprit.tn", mail , "Points de Fidelite",message);
}

void add_points::felicitation()
{
    QSqlQuery query;

     query.prepare("select MAIL from CLIENT where NOM= :nom");
     query.bindValue(":nom", client);
     query.exec();
     while(query.next()){
     mail=query.value(0).toString();
     }

    QString message="Felicitations,\n vous avez recu une remise de "+ QString::number(remise) +"% !\n il vous reste "+ QString::number(total) +" points.";

    Smtp* smtp = new Smtp("mohamedaziz.khemira@esprit.tn","wolverine2313", "smtp.gmail.com");
        smtp->sendMail("mohamedaziz.khemira@esprit.tn", mail , "Points de Fidelite",message);
}


bool add_points::sum_points(QString selected, int added){

    QSqlQuery query;
    query.prepare("select CLIENT,POINTS from CARTE_FID where ID= :id");
    query.bindValue(":id", selected);
    query.exec();
    while(query.next()){
    total=query.value(1).toInt();
    client=query.value(0).toString();
    }

    total+=added;




    set_remise();


    query.prepare(" UPDATE CARTE_FID SET   POINTS=:points"
                  " where ID= :id");
    query.bindValue(":id", selected);
    query.bindValue(":points",total);



    return    query.exec();

}

bool add_points::get_remise(QString selected)
{
    QSqlQuery query;
    query.prepare("select POINTS,CLIENT from CARTE_FID where ID= :id");
    query.bindValue(":id", selected);
    query.exec();
    while(query.next()){
    total=query.value(0).toInt();
    client=query.value(1).toString();

    }

    set_remise();
    reset_points();

    query.prepare(" UPDATE CARTE_FID SET   REMISE=:remise,POINTS=:points "
                  " where ID= :id");
    query.bindValue(":id", selected);
    query.bindValue(":remise",QString::number(remise)+"%");
    query.bindValue(":points",total);

    return    query.exec();

}

void   add_points::set_remise(){

    if (total > 10000) remise=25;
    else if (total > 8000) remise=20;
    else if (total > 6000) remise=15;
    else if (total > 4000) remise=10;
    else if (total > 2000) remise=5;

}

void add_points::reset_points()
{
    if (remise==25) total-=10000;
    else if (remise==20) total -=8000;
    else if (remise==15) total -=6000;
    else if (remise==10) total -=4000 ;
    else if (remise==5) total -=2000 ;
}
