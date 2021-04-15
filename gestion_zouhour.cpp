#include "gestion_zouhour.h"
#include "ui_gestion_zouhour.h"

gestion_zouhour::gestion_zouhour(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gestion_zouhour)
{
    ui->setupUi(this);

    //affichage contenu base
    show_tables();

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
void gestion_zouhour::on_actionadd_emp_triggered()
{
    //creation instance
        add_emp ac(this);

        //ouvrir dialog
        int res=ac.exec();
        if (res == QDialog::Rejected )
            return;

      //recuperation des donnees
        QString s1=ac.id();
        QString s2=ac.nom();
        QString s3=ac.prenom();
        QString s4=ac.mail();
        QString s5=ac.naissance();
        QString s6=ac.occupation();
        QString s7=ac.mission();

        //ajout
        emp mc(s1,s2,s3,s4,s5,s6,s7);
        mc.ajouter();

        //refresh du tableau (affichage)
          show_emp();
}

//get id from selected row
void gestion_zouhour::on_table_emp_clicked(const QModelIndex &index)
{
    selected_emp=ui->table_emp->model()->data(index).toString();
}

//suppression
void gestion_zouhour::on_actiondelete_emp_triggered()
{
    emp mc;
  mc.supprimer(selected_emp);

 //refresh du tableau (affichage)
   show_emp();
}


//modification

void gestion_zouhour::on_table_emp_doubleClicked(const QModelIndex &index)
{
    add_emp ac(this);

  ac.fill_form(selected_emp);
  int res=ac.exec();
  if (res == QDialog::Rejected )
    return;


  //recuperation des donnees
    QString s2=ac.nom();
    QString s3=ac.prenom();
    QString s4=ac.mail();
    QString s5=ac.naissance();
    QString s6=ac.occupation();
     QString s7=ac.mission();

    //mofication
    emp mc(selected_emp,s2,s3,s4,s5,s6,s7);
    mc.modifier(selected_emp);

    //refresh du tableau (affichage)
      show_emp();



}

/************************** mission ********************************/

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
void gestion_zouhour::on_actionadd_mission_triggered()
{
    //creation instance
        add_mission ac(this);

        //ouvrir dialog
        int res=ac.exec();
        if (res == QDialog::Rejected )
            return;

      //recuperation des donnees
        QString s1=ac.id();
        QString s2=ac.type();
        QString s3=ac.description();

        //ajout
        mission mc(s1,s2,s3);
        mc.ajouter();

        //refresh du tableau (affichage)
          show_mission();

}

//get id from selected row
void gestion_zouhour::on_table_mission_clicked(const QModelIndex &index)
{
    selected_mission=ui->table_mission->model()->data(index).toString();
}

//suppression
void gestion_zouhour::on_actiondelete_mission_triggered()
{
    mission mc;
  mc.supprimer(selected_mission);

 //refresh du tableau (affichage)
   show_mission();

}


//modification
void gestion_zouhour::on_table_mission_doubleClicked(const QModelIndex &index)
{
    add_mission ac(this);

  ac.fill_form(selected_mission);
  int res=ac.exec();
  if (res == QDialog::Rejected )
    return;


  //recuperation des donnees
    QString s2=ac.type();
    QString s3=ac.description();

    //mofication
    mission mc(selected_mission,s2,s3);
    mc.modifier(selected_mission);

    //refresh du tableau (affichage)
      show_mission();


}

//stat


void gestion_zouhour::on_stat_emp_clicked(bool checked)
{
    s = new stat_mission();
  s->choix_pie();
  s->show();
}
