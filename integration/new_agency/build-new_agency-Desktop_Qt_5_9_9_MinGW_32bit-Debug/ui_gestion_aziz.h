/********************************************************************************
** Form generated from reading UI file 'gestion_aziz.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_AZIZ_H
#define UI_GESTION_AZIZ_H

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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestion_aziz
{
public:
    QAction *actionadd_client;
    QAction *actiondelete_client;
    QAction *actionadd_carte;
    QAction *actiondelete_carte;
    QAction *actionadd_points;
    QAction *actionget_remise;
    QAction *actiondeconnecter;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *rech_client;
    QTableView *table_client;
    QLabel *label;
    QComboBox *client_sel_col;
    QWidget *tab_2;
    QTableView *table_carte;
    QLabel *label_4;
    QLineEdit *rech_carte;
    QComboBox *carte_sel_col;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *gestion_aziz)
    {
        if (gestion_aziz->objectName().isEmpty())
            gestion_aziz->setObjectName(QStringLiteral("gestion_aziz"));
        gestion_aziz->resize(737, 577);
        gestion_aziz->setStyleSheet(QLatin1String("background-color: rgb(255, 170, 127);\n"
"background-image: url(:/new/prefix1/img/hand-painted-watercolor-background-with-sky-clouds-shape_24972-1095.jpg);"));
        actionadd_client = new QAction(gestion_aziz);
        actionadd_client->setObjectName(QStringLiteral("actionadd_client"));
        QIcon icon;
        icon.addFile(QStringLiteral("img/user-add-icon---shine-set-add-new-user-add-user-30.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/new/prefix1/img/user-add-icon---shine-set-add-new-user-add-user-30.png"), QSize(), QIcon::Normal, QIcon::On);
        actionadd_client->setIcon(icon);
        actiondelete_client = new QAction(gestion_aziz);
        actiondelete_client->setObjectName(QStringLiteral("actiondelete_client"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("img/images.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QStringLiteral(":/new/prefix1/img/images.png"), QSize(), QIcon::Normal, QIcon::On);
        actiondelete_client->setIcon(icon1);
        actionadd_carte = new QAction(gestion_aziz);
        actionadd_carte->setObjectName(QStringLiteral("actionadd_carte"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/img/Add-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QStringLiteral(":/res/img/Add-icon.png"), QSize(), QIcon::Normal, QIcon::On);
        actionadd_carte->setIcon(icon2);
        actiondelete_carte = new QAction(gestion_aziz);
        actiondelete_carte->setObjectName(QStringLiteral("actiondelete_carte"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("img/delete-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QStringLiteral(":/new/prefix1/img/delete-icon.png"), QSize(), QIcon::Normal, QIcon::On);
        actiondelete_carte->setIcon(icon3);
        actionadd_points = new QAction(gestion_aziz);
        actionadd_points->setObjectName(QStringLiteral("actionadd_points"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/img/archiver.jpg"), QSize(), QIcon::Normal, QIcon::On);
        actionadd_points->setIcon(icon4);
        actionget_remise = new QAction(gestion_aziz);
        actionget_remise->setObjectName(QStringLiteral("actionget_remise"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/img/ajouter article.jpg"), QSize(), QIcon::Normal, QIcon::On);
        actionget_remise->setIcon(icon5);
        actiondeconnecter = new QAction(gestion_aziz);
        actiondeconnecter->setObjectName(QStringLiteral("actiondeconnecter"));
        QIcon icon6;
        icon6.addFile(QStringLiteral("img/Windows-Log-Off-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon6.addFile(QStringLiteral(":/new/prefix1/img/Windows-Log-Off-icon.png"), QSize(), QIcon::Normal, QIcon::On);
        actiondeconnecter->setIcon(icon6);
        centralwidget = new QWidget(gestion_aziz);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 711, 421));
        tabWidget->setStyleSheet(QLatin1String("background-image: url(:/res/img/hand-painted-watercolor-background-with-sky-clouds-shape_24972-1095.jpg);\n"
"background-image: url(:/new/prefix1/img/hand-painted-watercolor-background-with-sky-clouds-shape_24972-1095.jpg);"));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        rech_client = new QLineEdit(tab);
        rech_client->setObjectName(QStringLiteral("rech_client"));
        rech_client->setGeometry(QRect(430, 30, 151, 24));
        rech_client->setClearButtonEnabled(true);
        table_client = new QTableView(tab);
        table_client->setObjectName(QStringLiteral("table_client"));
        table_client->setGeometry(QRect(20, 71, 651, 331));
        table_client->setStyleSheet(QStringLiteral(""));
        table_client->setSortingEnabled(true);
        table_client->horizontalHeader()->setCascadingSectionResizes(true);
        table_client->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        table_client->horizontalHeader()->setStretchLastSection(false);
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 251, 31));
        label->setStyleSheet(QStringLiteral("color: rgb(213, 78, 33);"));
        client_sel_col = new QComboBox(tab);
        client_sel_col->setObjectName(QStringLiteral("client_sel_col"));
        client_sel_col->setGeometry(QRect(591, 30, 81, 22));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        table_carte = new QTableView(tab_2);
        table_carte->setObjectName(QStringLiteral("table_carte"));
        table_carte->setGeometry(QRect(10, 70, 651, 381));
        table_carte->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/img/hand-painted-watercolor-background-with-sky-clouds-shape_24972-1095.jpg);"));
        table_carte->setSelectionMode(QAbstractItemView::ExtendedSelection);
        table_carte->setSortingEnabled(true);
        table_carte->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 20, 241, 31));
        rech_carte = new QLineEdit(tab_2);
        rech_carte->setObjectName(QStringLiteral("rech_carte"));
        rech_carte->setGeometry(QRect(430, 30, 141, 24));
        rech_carte->setClearButtonEnabled(true);
        carte_sel_col = new QComboBox(tab_2);
        carte_sel_col->setObjectName(QStringLiteral("carte_sel_col"));
        carte_sel_col->setGeometry(QRect(580, 30, 81, 22));
        tabWidget->addTab(tab_2, QString());
        gestion_aziz->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gestion_aziz);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 737, 26));
        gestion_aziz->setMenuBar(menubar);
        statusbar = new QStatusBar(gestion_aziz);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        gestion_aziz->setStatusBar(statusbar);
        toolBar = new QToolBar(gestion_aziz);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 127);"));
        gestion_aziz->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionadd_client);
        toolBar->addAction(actiondelete_client);
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addAction(actionadd_carte);
        toolBar->addAction(actiondelete_carte);
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addAction(actionadd_points);
        toolBar->addSeparator();
        toolBar->addAction(actionget_remise);
        toolBar->addSeparator();
        toolBar->addAction(actiondeconnecter);

        retranslateUi(gestion_aziz);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(gestion_aziz);
    } // setupUi

    void retranslateUi(QMainWindow *gestion_aziz)
    {
        gestion_aziz->setWindowTitle(QApplication::translate("gestion_aziz", "MainWindow", Q_NULLPTR));
        actionadd_client->setText(QApplication::translate("gestion_aziz", "add_client", Q_NULLPTR));
        actiondelete_client->setText(QApplication::translate("gestion_aziz", "delete_client", Q_NULLPTR));
        actionadd_carte->setText(QApplication::translate("gestion_aziz", "add_carte", Q_NULLPTR));
        actiondelete_carte->setText(QApplication::translate("gestion_aziz", "delete_carte", Q_NULLPTR));
        actionadd_points->setText(QApplication::translate("gestion_aziz", "add_points", Q_NULLPTR));
        actionget_remise->setText(QApplication::translate("gestion_aziz", "get_remise", Q_NULLPTR));
        actiondeconnecter->setText(QApplication::translate("gestion_aziz", "Se deconnecter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actiondeconnecter->setToolTip(QApplication::translate("gestion_aziz", "deconnecter", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actiondeconnecter->setShortcut(QApplication::translate("gestion_aziz", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        rech_client->setPlaceholderText(QApplication::translate("gestion_aziz", "Recherche", Q_NULLPTR));
        label->setText(QApplication::translate("gestion_aziz", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#d54e21;\">Gestion Clients</span></p></body></html>", Q_NULLPTR));
        client_sel_col->clear();
        client_sel_col->insertItems(0, QStringList()
         << QApplication::translate("gestion_aziz", "All", Q_NULLPTR)
         << QApplication::translate("gestion_aziz", "ID", Q_NULLPTR)
         << QApplication::translate("gestion_aziz", "Nom", Q_NULLPTR)
         << QApplication::translate("gestion_aziz", "Naissance", Q_NULLPTR)
         << QApplication::translate("gestion_aziz", "Mail", Q_NULLPTR)
         << QApplication::translate("gestion_aziz", "Ajout", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("gestion_aziz", "Clients", Q_NULLPTR));
        label_4->setText(QApplication::translate("gestion_aziz", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#d54e21;\">Gestion Cartes</span></p></body></html>", Q_NULLPTR));
        rech_carte->setPlaceholderText(QApplication::translate("gestion_aziz", "Recherche", Q_NULLPTR));
        carte_sel_col->clear();
        carte_sel_col->insertItems(0, QStringList()
         << QApplication::translate("gestion_aziz", "All", Q_NULLPTR)
         << QApplication::translate("gestion_aziz", "ID", Q_NULLPTR)
         << QApplication::translate("gestion_aziz", "Client", Q_NULLPTR)
         << QApplication::translate("gestion_aziz", "Points", Q_NULLPTR)
         << QApplication::translate("gestion_aziz", "Remise", Q_NULLPTR)
         << QApplication::translate("gestion_aziz", "Ajout", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("gestion_aziz", "Cartes Fidelite", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("gestion_aziz", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestion_aziz: public Ui_gestion_aziz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_AZIZ_H
