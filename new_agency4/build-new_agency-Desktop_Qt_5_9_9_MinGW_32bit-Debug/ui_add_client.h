/********************************************************************************
** Form generated from reading UI file 'add_client.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_CLIENT_H
#define UI_ADD_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_add_client
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *nom;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label;
    QLineEdit *id;
    QDateEdit *naissance;
    QLineEdit *mail;

    void setupUi(QDialog *add_client)
    {
        if (add_client->objectName().isEmpty())
            add_client->setObjectName(QStringLiteral("add_client"));
        add_client->resize(233, 275);
        buttonBox = new QDialogButtonBox(add_client);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 220, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_2 = new QLabel(add_client);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 94, 47, 14));
        label_3 = new QLabel(add_client);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 123, 47, 14));
        nom = new QLineEdit(add_client);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(100, 120, 113, 20));
        label_4 = new QLabel(add_client);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 153, 61, 16));
        label_5 = new QLabel(add_client);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 181, 41, 16));
        label = new QLabel(add_client);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 171, 51));
        id = new QLineEdit(add_client);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(100, 90, 113, 20));
        naissance = new QDateEdit(add_client);
        naissance->setObjectName(QStringLiteral("naissance"));
        naissance->setGeometry(QRect(100, 150, 111, 22));
        naissance->setCalendarPopup(true);
        mail = new QLineEdit(add_client);
        mail->setObjectName(QStringLiteral("mail"));
        mail->setGeometry(QRect(100, 180, 113, 20));

        retranslateUi(add_client);
        QObject::connect(buttonBox, SIGNAL(accepted()), add_client, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), add_client, SLOT(reject()));

        QMetaObject::connectSlotsByName(add_client);
    } // setupUi

    void retranslateUi(QDialog *add_client)
    {
        add_client->setWindowTitle(QApplication::translate("add_client", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("add_client", "ID", Q_NULLPTR));
        label_3->setText(QApplication::translate("add_client", "Nom", Q_NULLPTR));
        label_4->setText(QApplication::translate("add_client", "Naissance", Q_NULLPTR));
        label_5->setText(QApplication::translate("add_client", "Mail", Q_NULLPTR));
        label->setText(QApplication::translate("add_client", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#0000ff;\">Details Client</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class add_client: public Ui_add_client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_CLIENT_H
