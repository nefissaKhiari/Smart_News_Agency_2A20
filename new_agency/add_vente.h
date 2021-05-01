#ifndef ADD_VENTE_H
#define ADD_VENTE_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class add_vente;
}

class add_vente : public QDialog
{
    Q_OBJECT

public:
    explicit add_vente(QWidget *parent = nullptr);
    ~add_vente();

    double prix() const;
    QString id() const ;
    QString commande() const;
    QString livraison() const ;
    QString payement() const;


    void get_commande();
    void fill_form(QString);

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::add_vente *ui;
};

#endif // ADD_VENTE_H
