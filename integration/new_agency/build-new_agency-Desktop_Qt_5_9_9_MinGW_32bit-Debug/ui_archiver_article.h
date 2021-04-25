/********************************************************************************
** Form generated from reading UI file 'archiver_article.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARCHIVER_ARTICLE_H
#define UI_ARCHIVER_ARTICLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_archiver_article
{
public:
    QDialogButtonBox *buttonBox;
    QComboBox *archive;
    QLabel *label;

    void setupUi(QDialog *archiver_article)
    {
        if (archiver_article->objectName().isEmpty())
            archiver_article->setObjectName(QStringLiteral("archiver_article"));
        archiver_article->resize(316, 165);
        buttonBox = new QDialogButtonBox(archiver_article);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(70, 110, 156, 23));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        archive = new QComboBox(archiver_article);
        archive->setObjectName(QStringLiteral("archive"));
        archive->setGeometry(QRect(40, 70, 211, 22));
        label = new QLabel(archiver_article);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 231, 31));

        retranslateUi(archiver_article);
        QObject::connect(buttonBox, SIGNAL(accepted()), archiver_article, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), archiver_article, SLOT(reject()));

        QMetaObject::connectSlotsByName(archiver_article);
    } // setupUi

    void retranslateUi(QDialog *archiver_article)
    {
        archiver_article->setWindowTitle(QApplication::translate("archiver_article", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("archiver_article", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#d54e21;\">Liste Archives</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class archiver_article: public Ui_archiver_article {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARCHIVER_ARTICLE_H
