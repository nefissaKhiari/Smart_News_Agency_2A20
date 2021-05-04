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
#include <QtWidgets/QProgressBar>
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
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *rech_equipement;
    QTableView *table_equipement;
    QLabel *label;
    QComboBox *equipement_sel_col;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QProgressBar *progressBar;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_5;
    QPushButton *pushButton_4;
    QLabel *Clocklabel;
    QLabel *date;
    QWidget *tab_2;
    QTableView *table_maintenance;
    QLabel *label_4;
    QLineEdit *rech_maintenance;
    QComboBox *maintenance_sel_col;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *play;
    QPushButton *stop;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *gestion_wael)
    {
        if (gestion_wael->objectName().isEmpty())
            gestion_wael->setObjectName(QStringLiteral("gestion_wael"));
        gestion_wael->resize(1002, 702);
        gestion_wael->setStyleSheet(QLatin1String("background-image: url(:/new/prefix1/img/hand-painted-watercolor-background-with-sky-clouds-shape_24972-1095.jpg);\n"
"background-color: rgb(214, 0, 0);\n"
"background-image: url(:/new/prefix1/img/maxresdefault.jpg);"));
        actionadd_equipement = new QAction(gestion_wael);
        actionadd_equipement->setObjectName(QStringLiteral("actionadd_equipement"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/img/images (2).jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actionadd_equipement->setIcon(icon);
        actiondelete_equipement = new QAction(gestion_wael);
        actiondelete_equipement->setObjectName(QStringLiteral("actiondelete_equipement"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/img/images (1).jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actiondelete_equipement->setIcon(icon1);
        actionadd_maintenance = new QAction(gestion_wael);
        actionadd_maintenance->setObjectName(QStringLiteral("actionadd_maintenance"));
        actiondelete_maintenance = new QAction(gestion_wael);
        actiondelete_maintenance->setObjectName(QStringLiteral("actiondelete_maintenance"));
        centralwidget = new QWidget(gestion_wael);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 40, 901, 581));
        tabWidget->setStyleSheet(QStringLiteral("background-color: rgb(230, 0, 0);"));
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
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(410, 410, 93, 28));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(600, 420, 131, 81));
        progressBar = new QProgressBar(tab);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(340, 480, 231, 23));
        progressBar->setValue(24);
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 420, 93, 28));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 426, 81, 20));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(134, 475, 71, 21));
        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 480, 93, 28));
        Clocklabel = new QLabel(tab);
        Clocklabel->setObjectName(QStringLiteral("Clocklabel"));
        Clocklabel->setGeometry(QRect(700, 10, 121, 16));
        date = new QLabel(tab);
        date->setObjectName(QStringLiteral("date"));
        date->setGeometry(QRect(700, 45, 111, 21));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        table_maintenance = new QTableView(tab_2);
        table_maintenance->setObjectName(QStringLiteral("table_maintenance"));
        table_maintenance->setGeometry(QRect(-50, 0, 651, 341));
        table_maintenance->setSelectionMode(QAbstractItemView::ExtendedSelection);
        table_maintenance->setSortingEnabled(true);
        table_maintenance->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 20, 331, 51));
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
        pushButton_5 = new QPushButton(tab_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(180, 450, 281, 21));
        play = new QPushButton(tab_2);
        play->setObjectName(QStringLiteral("play"));
        play->setGeometry(QRect(590, 510, 93, 28));
        stop = new QPushButton(tab_2);
        stop->setObjectName(QStringLiteral("stop"));
        stop->setGeometry(QRect(740, 510, 93, 28));
        tabWidget->addTab(tab_2, QString());
        gestion_wael->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gestion_wael);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1002, 26));
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

        retranslateUi(gestion_wael);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(gestion_wael);
    } // setupUi

    void retranslateUi(QMainWindow *gestion_wael)
    {
        gestion_wael->setWindowTitle(QApplication::translate("gestion_wael", "MainWindow", Q_NULLPTR));
        actionadd_equipement->setText(QApplication::translate("gestion_wael", "add_equipement", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionadd_equipement->setToolTip(QApplication::translate("gestion_wael", "<html><head/><body><p><img src=\":/new/prefix1/img/images (2).jfif\"/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionadd_equipement->setShortcut(QApplication::translate("gestion_wael", "Ctrl+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actiondelete_equipement->setText(QApplication::translate("gestion_wael", "delete_equipement", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actiondelete_equipement->setToolTip(QApplication::translate("gestion_wael", "<html><head/><body><p><img src=\":/new/prefix1/img/images (1).jfif\"/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
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
        rech_equipement->setPlaceholderText(QApplication::translate("gestion_wael", "Recherche", Q_NULLPTR));
        label->setText(QApplication::translate("gestion_wael", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#e54d30;\">Gestion Equipements</span></p></body></html>", Q_NULLPTR));
        equipement_sel_col->clear();
        equipement_sel_col->insertItems(0, QStringList()
         << QApplication::translate("gestion_wael", "All", Q_NULLPTR)
         << QApplication::translate("gestion_wael", "ID", Q_NULLPTR)
         << QApplication::translate("gestion_wael", "Nom", Q_NULLPTR)
         << QApplication::translate("gestion_wael", "Date Achat", Q_NULLPTR)
         << QApplication::translate("gestion_wael", "Prix", Q_NULLPTR)
         << QApplication::translate("gestion_wael", "Etat", Q_NULLPTR)
        );
        pushButton_3->setText(QApplication::translate("gestion_wael", "UPLOAD IMAGE", Q_NULLPTR));
        label_2->setText(QString());
        pushButton->setText(QApplication::translate("gestion_wael", "PRIX TOTAL", Q_NULLPTR));
        label_3->setText(QString());
        label_5->setText(QString());
        pushButton_4->setText(QApplication::translate("gestion_wael", "UPLOAD VIDEO", Q_NULLPTR));
        Clocklabel->setText(QString());
        date->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("gestion_wael", "Equipements", Q_NULLPTR));
        label_4->setText(QApplication::translate("gestion_wael", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#e54d30;\">Gestion Maintenance</span></p></body></html>", Q_NULLPTR));
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
        pushButton_5->setText(QApplication::translate("gestion_wael", "EXCEL", Q_NULLPTR));
        play->setText(QApplication::translate("gestion_wael", "Play", Q_NULLPTR));
        stop->setText(QApplication::translate("gestion_wael", "Stop", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("gestion_wael", "Maintenances", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("gestion_wael", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestion_wael: public Ui_gestion_wael {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_WAEL_H
