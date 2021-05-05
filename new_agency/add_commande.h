#ifndef ADD_COMMANDE_H
#define ADD_COMMANDE_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class add_commande;
}

class add_commande : public QDialog
{
    Q_OBJECT

public:
    explicit add_commande(QWidget *parent = nullptr);
    ~add_commande();

    int attente() const;
    QString id() const ;
    QString client() const;

    void get_client();
    void fill_form(QString);

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::add_commande *ui;
};

#endif // ADD_COMMANDE_H
