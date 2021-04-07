#ifndef ADD_CARTE_H
#define ADD_CARTE_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class add_carte;
}

class add_carte : public QDialog
{
    Q_OBJECT

public:
    explicit add_carte(QWidget *parent = nullptr);
    ~add_carte();

    QString client() const;
    int points() const;
    QString id() const ;

    void get_client();
    void fill_form(QString);

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();


private:
    Ui::add_carte *ui;
};

#endif // ADD_CARTE_H
