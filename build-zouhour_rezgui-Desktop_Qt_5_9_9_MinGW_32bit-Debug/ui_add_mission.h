/********************************************************************************
** Form generated from reading UI file 'add_mission.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_MISSION_H
#define UI_ADD_MISSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_add_mission
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_7;
    QLineEdit *type;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *id;
    QTextEdit *description;

    void setupUi(QDialog *add_mission)
    {
        if (add_mission->objectName().isEmpty())
            add_mission->setObjectName(QStringLiteral("add_mission"));
        add_mission->resize(396, 380);
        buttonBox = new QDialogButtonBox(add_mission);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(120, 320, 156, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_7 = new QLabel(add_mission);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(90, 10, 201, 31));
        type = new QLineEdit(add_mission);
        type->setObjectName(QStringLiteral("type"));
        type->setGeometry(QRect(210, 100, 131, 20));
        label_2 = new QLabel(add_mission);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 100, 121, 21));
        label_3 = new QLabel(add_mission);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 140, 121, 21));
        label = new QLabel(add_mission);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 60, 121, 21));
        id = new QLineEdit(add_mission);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(210, 60, 131, 20));
        description = new QTextEdit(add_mission);
        description->setObjectName(QStringLiteral("description"));
        description->setGeometry(QRect(70, 170, 271, 131));

        retranslateUi(add_mission);

        QMetaObject::connectSlotsByName(add_mission);
    } // setupUi

    void retranslateUi(QDialog *add_mission)
    {
        add_mission->setWindowTitle(QApplication::translate("add_mission", "Dialog", Q_NULLPTR));
        label_7->setText(QApplication::translate("add_mission", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#0000ff;\">Details Mission</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("add_mission", "Type", Q_NULLPTR));
        label_3->setText(QApplication::translate("add_mission", "Description", Q_NULLPTR));
        label->setText(QApplication::translate("add_mission", "ID", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class add_mission: public Ui_add_mission {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_MISSION_H
