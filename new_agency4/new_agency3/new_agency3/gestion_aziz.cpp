#include "gestion_aziz.h"
#include "ui_gestion_aziz.h"


gestion_aziz::gestion_aziz(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gestion_aziz)
{
    ui->setupUi(this);
    //affichage contenu base
    show_tables();
}

gestion_aziz::~gestion_aziz()
{
    delete ui;
}

void gestion_aziz::show_tables()
{
    show_client();
    show_carte();
}

/*********************************** client ****************************/

//************************ crud

//ajout
void gestion_aziz::on_actionadd_client_triggered()
{
    //creation instance
        add_client ac(this);

        //ouvrir dialog
        int res=ac.exec();
        if (res == QDialog::Rejected )
            return;

      //recuperation des donnees
        QString s1=ac.id();
        QString s2=ac.nom();
        QString s3=ac.naissance();
        QString s4=ac.mail();


        //ajout
        client mc(s1,s2,s3,s4);
        mc.ajouter();

        //refresh du tableau (affichage)
          show_client();
}

//selection
void gestion_aziz::on_table_client_clicked(const QModelIndex &index)
{
    selected_client=ui->table_client->model()->data(index).toString();
}

//modification
void gestion_aziz::on_table_client_doubleClicked(const QModelIndex &index)
{
    add_client ac(this);

  ac.fill_form(selected_client);
  int res=ac.exec();
  if (res == QDialog::Rejected )
    return;


  //recuperation des donnees
    QString s2=ac.nom();
    QString s3=ac.naissance();
    QString s4=ac.mail();


    //mofication
    client mc(selected_client,s2,s3,s4);
    mc.modifier(selected_client);

    //refresh du tableau (affichage)
      show_client();
}

//suppression
void gestion_aziz::on_actiondelete_client_triggered()
{
    client mc;
    carte bc;
  bc.supprimer(selected_carte);
  mc.supprimer(selected_client);
 //refresh du tableau (affichage)
  show_carte();
 //refresh du tableau (affichage)
   show_client();
}

//affichage
void gestion_aziz::show_client()
{
    //creation model (masque du tableau) : permet recherche et tri
        proxy_client = new QSortFilterProxyModel();

     //definir la source (tableau original)
        proxy_client->setSourceModel(tmp_client.afficher());

     //pour la recherche
        proxy_client->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majiscule et miniscule)

        //remplissage tableau avec le masque
        ui->table_client->setModel(proxy_client);
}

//************************ metiers
//excel
void gestion_aziz::on_pushButton_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Excel file"), qApp->applicationDirPath (),
                                                    tr("Excel Files (*.xls)"));
    if (fileName.isEmpty())
        return;

    ExportExcelObject obj(fileName, "mydata", ui->table_client);

    //colums to export
    obj.addField(0, "ID", "char(20)");
    obj.addField(1, "Nom", "char(20)");
    obj.addField(2, "Naissance", "int");
    obj.addField(3, "Mail", "char(20)");




    int retVal = obj.export2Excel();
    if( retVal > 0)
    {
        QMessageBox::information(this, tr("Done"),
      QString(tr("%1 records exported!")).arg(retVal));

    }
}

void gestion_aziz::on_pushButton_2_clicked()
{
    QString strStream;
    QTextStream out(&strStream);

    const int rowCount = ui->table_carte->model()->rowCount();
    const int columnCount =ui->table_carte->model()->columnCount();

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
      //  if (ui->table_journaliste->isColumnHidden(column))
            out << QString("<th>%1</th>").arg(ui->table_carte->model()->headerData(column, Qt::Horizontal).toString());
    out << "</tr></thead>\n";

    // data table
    for (int row = 0; row < rowCount; row++) {
        out << "<tr>";
        for (int column = 0; column < columnCount; column++) {
            if (!ui->table_carte->isColumnHidden(column)) {
                QString data = ui->table_carte->model()->data(ui->table_carte->model()->index(row, column)).toString().simplified();
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

//recherche dynamique
void gestion_aziz::on_client_sel_col_currentIndexChanged(const QString &arg1)
{
    sel_col_client=ui->client_sel_col->currentIndex()-1;
    proxy_client->setFilterKeyColumn(sel_col_client); // chercher dans tout le tableau (-1) ou donner le numero de la colone
}
void gestion_aziz::on_rech_client_textChanged(const QString &arg1)
{
    proxy_client->setFilterFixedString(arg1);
}

/*********************************** carte ****************************/

//************************ crud

//ajout

void gestion_aziz::on_actionadd_carte_triggered()
{
    //creation instance
        add_carte ac(this);

        //ouvrir dialog
        int res=ac.exec();
        if (res == QDialog::Rejected )
            return;

      //recuperation des donnees
        QString s1=ac.id();
        int x=ac.points();
        QString s2=ac.client();


        //ajout
        carte mc(s1,s2,x);
        mc.ajouter();

        //refresh du tableau (affichage)
          show_carte();
}

//selection
void gestion_aziz::on_table_carte_clicked(const QModelIndex &index)
{
    selected_carte=ui->table_carte->model()->data(index).toString();
}

//modification
void gestion_aziz::on_table_carte_doubleClicked(const QModelIndex &index)
{
    add_carte ac(this);

  ac.fill_form(selected_carte);
  int res=ac.exec();
  if (res == QDialog::Rejected )
    return;


  //recuperation des donnees
  int x=ac.points();
  QString s2=ac.client();



    //mofication
    carte mc(selected_carte,s2,x);
    mc.modifier(selected_carte);

    //refresh du tableau (affichage)
      show_carte();

}

//suppression
void gestion_aziz::on_actiondelete_carte_triggered()
{
    carte mc;
  mc.supprimer(selected_carte);


 //refresh du tableau (affichage)
   show_carte();
}

//affichage
void gestion_aziz::show_carte()
{
    //creation model (masque du tableau) : permet recherche et tri
        proxy_carte = new QSortFilterProxyModel();

     //definir la source (tableau original)
        proxy_carte->setSourceModel(tmp_carte.afficher());

     //pour la recherche
        proxy_carte->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majiscule et miniscule)

        //remplissage tableau avec le masque
        ui->table_carte->setModel(proxy_carte);
}

//************************ metiers

//recherche dynamique
void gestion_aziz::on_carte_sel_col_currentIndexChanged(const QString &arg1)
{
    sel_col_carte=ui->carte_sel_col->currentIndex()-1;
    proxy_carte->setFilterKeyColumn(sel_col_carte); // chercher dans tout le tableau (-1) ou donner le numero de la colone

}
void gestion_aziz::on_rech_carte_textChanged(const QString &arg1)
{
    proxy_carte->setFilterFixedString(arg1);
}

void gestion_aziz::on_actionadd_points_triggered()
{
    //creation instance
        add_points ac(this);

        //ouvrir dialog
        int res=ac.exec();
        if (res == QDialog::Rejected )
            return;

      //recuperation des donnees
        int x=ac.points();

  ac.sum_points(selected_carte,x);
  ac.checkpoint();


 //refresh du tableau (affichage)
   show_carte();
}

void gestion_aziz::on_actionget_remise_triggered()
{
    //creation instance
        add_points ac(this);
          ac.get_remise(selected_carte);
        ac.felicitation();

        //refresh du tableau (affichage)
          show_carte();
}
