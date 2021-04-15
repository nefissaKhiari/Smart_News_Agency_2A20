/********************************************************************************
** Form generated from reading UI file 'gestion_zouhour.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_ZOUHOUR_H
#define UI_GESTION_ZOUHOUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestion_zouhour
{
public:
    QAction *actionadd_emp;
    QAction *actiondelete_emp;
    QAction *actionadd_mission;
    QAction *actiondelete_mission;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *rech_emp;
    QTableView *table_emp;
    QLabel *label;
    QPushButton *stat_emp;
    QComboBox *emp_sel_col;
    QWidget *tab_2;
    QTableView *table_mission;
    QLabel *label_4;
    QLineEdit *rech_mission;
    QComboBox *mission_sel_col;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *gestion_zouhour)
    {
        if (gestion_zouhour->objectName().isEmpty())
            gestion_zouhour->setObjectName(QStringLiteral("gestion_zouhour"));
        gestion_zouhour->resize(800, 600);
        gestion_zouhour->setStyleSheet(QStringLiteral(""));
        actionadd_emp = new QAction(gestion_zouhour);
        actionadd_emp->setObjectName(QStringLiteral("actionadd_emp"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/img/user-add-icon---shine-set-add-new-user-add-user-30.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionadd_emp->setIcon(icon);
        actiondelete_emp = new QAction(gestion_zouhour);
        actiondelete_emp->setObjectName(QStringLiteral("actiondelete_emp"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/img/images.png"), QSize(), QIcon::Normal, QIcon::Off);
        actiondelete_emp->setIcon(icon1);
        actionadd_mission = new QAction(gestion_zouhour);
        actionadd_mission->setObjectName(QStringLiteral("actionadd_mission"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/img/Add-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionadd_mission->setIcon(icon2);
        actiondelete_mission = new QAction(gestion_zouhour);
        actiondelete_mission->setObjectName(QStringLiteral("actiondelete_mission"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/img/delete-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actiondelete_mission->setIcon(icon3);
        centralwidget = new QWidget(gestion_zouhour);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 10, 711, 461));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        rech_emp = new QLineEdit(tab);
        rech_emp->setObjectName(QStringLiteral("rech_emp"));
        rech_emp->setGeometry(QRect(430, 30, 151, 24));
        rech_emp->setClearButtonEnabled(true);
        table_emp = new QTableView(tab);
        table_emp->setObjectName(QStringLiteral("table_emp"));
        table_emp->setGeometry(QRect(20, 71, 651, 331));
        table_emp->setStyleSheet(QStringLiteral(""));
        table_emp->setSortingEnabled(false);
        table_emp->horizontalHeader()->setCascadingSectionResizes(true);
        table_emp->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        table_emp->horizontalHeader()->setStretchLastSection(false);
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 221, 31));
        stat_emp = new QPushButton(tab);
        stat_emp->setObjectName(QStringLiteral("stat_emp"));
        stat_emp->setGeometry(QRect(400, 30, 24, 24));
        stat_emp->setStyleSheet(QStringLiteral("background-image: url(:/res/img/unnamed.png);"));
        emp_sel_col = new QComboBox(tab);
        emp_sel_col->setObjectName(QStringLiteral("emp_sel_col"));
        emp_sel_col->setGeometry(QRect(591, 30, 81, 22));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        table_mission = new QTableView(tab_2);
        table_mission->setObjectName(QStringLiteral("table_mission"));
        table_mission->setGeometry(QRect(10, 70, 651, 361));
        table_mission->setSelectionMode(QAbstractItemView::ExtendedSelection);
        table_mission->setSortingEnabled(true);
        table_mission->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 20, 211, 31));
        rech_mission = new QLineEdit(tab_2);
        rech_mission->setObjectName(QStringLiteral("rech_mission"));
        rech_mission->setGeometry(QRect(430, 30, 141, 24));
        rech_mission->setClearButtonEnabled(true);
        mission_sel_col = new QComboBox(tab_2);
        mission_sel_col->setObjectName(QStringLiteral("mission_sel_col"));
        mission_sel_col->setGeometry(QRect(580, 30, 81, 22));
        tabWidget->addTab(tab_2, QString());
        gestion_zouhour->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gestion_zouhour);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        gestion_zouhour->setMenuBar(menubar);
        statusbar = new QStatusBar(gestion_zouhour);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        gestion_zouhour->setStatusBar(statusbar);
        toolBar = new QToolBar(gestion_zouhour);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        gestion_zouhour->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionadd_emp);
        toolBar->addAction(actiondelete_emp);
        toolBar->addSeparator();
        toolBar->addAction(actionadd_mission);
        toolBar->addAction(actiondelete_mission);

        retranslateUi(gestion_zouhour);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(gestion_zouhour);
    } // setupUi

    void retranslateUi(QMainWindow *gestion_zouhour)
    {
        gestion_zouhour->setWindowTitle(QApplication::translate("gestion_zouhour", "MainWindow", Q_NULLPTR));
        actionadd_emp->setText(QApplication::translate("gestion_zouhour", "add_emp", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionadd_emp->setShortcut(QApplication::translate("gestion_zouhour", "Ctrl+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actiondelete_emp->setText(QApplication::translate("gestion_zouhour", "delete_emp", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actiondelete_emp->setShortcut(QApplication::translate("gestion_zouhour", "Ctrl+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionadd_mission->setText(QApplication::translate("gestion_zouhour", "add_mission", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionadd_mission->setShortcut(QApplication::translate("gestion_zouhour", "Ctrl+Shift+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actiondelete_mission->setText(QApplication::translate("gestion_zouhour", "delete_mission", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actiondelete_mission->setShortcut(QApplication::translate("gestion_zouhour", "Ctrl+Shift+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        rech_emp->setPlaceholderText(QApplication::translate("gestion_zouhour", "Recherche", Q_NULLPTR));
        label->setText(QApplication::translate("gestion_zouhour", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#5500ff;\">Gestion Employes</span></p></body></html>", Q_NULLPTR));
        stat_emp->setText(QString());
        emp_sel_col->clear();
        emp_sel_col->insertItems(0, QStringList()
         << QApplication::translate("gestion_zouhour", "All", Q_NULLPTR)
         << QApplication::translate("gestion_zouhour", "ID", Q_NULLPTR)
         << QApplication::translate("gestion_zouhour", "Nom", Q_NULLPTR)
         << QApplication::translate("gestion_zouhour", "Prenom", Q_NULLPTR)
         << QApplication::translate("gestion_zouhour", "Mail", Q_NULLPTR)
         << QApplication::translate("gestion_zouhour", "Naissance", Q_NULLPTR)
         << QApplication::translate("gestion_zouhour", "Occupation", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("gestion_zouhour", "Employ\303\251s", Q_NULLPTR));
        label_4->setText(QApplication::translate("gestion_zouhour", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#5500ff;\">Gestion missions</span></p></body></html>", Q_NULLPTR));
        rech_mission->setPlaceholderText(QApplication::translate("gestion_zouhour", "Recherche", Q_NULLPTR));
        mission_sel_col->clear();
        mission_sel_col->insertItems(0, QStringList()
         << QApplication::translate("gestion_zouhour", "All", Q_NULLPTR)
         << QApplication::translate("gestion_zouhour", "ID", Q_NULLPTR)
         << QApplication::translate("gestion_zouhour", "Type", Q_NULLPTR)
         << QApplication::translate("gestion_zouhour", "Description", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("gestion_zouhour", "Missions", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("gestion_zouhour", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestion_zouhour: public Ui_gestion_zouhour {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_ZOUHOUR_H
