#include "gestion_zouhour.h"
#include "ui_gestion_zouhour.h"

#include "mainwindow.h"


gestion_zouhour::gestion_zouhour(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gestion_zouhour)
{
    ui->setupUi(this);

    get_missions();

    //affichage contenu base
    show_tables();
  //arduino
    int ret=A.connect_arduino();
                switch(ret){
                case(0):qDebug()<< "arduino is availble and connected to :"<< A.getarduino_port_name();
                    break;
                case(1):qDebug()<< "arduino is availble but not connected to :"<< A.getarduino_port_name();
                    break;
                case(-1):qDebug()<< "arduino is not availble";
                }
                QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label()));

}

gestion_zouhour::~gestion_zouhour()
{
    delete ui;
}

void gestion_zouhour::show_tables()
{
show_emp();
show_mission();
}

/************************** employe ********************************/


//recuperation des donnees du formulaire
QString gestion_zouhour::id() const { //line edit

    return ui->id->text();
}

QString gestion_zouhour::nom() const { //line edit

    return ui->nom->text();
}

QString gestion_zouhour::prenom() const { //line edit

    return ui->prenom->text();
}

QString gestion_zouhour::mail() const { //line edit

    return ui->mail->text();
}

QString gestion_zouhour::naissance() const { //date
    return ui->naissance->date().toString("dd.MM.yyyy");
}

QString gestion_zouhour::occupation() const { //combo box

    return ui->occupation->currentText();
}

QString gestion_zouhour::mission() const { //combo box

    return ui->mission->currentText();
}

void gestion_zouhour::get_missions(){
    QSqlQuery query;
    QSqlQueryModel * modal=new QSqlQueryModel();
    query.prepare("select TYPE from MISSION");
    query.exec();
    modal->setQuery(query);
    ui->mission->setModel(modal);


}

//remplissage des champs du formulaire a partir de la base

void gestion_zouhour::fill_form(QString selected ) {
    QSqlQuery query;
    query.prepare("select * from Employe where ID= :ch");
    query.bindValue(":ch", selected);
    query.exec();
    while(query.next()){
        ui->id->setText(query.value(0).toString()); //line edit
        ui->nom->setText(query.value(1).toString()); //line edit
        ui->prenom->setText(query.value(2).toString()); //line edit
        ui->mail->setText(query.value(3).toString()); //line edit
        ui->naissance->setDate(QDate::fromString(query.value(4).toString(),"dd.MM.yyyy"));//date
        ui->occupation->setCurrentText(query.value(5).toString()); //combobox
        ui->mission->setCurrentText(query.value(6).toString()); //combobox
    }

}

void gestion_zouhour::clear_form() {

        ui->id->clear();
        ui->nom->clear();
        ui->prenom->clear();
        ui->mail->clear();
        ui->naissance->clear();
        ui->occupation->setCurrentIndex(0);
        ui->mission->setCurrentIndex(0);


}



//affichage
void gestion_zouhour::show_emp()
{
    //creation model (masque du tableau) : permet recherche et tri
        proxy_emp = new QSortFilterProxyModel();

     //definir la source (tableau original)
        proxy_emp->setSourceModel(tmp_emp.afficher());

     //pour la recherche
        proxy_emp->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majiscule et miniscule)
        //remplissage tableau avec le masque
        ui->table_emp->setModel(proxy_emp);
}

//recherche dynamique
void gestion_zouhour::on_emp_sel_col_currentIndexChanged(int index)
{
    sel_col_emp=ui->emp_sel_col->currentIndex()-1;
    proxy_emp->setFilterKeyColumn(sel_col_emp); // chercher dans tout le tableau (-1) ou donner le numero de la colone
}

void gestion_zouhour::on_rech_emp_textChanged(const QString &arg1)
{
    proxy_emp->setFilterFixedString(arg1);

}

//ajout
void gestion_zouhour::on_actionadd_emp_clicked()
{

      //recuperation des donnees
        QString s1=id();
        QString s2=nom();
        QString s3=prenom();
        QString s4=mail();
        QString s5=naissance();
        QString s6=occupation();
        QString s7=mission();

        //ajout
        emp mc(s1,s2,s3,s4,s5,s6,s7);
        mc.ajouter();

        //refresh du tableau (affichage)
          show_emp();

           clear_form();
}

