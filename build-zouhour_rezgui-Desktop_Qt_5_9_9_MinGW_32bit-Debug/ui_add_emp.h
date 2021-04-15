/********************************************************************************
** Form generated from reading UI file 'add_emp.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_EMP_H
#define UI_ADD_EMP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_add_emp
{
public:
    QLabel *label_7;
    QLineEdit *prenom;
    QLabel *label;
    QLineEdit *mail;
    QLabel *label_3;
    QLineEdit *id;
    QLabel *label_2;
    QLabel *label_4;
    QComboBox *occupation;
    QDialogButtonBox *buttonBox;
    QDateEdit *naissance;
    QLineEdit *nom;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *mission;
    QLabel *label_8;

    void setupUi(QDialog *add_emp)
    {
        if (add_emp->objectName().isEmpty())
            add_emp->setObjectName(QStringLiteral("add_emp"));
        add_emp->resize(376, 412);
        label_7 = new QLabel(add_emp);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(70, 10, 201, 31));
        prenom = new QLineEdit(add_emp);
        prenom->setObjectName(QStringLiteral("prenom"));
        prenom->setGeometry(QRect(190, 140, 131, 20));
        label = new QLabel(add_emp);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 60, 121, 21));
        mail = new QLineEdit(add_emp);
        mail->setObjectName(QStringLiteral("mail"));
        mail->setGeometry(QRect(190, 180, 131, 20));
        label_3 = new QLabel(add_emp);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 140, 121, 21));
        id = new QLineEdit(add_emp);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(190, 60, 131, 20));
        label_2 = new QLabel(add_emp);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 100, 121, 21));
        label_4 = new QLabel(add_emp);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 220, 121, 21));
        occupation = new QComboBox(add_emp);
        occupation->setObjectName(QStringLiteral("occupation"));
        occupation->setGeometry(QRect(190, 260, 131, 22));
        buttonBox = new QDialogButtonBox(add_emp);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(100, 370, 156, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        naissance = new QDateEdit(add_emp);
        naissance->setObjectName(QStringLiteral("naissance"));
        naissance->setGeometry(QRect(190, 220, 131, 22));
        naissance->setCalendarPopup(true);
        nom = new QLineEdit(add_emp);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(190, 100, 131, 20));
        label_5 = new QLabel(add_emp);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 180, 121, 21));
        label_6 = new QLabel(add_emp);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 260, 121, 21));
        mission = new QComboBox(add_emp);
        mission->setObjectName(QStringLiteral("mission"));
        mission->setGeometry(QRect(190, 300, 131, 22));
        label_8 = new QLabel(add_emp);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(50, 300, 121, 21));

        retranslateUi(add_emp);

        QMetaObject::connectSlotsByName(add_emp);
    } // setupUi

    void retranslateUi(QDialog *add_emp)
    {
        add_emp->setWindowTitle(QApplication::translate("add_emp", "Dialog", Q_NULLPTR));
        label_7->setText(QApplication::translate("add_emp", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#0000ff;\">Details Employe</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("add_emp", "ID", Q_NULLPTR));
        label_3->setText(QApplication::translate("add_emp", "Prenom", Q_NULLPTR));
        label_2->setText(QApplication::translate("add_emp", "Nom", Q_NULLPTR));
        label_4->setText(QApplication::translate("add_emp", "Date Naissance", Q_NULLPTR));
        occupation->clear();
        occupation->insertItems(0, QStringList()
         << QApplication::translate("add_emp", "journaliste", Q_NULLPTR)
         << QApplication::translate("add_emp", "c1", Q_NULLPTR)
         << QApplication::translate("add_emp", "c2", Q_NULLPTR)
         << QApplication::translate("add_emp", "c3", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("add_emp", "E-mail", Q_NULLPTR));
        label_6->setText(QApplication::translate("add_emp", "Occupation", Q_NULLPTR));
        label_8->setText(QApplication::translate("add_emp", "Mission", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class add_emp: public Ui_add_emp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_EMP_H
