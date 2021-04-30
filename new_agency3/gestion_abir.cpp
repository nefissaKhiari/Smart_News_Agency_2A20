#include "gestion_abir.h"
#include "ui_gestion_abir.h"

#include "mainwindow.h"


gestion_abir::gestion_abir(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gestion_abir)
{
    ui->setupUi(this);

    //affichage contenu base
    show_tables();
}

gestion_abir::~gestion_abir()
{
    delete ui;
}



void gestion_abir::show_tables()
{
show_art();
show_arch();
}

/************************** archive ********************************/



//ajout
void gestion_abir::on_actionadd_archive_triggered()
{
    //creation instance
        add_archive ac(this);

        //ouvrir dialog
        int res=ac.exec();
        if (res == QDialog::Rejected )
            return;

      //recuperation des donnees
        QString s1=ac.id();
        QString s2=ac.intitule();
        QString s3=ac.droit_access();
        QString s4=ac.traitement();

        //ajout
        archive mc(s1,s2,s3,s4);
        mc.ajouter();

        //refresh du tableau (affichage)
          show_arch();
}

//get id from selected row
void gestion_abir::on_table_arch_clicked(const QModelIndex &index)
{
    selected_arch=ui->table_arch->model()->data(index).toString();

}

//suppression
void gestion_abir::on_actiondelete_archive_triggered()
{
    archive mc;
  mc.supprimer(selected_arch);

 //refresh du tableau (affichage)
   show_arch();
}

//modification
void gestion_abir::on_table_arch_doubleClicked(const QModelIndex &index)
{
    add_archive ac(this);

  ac.fill_form(selected_arch);
  int res=ac.exec();
  if (res == QDialog::Rejected )
    return;


  //recuperation des donnees
  QString s2=ac.intitule();
  QString s3=ac.droit_access();
  QString s4=ac.traitement();

    //mofication
    archive mc(selected_arch,s2,s3,s4);
    mc.modifier(selected_arch);

    //refresh du tableau (affichage)
      show_arch();

}

//affichage
void gestion_abir::show_arch()
{
    //creation model (masque du tableau) : permet recherche et tri
        proxy_arch = new QSortFilterProxyModel();

     //definir la source (tableau original)
        proxy_arch->setSourceModel(tmp_arch.afficher());

     //pour la recherche
        proxy_arch->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majiscule et miniscule)
       //remplissage tableau avec le masque
        ui->table_arch->setModel(proxy_arch);
}


//recherche dynamique

void gestion_abir::on_rech_arch_textChanged(const QString &arg1)
{
     proxy_arch->setFilterFixedString(arg1);
}

void gestion_abir::on_arch_sel_col_currentIndexChanged(int index)
{
    sel_col_arch=ui->arch_sel_col->currentIndex()-1;
    proxy_arch->setFilterKeyColumn(sel_col_arch); // chercher dans tout le tableau (-1) ou donner le numero de la colone

}

//export excel
void gestion_abir::on_export_excel_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Excel file"), qApp->applicationDirPath (),
                                                    tr("Excel Files (*.xls)"));
    if (fileName.isEmpty())
        return;

    ExportExcelObject obj(fileName, "mydata", ui->table_arch);

    //colums to export
    obj.addField(0, "ID", "char(20)");
    obj.addField(1, "Intitule", "char(20)");
    obj.addField(2, "Access", "char(20)");
    obj.addField(3, "Traitement", "char(255)");
    obj.addField(4, "Creation", "char(20)");



    int retVal = obj.export2Excel();
    if( retVal > 0)
    {
        QMessageBox::information(this, tr("Done"),
                                 QString(tr("%1 records exported!")).arg(retVal)
                                 );
    }
}



/************************** article ********************************/



//ajout
void gestion_abir::on_actionadd_article_triggered()
{
    //creation instance
        add_article ac(this);

        //ouvrir dialog
        int res=ac.exec();
        if (res == QDialog::Rejected )
            return;

      //recuperation des donnees
        QString s1=ac.id();
        //QString s2=ac.image();
        QString s3=ac.titre();
        QString s4=ac.categorie();
        QString s5=ac.contenu();



        //ajout
        article mc(s1/*,s2*/,s3,s4,s5);
        mc.ajouter();

        //refresh du tableau (affichage)
          show_art();
}

//get id from selected row
void gestion_abir::on_table_article_clicked(const QModelIndex &index)
{
     selected_art=ui->table_article->model()->data(index).toString();
}

//suppression
void gestion_abir::on_actiondelete_article_triggered()
{
    article mc;
  mc.supprimer(selected_art);

 //refresh du tableau (affichage)
   show_art();
}

//modification
void gestion_abir::on_table_article_doubleClicked(const QModelIndex &index)
{
    add_article ac(this);

  ac.fill_form(selected_art);
  int res=ac.exec();
  if (res == QDialog::Rejected )
    return;


  //recuperation des donnees
 // QString s2=ac.image();
  QString s3=ac.titre();
  QString s4=ac.categorie();
  QString s5=ac.contenu();

    //mofication
    article mc(selected_art/*,s2*/,s3,s4,s5);
    mc.modifier(selected_art);

    //refresh du tableau (affichage)
      show_art();
}

//affichage
void gestion_abir::show_art()
{
    //creation model (masque du tableau) : permet recherche et tri
        proxy_art = new QSortFilterProxyModel();

     //definir la source (tableau original)
        proxy_art->setSourceModel(tmp_art.afficher());

     //pour la recherche
        proxy_art->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majiscule et miniscule)
       //remplissage tableau avec le masque
        ui->table_article->setModel(proxy_art);
}

//recherche dynamique
void gestion_abir::on_rech_article_textChanged(const QString &arg1)
{
        proxy_art->setFilterFixedString(arg1);
}

void gestion_abir::on_article_sel_col_currentIndexChanged(int index)
{
    sel_col_art=ui->article_sel_col->currentIndex()-1;
    proxy_art->setFilterKeyColumn(sel_col_art); // chercher dans tout le tableau (-1) ou donner le numero de la colone

}







//archiver
void gestion_abir::on_actionarchiver_article_triggered()
{
    //creation instance
        archiver_article ac(this);

        //ouvrir dialog
        int res=ac.exec();
        if (res == QDialog::Rejected )
            return;

        //recuperation des donnees
          QString archive=ac.archive();

        //ajout
        article mc;
        mc.archiver(selected_art,archive);

        //refresh du tableau (affichage)
          show_art();
}


//mailing
void gestion_abir::on_actionenvoyer_article_triggered()
{
    Smtp* smtp = new Smtp("abir.moula@esprit.tn",password, "smtp.gmail.com");
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    QString subject,msg/*,img*/;
  //  QStringList files;
    QSqlQuery query;
    query.prepare("select * from ARTICLE where ID= :ch");
    query.bindValue(":ch", selected_art);
    query.exec();
    while(query.next()){
        subject=query.value(2).toString();
        msg=query.value(4).toString();
      //  img=query.value(1).toString();
    }
  //  files=img.split("+");
  //  if( !files.isEmpty() )
   //    smtp->sendMail("abir.moula@esprit.tn", recipient , subject,msg, files);
   // else
        smtp->sendMail("abir.moula@esprit.tn", recipient , subject,msg);
}


// C:\Qt\5.9.9\mingw53_32\bin add .dll here
void   gestion_abir::mailSent(QString status)
{

    if(status == "Message sent")
        QMessageBox::warning( nullptr, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );

}

void gestion_abir::on_actiondeconnecter_triggered()
{
    close();
        MainWindow *ws;
    ws = new MainWindow();
    ws->setWindowTitle("News Agency");
    ws->show();
}
