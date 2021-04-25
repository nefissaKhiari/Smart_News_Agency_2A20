/********************************************************************************
** Form generated from reading UI file 'add_equipement.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_EQUIPEMENT_H
#define UI_ADD_EQUIPEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_add_equipement
{
public:
    QLineEdit *id;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_4;
    QComboBox *etat;
    QLabel *label_3;
    QDoubleSpinBox *prix;
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QLineEdit *nom;
    QDateEdit *date;

    void setupUi(QDialog *add_equipement)
    {
        if (add_equipement->objectName().isEmpty())
            add_equipement->setObjectName(QStringLiteral("add_equipement"));
        add_equipement->resize(291, 252);
        id = new QLineEdit(add_equipement);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(130, 51, 113, 20));
        label_5 = new QLabel(add_equipement);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 170, 71, 16));
        label_2 = new QLabel(add_equipement);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 55, 47, 14));
        label_6 = new QLabel(add_equipement);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 80, 71, 16));
        label_4 = new QLabel(add_equipement);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 110, 47, 14));
        etat = new QComboBox(add_equipement);
        etat->setObjectName(QStringLiteral("etat"));
        etat->setGeometry(QRect(130, 167, 111, 22));
        label_3 = new QLabel(add_equipement);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 140, 47, 14));
        prix = new QDoubleSpinBox(add_equipement);
        prix->setObjectName(QStringLiteral("prix"));
        prix->setGeometry(QRect(130, 136, 111, 22));
        label = new QLabel(add_equipement);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 4, 251, 41));
        buttonBox = new QDialogButtonBox(add_equipement);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(60, 210, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        nom = new QLineEdit(add_equipement);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(130, 78, 113, 20));
        date = new QDateEdit(add_equipement);
        date->setObjectName(QStringLiteral("date"));
        date->setGeometry(QRect(130, 107, 110, 22));

        retranslateUi(add_equipement);

        QMetaObject::connectSlotsByName(add_equipement);
    } // setupUi

    void retranslateUi(QDialog *add_equipement)
    {
        add_equipement->setWindowTitle(QApplication::translate("add_equipement", "Dialog", Q_NULLPTR));
        label_5->setText(QApplication::translate("add_equipement", "Etat", Q_NULLPTR));
        label_2->setText(QApplication::translate("add_equipement", "ID", Q_NULLPTR));
        label_6->setText(QApplication::translate("add_equipement", "Nom", Q_NULLPTR));
        label_4->setText(QApplication::translate("add_equipement", "Date", Q_NULLPTR));
        etat->clear();
        etat->insertItems(0, QStringList()
         << QApplication::translate("add_equipement", "etat 1", Q_NULLPTR)
         << QApplication::translate("add_equipement", "etat 2", Q_NULLPTR)
         << QApplication::translate("add_equipement", "etat 3", Q_NULLPTR)
         << QApplication::translate("add_equipement", "etat 4", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("add_equipement", "Prix", Q_NULLPTR));
        label->setText(QApplication::translate("add_equipement", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#0000ff;\">Details Equipement</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class add_equipement: public Ui_add_equipement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_EQUIPEMENT_H
