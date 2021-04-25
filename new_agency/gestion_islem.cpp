#include "gestion_islem.h"
#include "ui_gestion_islem.h"

#include "mainwindow.h"


gestion_islem::gestion_islem(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gestion_islem)
{
    ui->setupUi(this);
    show_tables();
}

gestion_islem::~gestion_islem()
{
    delete ui;
}

void gestion_islem::show_tables()
{
    show_commande();
    show_vente();
}

/*********************************** commande ****************************/

//************************ crud

//ajout
void gestion_islem::on_actionadd_commande_triggered()
{
    //creation instance
        add_commande ac(this);

        //ouvrir dialog
        int res=ac.exec();
        if (res == QDialog::Rejected )
            return;

      //recuperation des donnees
        QString s1=ac.id();
        QString s2=ac.client();
        int s3=ac.attente();


        //ajout
        commande mc(s1,s2,s3);
        mc.ajouter();

        //refresh du tableau (affichage)
          show_commande();
}

//selection
void gestion_islem::on_table_commande_clicked(const QModelIndex &index)
{
    selected_commande=ui->table_commande->model()->data(index).toString();
}

//modification
void gestion_islem::on_table_commande_doubleClicked(const QModelIndex &index)
{
    add_commande ac(this);

  ac.fill_form(selected_commande);
  int res=ac.exec();
  if (res == QDialog::Rejected )
    return;


  //recuperation des donnees
  QString s2=ac.client();
  int s3=ac.attente();


    //mofication
    commande mc(selected_commande,s2,s3);
    mc.modifier(selected_commande);

    //refresh du tableau (affichage)
      show_commande();
}

//suppression
void gestion_islem::on_actiondelete_commande_triggered()
{
    commande mc;
  mc.supprimer(selected_commande);

 //refresh du tableau (affichage)
   show_commande();
}

//affichage
void gestion_islem::show_commande()
{
    //creation model (masque du tableau) : permet recherche et tri
        proxy_commande = new QSortFilterProxyModel();

     //definir la source (tableau original)
        proxy_commande->setSourceModel(tmp_commande.afficher());

     //pour la recherche
        proxy_commande->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majiscule et miniscule)

        //remplissage tableau avec le masque
        ui->table_commande->setModel(proxy_commande);
}

//************************ metiers