//get id from selected row
void gestion_zouhour::on_table_emp_clicked(const QModelIndex &index)
{
    selected_emp=ui->table_emp->model()->data(index).toString();
}

//suppression
void gestion_zouhour::on_actiondelete_emp_clicked()
{
    emp mc;
  mc.supprimer(selected_emp);

 //refresh du tableau (affichage)
   show_emp();
}


//modification

void gestion_zouhour::on_table_emp_doubleClicked(const QModelIndex &index)
{

fill_form(selected_emp);





}


void gestion_zouhour::on_modif_emp_clicked()
{
    //recuperation des donnees
      QString s2=nom();
      QString s3=prenom();
      QString s4=mail();
      QString s5=naissance();
      QString s6=occupation();
       QString s7=mission();

      //mofication
      emp mc(selected_emp,s2,s3,s4,s5,s6,s7);
      mc.modifier(selected_emp);

      //refresh du tableau (affichage)
        show_emp();

        clear_form();
}

/************************** mission ********************************/

//recuperation des donnees du formulaire
QString gestion_zouhour::id2() const { //line edit

    return ui->id2->text();
}

QString gestion_zouhour::type() const { //line edit

    return ui->type->text();
}

QString gestion_zouhour::description() const { //text edit

    return ui->description->toPlainText();
}

//remplissage des champs du formulaire a partir de la base

void gestion_zouhour::fill_form2(QString selected ) {
    QSqlQuery query;
    query.prepare("select * from MISSION where ID= :ch");
    query.bindValue(":ch", selected);
    query.exec();
    while(query.next()){
        ui->id2->setText(query.value(0).toString()); //line edit
        ui->type->setText(query.value(1).toString()); //line edit
        ui->description->setText(query.value(2).toString()); //text edit
    }

}

void gestion_zouhour::clear_form2() {

        ui->id2->clear();
        ui->type->clear();
        ui->description->clear();

}



//affichage
void gestion_zouhour::show_mission()
{
    //creation model (masque du tableau) : permet recherche et tri
        proxy_mission = new QSortFilterProxyModel();

     //definir la source (tableau original)
        proxy_mission->setSourceModel(tmp_mission.afficher());

     //pour la recherche
        proxy_mission->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majiscule et miniscule)
       //remplissage tableau avec le masque
        ui->table_mission->setModel(proxy_mission);
}

//recherche dynamique
void gestion_zouhour::on_mission_sel_col_currentIndexChanged(int index)
{
    sel_col_mission=ui->mission_sel_col->currentIndex()-1;
    proxy_mission->setFilterKeyColumn(sel_col_mission); // chercher dans tout le tableau (-1) ou donner le numero de la colone

}

void gestion_zouhour::on_rech_mission_textChanged(const QString &arg1)
{
    proxy_mission->setFilterFixedString(arg1);

}

//ajout
void gestion_zouhour::on_actionadd_mission_clicked()
{


      //recuperation des donnees
        QString s1=id2();
        QString s2=type();
        QString s3=description();

        //ajout
        missions mc(s1,s2,s3);
        mc.ajouter();

        //refresh du tableau (affichage)
          show_mission();

          clear_form2();

          get_missions();


}

//get id from selected row
void gestion_zouhour::on_table_mission_clicked(const QModelIndex &index)
{
    selected_mission=ui->table_mission->model()->data(index).toString();
}

//suppression
void gestion_zouhour::on_actiondelete_mission_clicked()
{
    missions mc;
  mc.supprimer(selected_mission);

 //refresh du tableau (affichage)
   show_mission();

   get_missions();

}


//modification
void gestion_zouhour::on_table_mission_doubleClicked(const QModelIndex &index)
{

fill_form2(selected_mission);



}

void gestion_zouhour::on_modif_mission_clicked()
{
    //recuperation des donnees
      QString s2=type();
      QString s3=description();

      //mofication
      missions mc(selected_mission,s2,s3);
      mc.modifier(selected_mission);

      //refresh du tableau (affichage)
        show_mission();

         clear_form2();

         get_missions();

}

//stat


void gestion_zouhour::on_stat_emp_clicked(bool checked)
{
    s = new stat_mission();
  s->choix_pie();
  s->show();
}


void gestion_zouhour::on_actiondeconnecter_triggered()
{
    close();
        MainWindow *ws;
    ws = new MainWindow();
ws->setWindowTitle("News Agency");
ws->show();
}



