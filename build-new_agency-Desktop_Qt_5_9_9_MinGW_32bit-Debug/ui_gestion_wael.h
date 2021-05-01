/********************************************************************************
** Form generated from reading UI file 'gestion_wael.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_WAEL_H
#define UI_GESTION_WAEL_H

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

class Ui_gestion_wael
{
public:
    QAction *actionadd_equipement;
    QAction *actiondelete_equipement;
    QAction *actionadd_maintenance;
    QAction *actiondelete_maintenance;
    QAction *actiondeconnecter;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *rech_equipement;
    QTableView *table_equipement;
    QLabel *label;
    QComboBox *equipement_sel_col;
    QWidget *tab_2;
    QTableView *table_maintenance;
    QLabel *label_4;
    QLineEdit *rech_maintenance;
    QComboBox *maintenance_sel_col;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *gestion_wael)
    {
        if (gestion_wael->objectName().isEmpty())
            gestion_wael->setObjectName(QStringLiteral("gestion_wael"));
        gestion_wael->resize(738, 548);
        gestion_wael->setStyleSheet(QLatin1String("background-color: rgb(255, 170, 127);\n"
"background-image: url(:/new/prefix1/img/hand-painted-watercolor-background-with-sky-clouds-shape_24972-1095.jpg);"));
        actionadd_equipement = new QAction(gestion_wael);
        actionadd_equipement->setObjectName(QStringLiteral("actionadd_equipement"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/img/Add-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/new/prefix1/img/Add-icon.png"), QSize(), QIcon::Normal, QIcon::On);
        actionadd_equipement->setIcon(icon);
        actiondelete_equipement = new QAction(gestion_wael);
        actiondelete_equipement->setObjectName(QStringLiteral("actiondelete_equipement"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/img/delete-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QStringLiteral(":/new/prefix1/img/delete-icon.png"), QSize(), QIcon::Normal, QIcon::On);
        actiondelete_equipement->setIcon(icon1);
        actionadd_maintenance = new QAction(gestion_wael);
        actionadd_maintenance->setObjectName(QStringLiteral("actionadd_maintenance"));
        actiondelete_maintenance = new QAction(gestion_wael);
        actiondelete_maintenance->setObjectName(QStringLiteral("actiondelete_maintenance"));
        actiondeconnecter = new QAction(gestion_wael);
        actiondeconnecter->setObjectName(QStringLiteral("actiondeconnecter"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("img/Windows-Log-Off-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QStringLiteral(":/new/prefix1/img/Windows-Log-Off-icon.png"), QSize(), QIcon::Normal, QIcon::On);
        actiondeconnecter->setIcon(icon2);
        centralwidget = new QWidget(gestion_wael);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 711, 461));
        tabWidget->setStyleSheet(QLatin1String("background-color: rgb(255, 170, 127);\n"
"background-image: url(:/new/prefix1/img/hand-painted-watercolor-background-with-sky-clouds-shape_24972-1095.jpg);"));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        rech_equipement = new QLineEdit(tab);
        rech_equipement->setObjectName(QStringLiteral("rech_equipement"));
        rech_equipement->setGeometry(QRect(430, 30, 151, 24));
        rech_equipement->setClearButtonEnabled(true);
        table_equipement = new QTableView(tab);
        table_equipement->setObjectName(QStringLiteral("table_equipement"));
        table_equipement->setGeometry(QRect(20, 71, 651, 331));
        table_equipement->setStyleSheet(QStringLiteral(""));
        table_equipement->setSortingEnabled(true);
        table_equipement->horizontalHeader()->setCascadingSectionResizes(true);
        table_equipement->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        table_equipement->horizontalHeader()->setStretchLastSection(false);
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 341, 51));
        equipement_sel_col = new QComboBox(tab);
        equipement_sel_col->setObjectName(QStringLiteral("equipement_sel_col"));
        equipement_sel_col->setGeometry(QRect(591, 30, 81, 22));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        table_maintenance = new QTableView(tab_2);
        table_maintenance->setObjectName(QStringLiteral("table_maintenance"));
        table_maintenance->setGeometry(QRect(10, 70, 651, 341));
        table_maintenance->setSelectionMode(QAbstractItemView::ExtendedSelection);
        table_maintenance->setSortingEnabled(true);
        table_maintenance->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 20, 261, 31));
        rech_maintenance = new QLineEdit(tab_2);
        rech_maintenance->setObjectName(QStringLiteral("rech_maintenance"));
        rech_maintenance->setGeometry(QRect(430, 30, 141, 24));
        rech_maintenance->setClearButtonEnabled(true);
        maintenance_sel_col = new QComboBox(tab_2);
        maintenance_sel_col->setObjectName(QStringLiteral("maintenance_sel_col"));
        maintenance_sel_col->setGeometry(QRect(580, 30, 81, 22));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 420, 281, 23));
        tabWidget->addTab(tab_2, QString());
        gestion_wael->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gestion_wael);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 738, 26));
        gestion_wael->setMenuBar(menubar);
        statusbar = new QStatusBar(gestion_wael);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        gestion_wael->setStatusBar(statusbar);
        toolBar = new QToolBar(gestion_wael);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        gestion_wael->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionadd_equipement);
        toolBar->addAction(actiondelete_equipement);
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addAction(actionadd_maintenance);
        toolBar->addAction(actiondelete_maintenance);
        toolBar->addSeparator();
        toolBar->addAction(actiondeconnecter);

        retranslateUi(gestion_wael);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(gestion_wael);
    } // setupUi

    void retranslateUi(QMainWindow *gestion_wael)
    {
        gestion_wael->setWindowTitle(QApplication::translate("gestion_wael", "MainWindow", Q_NULLPTR));
        actionadd_equipement->setText(QApplication::translate("gestion_wael", "add_equipement", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionadd_equipement->setShortcut(QApplication::translate("gestion_wael", "Ctrl+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actiondelete_equipement->setText(QApplication::translate("gestion_wael", "delete_equipement", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actiondelete_equipement->setShortcut(QApplication::translate("gestion_wael", "Ctrl+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionadd_maintenance->setText(QApplication::translate("gestion_wael", "add_maintenance", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionadd_maintenance->setShortcut(QApplication::translate("gestion_wael", "Ctrl+Shift+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actiondelete_maintenance->setText(QApplication::translate("gestion_wael", "delete_maintenance", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actiondelete_maintenance->setShortcut(QApplication::translate("gestion_wael", "Ctrl+Shift+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actiondeconnecter->setText(QApplication::translate("gestion_wael", "Se deconnecter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actiondeconnecter->setToolTip(QApplication::translate("gestion_wael", "deconnecter", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actiondeconnecter->setShortcut(QApplication::translate("gestion_wael", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        rech_equipement->setPlaceholderText(QApplication::translate("gestion_wael", "Recherche", Q_NULLPTR));
        label->setText(QApplication::translate("gestion_wael", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#d54e21;\">Gestion Equipements</span></p></body></html>", Q_NULLPTR));
        equipement_sel_col->clear();
        equipement_sel_col->insertItems(0, QStringList()
         << QApplication::translate("gestion_wael", "All", Q_NULLPTR)
         << QApplication::translate("gestion_wael", "ID", Q_NULLPTR)
         << QApplication::translate("gestion_wael", "Nom", Q_NULLPTR)
         << QApplication::translate("gestion_wael", "Date Achat", Q_NULLPTR)
         << QApplication::translate("gestion_wael", "Prix", Q_NULLPTR)
         << QApplication::translate("gestion_wael", "Etat", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("gestion_wael", "Equipements", Q_NULLPTR));
        label_4->setText(QApplication::translate("gestion_wael", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#d54e21;\">Gestion Zones</span></p></body></html>", Q_NULLPTR));
        rech_maintenance->setPlaceholderText(QApplication::translate("gestion_wael", "Recherche", Q_NULLPTR));
        maintenance_sel_col->clear();
        maintenance_sel_col->insertItems(0, QStringList()
         << QApplication::translate("gestion_wael", "All", Q_NULLPTR)
         << QApplication::translate("gestion_wael", "ID", Q_NULLPTR)
         << QApplication::translate("gestion_wael", "Equipement", Q_NULLPTR)
         << QApplication::translate("gestion_wael", "Duree", Q_NULLPTR)
         << QApplication::translate("gestion_wael", "Total", Q_NULLPTR)
         << QApplication::translate("gestion_wael", "Type Panne", Q_NULLPTR)
        );
        pushButton_2->setText(QApplication::translate("gestion_wael", "Imprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("gestion_wael", "Maintenances", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("gestion_wael", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestion_wael: public Ui_gestion_wael {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_WAEL_H
