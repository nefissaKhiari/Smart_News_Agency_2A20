/********************************************************************************
** Form generated from reading UI file 'add_commande.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_COMMANDE_H
#define UI_ADD_COMMANDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_add_commande
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *id;
    QLabel *label_7;
    QComboBox *client;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *attente;

    void setupUi(QDialog *add_commande)
    {
        if (add_commande->objectName().isEmpty())
            add_commande->setObjectName(QStringLiteral("add_commande"));
        add_commande->resize(254, 211);
        buttonBox = new QDialogButtonBox(add_commande);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 160, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        id = new QLineEdit(add_commande);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(104, 60, 101, 20));
        label_7 = new QLabel(add_commande);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 124, 51, 16));
        client = new QComboBox(add_commande);
        client->setObjectName(QStringLiteral("client"));
        client->setGeometry(QRect(105, 90, 101, 20));
        label_4 = new QLabel(add_commande);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 93, 61, 16));
        label = new QLabel(add_commande);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 231, 41));
        label_2 = new QLabel(add_commande);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 60, 16, 16));
        attente = new QSpinBox(add_commande);
        attente->setObjectName(QStringLiteral("attente"));
        attente->setGeometry(QRect(110, 120, 91, 22));

        retranslateUi(add_commande);
        QObject::connect(buttonBox, SIGNAL(accepted()), add_commande, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), add_commande, SLOT(reject()));

        QMetaObject::connectSlotsByName(add_commande);
    } // setupUi

    void retranslateUi(QDialog *add_commande)
    {
        add_commande->setWindowTitle(QApplication::translate("add_commande", "Dialog", Q_NULLPTR));
        label_7->setText(QApplication::translate("add_commande", "Attente", Q_NULLPTR));
        label_4->setText(QApplication::translate("add_commande", "Client", Q_NULLPTR));
        label->setText(QApplication::translate("add_commande", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#0000ff;\">Details Commande</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("add_commande", "ID", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class add_commande: public Ui_add_commande {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_COMMANDE_H