//recherche dynamique
void gestion_islem::on_commande_sel_col_currentIndexChanged(const QString &arg1)
{
    sel_col_commande=ui->commande_sel_col->currentIndex()-1;
    proxy_commande->setFilterKeyColumn(sel_col_commande); // chercher dans tout le tableau (-1) ou donner le numero de la colone
}
void gestion_islem::on_rech_commande_textChanged(const QString &arg1)
{
    proxy_commande->setFilterFixedString(arg1);
}
//imprimer
void gestion_islem::on_pushButton_5_clicked()
{
    QString strStream;
    QTextStream out(&strStream);

    const int rowCount = ui->table_commande->model()->rowCount();
    const int columnCount =ui->table_commande->model()->columnCount();

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
            out << QString("<th>%1</th>").arg(ui->table_commande->model()->headerData(column, Qt::Horizontal).toString());
    out << "</tr></thead>\n";

    // data table
    for (int row = 0; row < rowCount; row++) {
        out << "<tr>";
        for (int column = 0; column < columnCount; column++) {
            if (!ui->table_commande->isColumnHidden(column)) {
                QString data = ui->table_commande->model()->data(ui->table_commande->model()->index(row, column)).toString().simplified();
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
//excel
void gestion_islem::on_pushButton_2_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Excel file"), qApp->applicationDirPath (),
                                                    tr("Excel Files (*.xls)"));
    if (fileName.isEmpty())
        return;

    ExportExcelObject obj(fileName, "mydata", ui->table_commande);

    //colums to export
    obj.addField(0, "ID", "char(20)");
    obj.addField(1, "Client", "char(20)");
    obj.addField(2, "Attente", "int");
    obj.addField(3, "Ajout", "char(20)");




    int retVal = obj.export2Excel();
    if( retVal > 0)
    {
        QMessageBox::information(this, tr("Done"),
                                 QString(tr("%1 records exported!")).arg(retVal)
                                 );
    }
}


/*********************************** vente ****************************/

//************************ crud

//ajout

void gestion_islem::on_actionadd_vente_triggered()
{
    //creation instance
        add_vente ac(this);

        //ouvrir dialog
        int res=ac.exec();
        if (res == QDialog::Rejected )
            return;

      //recuperation des donnees
        QString s1=ac.id();
        double x=ac.prix();
        QString s2=ac.commande();
        QString s3=ac.livraison();
        QString s4=ac.payement();

        //ajout
        vente mc(s1,s2,s3,s4,x);
        mc.ajouter();

        //refresh du tableau (affichage)
          show_vente();
}

//selection
void gestion_islem::on_table_vente_clicked(const QModelIndex &index)
{
    selected_vente=ui->table_vente->model()->data(index).toString();
}

//modification
void gestion_islem::on_table_vente_doubleClicked(const QModelIndex &index)
{
    add_vente ac(this);

  ac.fill_form(selected_vente);
  int res=ac.exec();
  if (res == QDialog::Rejected )
    return;


  //recuperation des donnees
  double x=ac.prix();
  QString s2=ac.commande();
  QString s3=ac.livraison();
  QString s4=ac.payement();



    //mofication
    vente mc(selected_vente,s2,s3,s4,x);
    mc.modifier(selected_vente);

    //refresh du tableau (affichage)
      show_vente();

}

//suppression
void gestion_islem::on_actiondelete_vente_triggered()
{
    vente mc;
  mc.supprimer(selected_vente);


 //refresh du tableau (affichage)
   show_vente();
}

//affichage
void gestion_islem::show_vente()
{
    //creation model (masque du tableau) : permet recherche et tri
        proxy_vente = new QSortFilterProxyModel();

     //definir la source (tableau original)
        proxy_vente->setSourceModel(tmp_vente.afficher());

     //pour la recherche
        proxy_vente->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majiscule et miniscule)

        //remplissage tableau avec le masque
        ui->table_vente->setModel(proxy_vente);
}

//************************ metiers

//recherche dynamique
void gestion_islem::on_vente_sel_col_currentIndexChanged(const QString &arg1)
{
    sel_col_vente=ui->vente_sel_col->currentIndex()-1;
    proxy_vente->setFilterKeyColumn(sel_col_vente); // chercher dans tout le tableau (-1) ou donner le numero de la colone

}
void gestion_islem::on_rech_vente_textChanged(const QString &arg1)
{
    proxy_vente->setFilterFixedString(arg1);
}

//imprimer
void gestion_islem::on_pushButton_4_clicked()
{
    QString strStream;
    QTextStream out(&strStream);

    const int rowCount = ui->table_vente->model()->rowCount();
    const int columnCount =ui->table_vente->model()->columnCount();

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
            out << QString("<th>%1</th>").arg(ui->table_vente->model()->headerData(column, Qt::Horizontal).toString());
    out << "</tr></thead>\n";

    // data table
    for (int row = 0; row < rowCount; row++) {
        out << "<tr>";
        for (int column = 0; column < columnCount; column++) {
            if (!ui->table_vente->isColumnHidden(column)) {
                QString data = ui->table_vente->model()->data(ui->table_vente->model()->index(row, column)).toString().simplified();
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
//excel
void gestion_islem::on_pushButton_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Excel file"), qApp->applicationDirPath (),
                                                    tr("Excel Files (*.xls)"));
    if (fileName.isEmpty())
        return;

    ExportExcelObject obj(fileName, "mydata", ui->table_vente);

    //colums to export
    obj.addField(0, "ID", "char(20)");
    obj.addField(1, "Commande", "char(20)");
    obj.addField(2, "Prix", "double");
    obj.addField(3, "Livraison", "char(20)");
    obj.addField(4, "Payement", "char(20)");




    int retVal = obj.export2Excel();
    if( retVal > 0)
    {
        QMessageBox::information(this, tr("Done"),
                                 QString(tr("%1 records exported!")).arg(retVal)
                                 );
    }
}

void gestion_islem::on_actiondeconnecter_triggered()
{
    close();
        MainWindow *ws;
    ws = new MainWindow();
ws->setWindowTitle("News Agency");
ws->show();
}
