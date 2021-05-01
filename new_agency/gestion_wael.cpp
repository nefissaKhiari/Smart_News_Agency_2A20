#include "gestion_wael.h"
#include "ui_gestion_wael.h"

#include "mainwindow.h"

gestion_wael::gestion_wael(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gestion_wael)
{
    ui->setupUi(this);

    //affichage contenu base
    show_tables();
}

gestion_wael::~gestion_wael()
{
    delete ui;
}

void gestion_wael::show_tables()
{
    show_equipement();
    show_maintenance();
}

/*********************************** equipement ****************************/

//************************ crud

//ajout
void gestion_wael::on_actionadd_equipement_triggered()
{
    //creation instance
        add_equipement ac(this);

        //ouvrir dialog
        int res=ac.exec();
        if (res == QDialog::Rejected )
            return;

      //recuperation des donnees
        QString s1=ac.id();
        QString s2=ac.nom();
        QString s3=ac.date();
        QString s4=ac.etat();
        double x=ac.prix();

        //ajout
        equipement mc(s1,s2,s3,x,s4);
        mc.ajouter();

        //refresh du tableau (affichage)
          show_equipement();
}

//selection
void gestion_wael::on_table_equipement_clicked(const QModelIndex &index)
{
    selected_equipement=ui->table_equipement->model()->data(index).toString();
}

//modification
void gestion_wael::on_table_equipement_doubleClicked(const QModelIndex &index)
{
    add_equipement ac(this);

  ac.fill_form(selected_equipement);
  int res=ac.exec();
  if (res == QDialog::Rejected )
    return;


  //recuperation des donnees
  QString s2=ac.nom();
  QString s3=ac.date();
  QString s4=ac.etat();
  double x=ac.prix();

    //mofication
    equipement mc(selected_equipement,s2,s3,x,s4);
    mc.modifier(selected_equipement);

    //refresh du tableau (affichage)
      show_equipement();
}

//suppression
void gestion_wael::on_actiondelete_equipement_triggered()
{
    equipement mc;
  mc.supprimer(selected_equipement);

 //refresh du tableau (affichage)
   show_equipement();
}

//affichage
void gestion_wael::show_equipement()
{
    //creation model (masque du tableau) : permet recherche et tri
        proxy_equipement = new QSortFilterProxyModel();

     //definir la source (tableau original)
        proxy_equipement->setSourceModel(tmp_equipement.afficher());

     //pour la recherche
        proxy_equipement->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majiscule et miniscule)

        //remplissage tableau avec le masque
        ui->table_equipement->setModel(proxy_equipement);
}

//************************ metiers


//recherche dynamique
void gestion_wael::on_equipement_sel_col_currentIndexChanged(const QString &arg1)
{
    sel_col_equipement=ui->equipement_sel_col->currentIndex()-1;
    proxy_equipement->setFilterKeyColumn(sel_col_equipement); // chercher dans tout le tableau (-1) ou donner le numero de la colone
}
void gestion_wael::on_rech_equipement_textChanged(const QString &arg1)
{
    proxy_equipement->setFilterFixedString(arg1);
}


/*********************************** maintenance ****************************/

//************************ crud

//ajout

void gestion_wael::on_actionadd_maintenance_triggered()
{
    //creation instance
        add_maintenance ac(this);

        //ouvrir dialog
        int res=ac.exec();
        if (res == QDialog::Rejected )
            return;

      //recuperation des donnees
        QString s1=ac.id();
        QString s2=ac.equipement();
        QString s3=ac.duree();
        QString s4=ac.panne();
        double x=ac.total();


        //ajout
        maintenance mc(s1,s2,s3,x,s4);
        mc.ajouter();

        //refresh du tableau (affichage)
          show_maintenance();
}

//selection
void gestion_wael::on_table_maintenance_clicked(const QModelIndex &index)
{
    selected_maintenance=ui->table_maintenance->model()->data(index).toString();
}

//modification
void gestion_wael::on_table_maintenance_doubleClicked(const QModelIndex &index)
{
    add_maintenance ac(this);

  ac.fill_form(selected_maintenance);
  int res=ac.exec();
  if (res == QDialog::Rejected )
    return;


  //recuperation des donnees
  QString s2=ac.equipement();
  QString s3=ac.duree();
  QString s4=ac.panne();
  double x=ac.total();

    //mofication
    maintenance mc(selected_maintenance,s2,s3,x,s4);
    mc.modifier(selected_maintenance);

    //refresh du tableau (affichage)
    show_maintenance();

}

//suppression
void gestion_wael::on_actiondelete_maintenance_triggered()
{
    maintenance mc;
  mc.supprimer(selected_maintenance);

 //refresh du tableau (affichage)
  show_maintenance();
}

//affichage
void gestion_wael::show_maintenance()
{
    //creation model (masque du tableau) : permet recherche et tri
        proxy_maintenance = new QSortFilterProxyModel();

     //definir la source (tableau original)
        proxy_maintenance->setSourceModel(tmp_maintenance.afficher());

     //pour la recherche
        proxy_maintenance->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majiscule et miniscule)

        //remplissage tableau avec le masque
        ui->table_maintenance->setModel(proxy_maintenance);
}

//************************ metiers

//recherche dynamique
void gestion_wael::on_maintenance_sel_col_currentIndexChanged(const QString &arg1)
{
    sel_col_maintenance=ui->maintenance_sel_col->currentIndex()-1;
    proxy_maintenance->setFilterKeyColumn(sel_col_maintenance); // chercher dans tout le tableau (-1) ou donner le numero de la colone

}
void gestion_wael::on_rech_maintenance_textChanged(const QString &arg1)
{
    proxy_maintenance->setFilterFixedString(arg1);
}

//imprimer
void gestion_wael::on_pushButton_2_clicked()
{
        QString strStream;
        QTextStream out(&strStream);

        const int rowCount = ui->table_maintenance->model()->rowCount();
        const int columnCount =ui->table_maintenance->model()->columnCount();

        out <<  "<html>\n"
            "<head>\n"
            "<meta Content=\"Text/html; charset=Windows-1251\">\n"
            <<  QString("<title>%1</title>\n").arg("strTitle")
            <<  "</head>\n"
            "<body bgcolor=#ffffff link=#5000A0>\n"
            "<table border=1 cellspacing=0 cellpadding=2>\n";

        // headers
        out << "<thead><tr bgcolor=#f0f0f0>";
        for (int column = 0; column < columnCount; column++)
            if (ui->table_maintenance->isColumnHidden(column))
                out << QString("<th>%1</th>").arg(ui->table_maintenance->model()->headerData(column, Qt::Horizontal).toString());
        out << "</tr></thead>\n";

        // data table
        for (int row = 0; row < rowCount; row++) {
            out << "<tr>";
            for (int column = 0; column < columnCount; column++) {
                if (!ui->table_maintenance->isColumnHidden(column)) {
                    QString data = ui->table_maintenance->model()->data(ui->table_maintenance->model()->index(row, column)).toString().simplified();
                    out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                }
            }
            out << "</tr>\n";
        }
        out <<  "</table>\n"
            "</body>\n"
            "</html>\n";

        QTextDocument *document = new QTextDocument();
        document->setHtml(strStream);

        QPrinter printer;

        QPrintDialog *dialog = new QPrintDialog(&printer, NULL);
        if (dialog->exec() == QDialog::Accepted) {
            document->print(&printer);
        }

        delete document;
}

void gestion_wael::on_actiondeconnecter_triggered()
{
    close();
        MainWindow *ws;
    ws = new MainWindow();
ws->setWindowTitle("News Agency");
ws->show();
}
