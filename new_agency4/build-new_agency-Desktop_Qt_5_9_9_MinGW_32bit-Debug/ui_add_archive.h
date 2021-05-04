/********************************************************************************
** Form generated from reading UI file 'add_archive.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_ARCHIVE_H
#define UI_ADD_ARCHIVE_H

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

class Ui_add_archive
{
public:
    QLineEdit *intitule;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *access;
    QDialogButtonBox *buttonBox;
    QLineEdit *id;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *traitement;

    void setupUi(QDialog *add_archive)
    {
        if (add_archive->objectName().isEmpty())
            add_archive->setObjectName(QStringLiteral("add_archive"));
        add_archive->resize(344, 366);
        intitule = new QLineEdit(add_archive);
        intitule->setObjectName(QStringLiteral("intitule"));
        intitule->setGeometry(QRect(190, 100, 131, 20));
        label_3 = new QLabel(add_archive);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 140, 121, 21));
        label_4 = new QLabel(add_archive);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 180, 121, 21));
        access = new QLineEdit(add_archive);
        access->setObjectName(QStringLiteral("access"));
        access->setGeometry(QRect(190, 140, 131, 20));
        buttonBox = new QDialogButtonBox(add_archive);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(100, 320, 156, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        id = new QLineEdit(add_archive);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(190, 60, 131, 20));
        label_7 = new QLabel(add_archive);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(60, 10, 241, 31));
        label = new QLabel(add_archive);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 60, 121, 21));
        label_2 = new QLabel(add_archive);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 100, 121, 21));
        traitement = new QTextEdit(add_archive);
        traitement->setObjectName(QStringLiteral("traitement"));
        traitement->setGeometry(QRect(50, 210, 271, 91));

        retranslateUi(add_archive);

        QMetaObject::connectSlotsByName(add_archive);
    } // setupUi

    void retranslateUi(QDialog *add_archive)
    {
        add_archive->setWindowTitle(QApplication::translate("add_archive", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("add_archive", "Droit Access", Q_NULLPTR));
        label_4->setText(QApplication::translate("add_archive", "Traitement", Q_NULLPTR));
        label_7->setText(QApplication::translate("add_archive", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#d54e21;\">Ajouter Archive</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("add_archive", "ID", Q_NULLPTR));
        label_2->setText(QApplication::translate("add_archive", "Intitule", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class add_archive: public Ui_add_archive {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_ARCHIVE_H
