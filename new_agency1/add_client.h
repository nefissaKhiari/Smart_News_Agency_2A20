#ifndef ADD_CLIENT_H
#define ADD_CLIENT_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class add_client;
}

class add_client : public QDialog
{
    Q_OBJECT

public:
    explicit add_client(QWidget *parent = nullptr);
    ~add_client();

    QString naissance() const;
    QString mail() const;
    QString nom() const;
    QString id() const ;

    void fill_form(QString);

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::add_client *ui;
};

#endif // ADD_CLIENT_H
