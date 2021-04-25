/********************************************************************************
** Form generated from reading UI file 'add_vente.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_VENTE_H
#define UI_ADD_VENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_add_vente
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_4;
    QLabel *label_2;
    QComboBox *commande;
    QLabel *label;
    QLineEdit *id;
    QComboBox *livraison;
    QLabel *label_5;
    QComboBox *payement;
    QLabel *label_6;
    QLabel *label_7;
    QDoubleSpinBox *prix;

    void setupUi(QDialog *add_vente)
    {
        if (add_vente->objectName().isEmpty())
            add_vente->setObjectName(QStringLiteral("add_vente"));
        add_vente->resize(234, 299);
        buttonBox = new QDialogButtonBox(add_vente);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_4 = new QLabel(add_vente);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 113, 61, 16));
        label_2 = new QLabel(add_vente);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 80, 16, 16));
        commande = new QComboBox(add_vente);
        commande->setObjectName(QStringLiteral("commande"));
        commande->setGeometry(QRect(105, 110, 101, 20));
        label = new QLabel(add_vente);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 161, 41));
        id = new QLineEdit(add_vente);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(104, 80, 101, 20));
        livraison = new QComboBox(add_vente);
        livraison->setObjectName(QStringLiteral("livraison"));
        livraison->setGeometry(QRect(105, 170, 101, 20));
        label_5 = new QLabel(add_vente);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 173, 51, 16));
        payement = new QComboBox(add_vente);
        payement->setObjectName(QStringLiteral("payement"));
        payement->setGeometry(QRect(105, 200, 101, 20));
        label_6 = new QLabel(add_vente);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 203, 51, 16));
        label_7 = new QLabel(add_vente);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 144, 51, 16));
        prix = new QDoubleSpinBox(add_vente);
        prix->setObjectName(QStringLiteral("prix"));
        prix->setGeometry(QRect(105, 140, 101, 22));

        retranslateUi(add_vente);
        QObject::connect(buttonBox, SIGNAL(accepted()), add_vente, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), add_vente, SLOT(reject()));

        QMetaObject::connectSlotsByName(add_vente);
    } // setupUi

    void retranslateUi(QDialog *add_vente)
    {
        add_vente->setWindowTitle(QApplication::translate("add_vente", "Dialog", Q_NULLPTR));
        label_4->setText(QApplication::translate("add_vente", "Commande", Q_NULLPTR));
        label_2->setText(QApplication::translate("add_vente", "ID", Q_NULLPTR));
        label->setText(QApplication::translate("add_vente", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#0000ff;\">Details Vente</span></p></body></html>", Q_NULLPTR));
        livraison->clear();
        livraison->insertItems(0, QStringList()
         << QApplication::translate("add_vente", "mode 1", Q_NULLPTR)
         << QApplication::translate("add_vente", "mode 2", Q_NULLPTR)
         << QApplication::translate("add_vente", "mode 3", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("add_vente", "Livraison", Q_NULLPTR));
        payement->clear();
        payement->insertItems(0, QStringList()
         << QApplication::translate("add_vente", "methode 1", Q_NULLPTR)
         << QApplication::translate("add_vente", "methode 2", Q_NULLPTR)
         << QApplication::translate("add_vente", "methode 3", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("add_vente", "Payement", Q_NULLPTR));
        label_7->setText(QApplication::translate("add_vente", "Prix", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class add_vente: public Ui_add_vente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_VENTE_H
