/********************************************************************************
** Form generated from reading UI file 'add_article.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_ARTICLE_H
#define UI_ADD_ARTICLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_add_article
{
public:
    QLineEdit *id;
    QLineEdit *titre;
    QLabel *label_3;
    QDialogButtonBox *buttonBox;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *categorie;
    QTextEdit *contenu;
    QLineEdit *image;
    QPushButton *pushButton;

    void setupUi(QDialog *add_article)
    {
        if (add_article->objectName().isEmpty())
            add_article->setObjectName(QStringLiteral("add_article"));
        add_article->resize(342, 402);
        id = new QLineEdit(add_article);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(160, 60, 131, 20));
        titre = new QLineEdit(add_article);
        titre->setObjectName(QStringLiteral("titre"));
        titre->setGeometry(QRect(160, 100, 131, 20));
        label_3 = new QLabel(add_article);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 140, 121, 21));
        buttonBox = new QDialogButtonBox(add_article);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(80, 360, 156, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_4 = new QLabel(add_article);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 220, 121, 21));
        label_7 = new QLabel(add_article);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 10, 221, 41));
        label = new QLabel(add_article);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 60, 121, 21));
        label_2 = new QLabel(add_article);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 100, 121, 21));
        categorie = new QLineEdit(add_article);
        categorie->setObjectName(QStringLiteral("categorie"));
        categorie->setGeometry(QRect(160, 140, 131, 20));
        contenu = new QTextEdit(add_article);
        contenu->setObjectName(QStringLiteral("contenu"));
        contenu->setGeometry(QRect(20, 250, 271, 91));
        image = new QLineEdit(add_article);
        image->setObjectName(QStringLiteral("image"));
        image->setGeometry(QRect(160, 180, 131, 20));
        pushButton = new QPushButton(add_article);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 180, 91, 23));

        retranslateUi(add_article);

        QMetaObject::connectSlotsByName(add_article);
    } // setupUi

    void retranslateUi(QDialog *add_article)
    {
        add_article->setWindowTitle(QApplication::translate("add_article", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("add_article", "Categorie", Q_NULLPTR));
        label_4->setText(QApplication::translate("add_article", "Contenu", Q_NULLPTR));
        label_7->setText(QApplication::translate("add_article", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#d54e21;\">Ajouter Article</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("add_article", "ID", Q_NULLPTR));
        label_2->setText(QApplication::translate("add_article", "Titre", Q_NULLPTR));
        pushButton->setText(QApplication::translate("add_article", "Browse Image", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class add_article: public Ui_add_article {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_ARTICLE_H
