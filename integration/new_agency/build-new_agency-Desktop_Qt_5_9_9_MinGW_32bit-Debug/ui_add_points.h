/********************************************************************************
** Form generated from reading UI file 'add_points.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_POINTS_H
#define UI_ADD_POINTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_add_points
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QSpinBox *point;

    void setupUi(QDialog *add_points)
    {
        if (add_points->objectName().isEmpty())
            add_points->setObjectName(QStringLiteral("add_points"));
        add_points->resize(300, 163);
        buttonBox = new QDialogButtonBox(add_points);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(50, 110, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(add_points);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 231, 41));
        point = new QSpinBox(add_points);
        point->setObjectName(QStringLiteral("point"));
        point->setGeometry(QRect(60, 80, 171, 22));
        point->setMaximum(10000000);

        retranslateUi(add_points);
        QObject::connect(buttonBox, SIGNAL(accepted()), add_points, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), add_points, SLOT(reject()));

        QMetaObject::connectSlotsByName(add_points);
    } // setupUi

    void retranslateUi(QDialog *add_points)
    {
        add_points->setWindowTitle(QApplication::translate("add_points", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("add_points", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#0000ff;\">Points to be added</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class add_points: public Ui_add_points {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_POINTS_H
