/********************************************************************************
** Form generated from reading UI file 'add_maintenance.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_MAINTENANCE_H
#define UI_ADD_MAINTENANCE_H

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
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_add_maintenance
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_6;
    QLabel *label_5;
    QComboBox *panne;
    QLabel *label_4;
    QLineEdit *id;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QTimeEdit *duree;
    QComboBox *equipement;
    QDoubleSpinBox *total;

    void setupUi(QDialog *add_maintenance)
    {
        if (add_maintenance->objectName().isEmpty())
            add_maintenance->setObjectName(QStringLiteral("add_maintenance"));
        add_maintenance->resize(296, 267);
        buttonBox = new QDialogButtonBox(add_maintenance);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(50, 210, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_6 = new QLabel(add_maintenance);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 80, 71, 16));
        label_5 = new QLabel(add_maintenance);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 170, 71, 16));
        panne = new QComboBox(add_maintenance);
        panne->setObjectName(QStringLiteral("panne"));
        panne->setGeometry(QRect(120, 167, 111, 22));
        label_4 = new QLabel(add_maintenance);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 110, 47, 14));
        id = new QLineEdit(add_maintenance);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(120, 51, 113, 20));
        label_2 = new QLabel(add_maintenance);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 55, 47, 14));
        label_3 = new QLabel(add_maintenance);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 140, 47, 14));
        label = new QLabel(add_maintenance);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 4, 251, 41));
        duree = new QTimeEdit(add_maintenance);
        duree->setObjectName(QStringLiteral("duree"));
        duree->setGeometry(QRect(120, 104, 111, 22));
        equipement = new QComboBox(add_maintenance);
        equipement->setObjectName(QStringLiteral("equipement"));
        equipement->setGeometry(QRect(120, 76, 111, 22));
        total = new QDoubleSpinBox(add_maintenance);
        total->setObjectName(QStringLiteral("total"));
        total->setGeometry(QRect(120, 136, 111, 22));

        retranslateUi(add_maintenance);
        QObject::connect(buttonBox, SIGNAL(accepted()), add_maintenance, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), add_maintenance, SLOT(reject()));

        QMetaObject::connectSlotsByName(add_maintenance);
    } // setupUi

    void retranslateUi(QDialog *add_maintenance)
    {
        add_maintenance->setWindowTitle(QApplication::translate("add_maintenance", "Dialog", Q_NULLPTR));
        label_6->setText(QApplication::translate("add_maintenance", "Equipement", Q_NULLPTR));
        label_5->setText(QApplication::translate("add_maintenance", "Type Panne", Q_NULLPTR));
        panne->clear();
        panne->insertItems(0, QStringList()
         << QApplication::translate("add_maintenance", "type 1", Q_NULLPTR)
         << QApplication::translate("add_maintenance", "type 2", Q_NULLPTR)
         << QApplication::translate("add_maintenance", "type 3", Q_NULLPTR)
         << QApplication::translate("add_maintenance", "type 4", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("add_maintenance", "Duree", Q_NULLPTR));
        label_2->setText(QApplication::translate("add_maintenance", "ID", Q_NULLPTR));
        label_3->setText(QApplication::translate("add_maintenance", "Total", Q_NULLPTR));
        label->setText(QApplication::translate("add_maintenance", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#0000ff;\">Details Maintenance</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class add_maintenance: public Ui_add_maintenance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_MAINTENANCE_H
