/********************************************************************************
** Form generated from reading UI file 'stat_mission.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAT_MISSION_H
#define UI_STAT_MISSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_stat_mission
{
public:
    QLabel *label_stat;

    void setupUi(QDialog *stat_mission)
    {
        if (stat_mission->objectName().isEmpty())
            stat_mission->setObjectName(QStringLiteral("stat_mission"));
        stat_mission->resize(450, 450);
        label_stat = new QLabel(stat_mission);
        label_stat->setObjectName(QStringLiteral("label_stat"));
        label_stat->setGeometry(QRect(30, 30, 400, 400));

        retranslateUi(stat_mission);

        QMetaObject::connectSlotsByName(stat_mission);
    } // setupUi

    void retranslateUi(QDialog *stat_mission)
    {
        stat_mission->setWindowTitle(QApplication::translate("stat_mission", "Dialog", Q_NULLPTR));
        label_stat->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class stat_mission: public Ui_stat_mission {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAT_MISSION_H
