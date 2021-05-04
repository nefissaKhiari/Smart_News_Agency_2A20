/********************************************************************************
** Form generated from reading UI file 'add_carte.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_CARTE_H
#define UI_ADD_CARTE_H

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

class Ui_add_carte
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *client;
    QLineEdit *id;
    QLabel *label;
    QSpinBox *point;

    void setupUi(QDialog *add_carte)
    {
        if (add_carte->objectName().isEmpty())
            add_carte->setObjectName(QStringLiteral("add_carte"));
        add_carte->resize(232, 234);
        buttonBox = new QDialogButtonBox(add_carte);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(40, 180, 151, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_2 = new QLabel(add_carte);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 80, 16, 16));
        label_3 = new QLabel(add_carte);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 140, 47, 16));
        label_4 = new QLabel(add_carte);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 110, 28, 16));
        client = new QComboBox(add_carte);
        client->setObjectName(QStringLiteral("client"));
        client->setGeometry(QRect(101, 110, 101, 20));
        id = new QLineEdit(add_carte);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(104, 80, 101, 20));
        label = new QLabel(add_carte);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 161, 41));
        point = new QSpinBox(add_carte);
        point->setObjectName(QStringLiteral("point"));
        point->setGeometry(QRect(100, 140, 101, 22));
        point->setMaximum(1000000);

        retranslateUi(add_carte);
        QObject::connect(buttonBox, SIGNAL(accepted()), add_carte, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), add_carte, SLOT(reject()));

        QMetaObject::connectSlotsByName(add_carte);
    } // setupUi

    void retranslateUi(QDialog *add_carte)
    {
        add_carte->setWindowTitle(QApplication::translate("add_carte", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("add_carte", "ID", Q_NULLPTR));
        label_3->setText(QApplication::translate("add_carte", "Nb Points", Q_NULLPTR));
        label_4->setText(QApplication::translate("add_carte", "Client", Q_NULLPTR));
        label->setText(QApplication::translate("add_carte", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#0000ff;\">Details Carte</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class add_carte: public Ui_add_carte {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_CARTE_H
