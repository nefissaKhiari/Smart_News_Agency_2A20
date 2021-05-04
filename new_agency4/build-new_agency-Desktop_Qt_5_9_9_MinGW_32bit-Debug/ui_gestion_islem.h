/********************************************************************************
** Form generated from reading UI file 'gestion_islem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_ISLEM_H
#define UI_GESTION_ISLEM_H

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

class Ui_gestion_islem
{
public:
    QAction *actionadd_commande;
    QAction *actiondelete_commande;
    QAction *actionadd_vente;
    QAction *actiondelete_vente;
    QAction *actiondeconnecter;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *rech_commande;
    QTableView *table_commande;
    QLabel *label;
    QComboBox *commande_sel_col;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QWidget *tab_2;
    QTableView *table_vente;
    QLabel *label_4;
    QLineEdit *rech_vente;
    QComboBox *vente_sel_col;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *gestion_islem)
    {
        if (gestion_islem->objectName().isEmpty())
            gestion_islem->setObjectName(QStringLiteral("gestion_islem"));
        gestion_islem->resize(737, 549);
        gestion_islem->setStyleSheet(QLatin1String("background-image: url(:/new/prefix1/img/maxresdefault.jpg);\n"
"background-image: url(:/new/prefix1/img/maxresdefault.jpg);\n"
"background-color: rgb(230, 0, 0);"));
        actionadd_commande = new QAction(gestion_islem);
        actionadd_commande->setObjectName(QStringLiteral("actionadd_commande"));
        QIcon icon;
        icon.addFile(QStringLiteral("img/ajouter article.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/new/prefix1/img/ajouter article.jpg"), QSize(), QIcon::Normal, QIcon::On);
        actionadd_commande->setIcon(icon);
        actiondelete_commande = new QAction(gestion_islem);
        actiondelete_commande->setObjectName(QStringLiteral("actiondelete_commande"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("img/supprimer article.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QStringLiteral(":/new/prefix1/img/supprimer article.jpg"), QSize(), QIcon::Normal, QIcon::On);
        actiondelete_commande->setIcon(icon1);
        actionadd_vente = new QAction(gestion_islem);
        actionadd_vente->setObjectName(QStringLiteral("actionadd_vente"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("img/Add-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QStringLiteral(":/new/prefix1/img/Add-icon.png"), QSize(), QIcon::Normal, QIcon::On);
        actionadd_vente->setIcon(icon2);
        actiondelete_vente = new QAction(gestion_islem);
        actiondelete_vente->setObjectName(QStringLiteral("actiondelete_vente"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("img/delete-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QStringLiteral(":/new/prefix1/img/delete-icon.png"), QSize(), QIcon::Normal, QIcon::On);
        actiondelete_vente->setIcon(icon3);
        actiondeconnecter = new QAction(gestion_islem);
        actiondeconnecter->setObjectName(QStringLiteral("actiondeconnecter"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("img/Windows-Log-Off-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QStringLiteral(":/new/prefix1/img/Windows-Log-Off-icon.png"), QSize(), QIcon::Normal, QIcon::On);
        actiondeconnecter->setIcon(icon4);
        centralwidget = new QWidget(gestion_islem);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 711, 461));
        tabWidget->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/img/maxresdefault.jpg);"));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        rech_commande = new QLineEdit(tab);
        rech_commande->setObjectName(QStringLiteral("rech_commande"));
        rech_commande->setGeometry(QRect(430, 30, 151, 24));
        rech_commande->setClearButtonEnabled(true);
        table_commande = new QTableView(tab);
        table_commande->setObjectName(QStringLiteral("table_commande"));
        table_commande->setGeometry(QRect(20, 71, 651, 331));
        table_commande->setStyleSheet(QStringLiteral(""));
        table_commande->setSortingEnabled(true);
        table_commande->horizontalHeader()->setCascadingSectionResizes(true);
        table_commande->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        table_commande->horizontalHeader()->setStretchLastSection(false);
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 311, 31));
        commande_sel_col = new QComboBox(tab);
        commande_sel_col->setObjectName(QStringLiteral("commande_sel_col"));
        commande_sel_col->setGeometry(QRect(591, 30, 81, 22));
        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(30, 410, 281, 23));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 410, 331, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        table_vente = new QTableView(tab_2);
        table_vente->setObjectName(QStringLiteral("table_vente"));
        table_vente->setGeometry(QRect(10, 70, 651, 341));
        table_vente->setSelectionMode(QAbstractItemView::ExtendedSelection);
        table_vente->setSortingEnabled(true);
        table_vente->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 20, 231, 31));
        rech_vente = new QLineEdit(tab_2);
        rech_vente->setObjectName(QStringLiteral("rech_vente"));
        rech_vente->setGeometry(QRect(430, 30, 141, 24));
        rech_vente->setClearButtonEnabled(true);
        vente_sel_col = new QComboBox(tab_2);
        vente_sel_col->setObjectName(QStringLiteral("vente_sel_col"));
        vente_sel_col->setGeometry(QRect(580, 30, 81, 22));
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 420, 281, 23));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(320, 420, 331, 23));
        tabWidget->addTab(tab_2, QString());
        gestion_islem->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gestion_islem);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 737, 22));
        gestion_islem->setMenuBar(menubar);
        statusbar = new QStatusBar(gestion_islem);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        gestion_islem->setStatusBar(statusbar);
        toolBar = new QToolBar(gestion_islem);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/img/maxresdefault.jpg);"));
        gestion_islem->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionadd_commande);
        toolBar->addAction(actiondelete_commande);
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addAction(actionadd_vente);
        toolBar->addAction(actiondelete_vente);
        toolBar->addSeparator();
        toolBar->addAction(actiondeconnecter);

        retranslateUi(gestion_islem);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(gestion_islem);
    } // setupUi

    void retranslateUi(QMainWindow *gestion_islem)
    {
        gestion_islem->setWindowTitle(QApplication::translate("gestion_islem", "MainWindow", Q_NULLPTR));
        actionadd_commande->setText(QApplication::translate("gestion_islem", "add_commande", Q_NULLPTR));
        actiondelete_commande->setText(QApplication::translate("gestion_islem", "delete_commande", Q_NULLPTR));
        actionadd_vente->setText(QApplication::translate("gestion_islem", "add_vente", Q_NULLPTR));
        actiondelete_vente->setText(QApplication::translate("gestion_islem", "delete_vente", Q_NULLPTR));
        actiondeconnecter->setText(QApplication::translate("gestion_islem", "Se deconnecter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actiondeconnecter->setToolTip(QApplication::translate("gestion_islem", "deconnecter", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actiondeconnecter->setShortcut(QApplication::translate("gestion_islem", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        rech_commande->setPlaceholderText(QApplication::translate("gestion_islem", "Recherche", Q_NULLPTR));
        label->setText(QApplication::translate("gestion_islem", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#d54e21;\">Gestion Commande</span></p></body></html>", Q_NULLPTR));
        commande_sel_col->clear();
        commande_sel_col->insertItems(0, QStringList()
         << QApplication::translate("gestion_islem", "All", Q_NULLPTR)
         << QApplication::translate("gestion_islem", "ID", Q_NULLPTR)
         << QApplication::translate("gestion_islem", "Client", Q_NULLPTR)
         << QApplication::translate("gestion_islem", "Attente", Q_NULLPTR)
         << QApplication::translate("gestion_islem", "Date", Q_NULLPTR)
        );
        pushButton_5->setText(QApplication::translate("gestion_islem", "Imprimer", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("gestion_islem", "Export Excel", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("gestion_islem", "Commande", Q_NULLPTR));
        label_4->setText(QApplication::translate("gestion_islem", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#d54e21;\">Gestion Vente</span></p></body></html>", Q_NULLPTR));
        rech_vente->setPlaceholderText(QApplication::translate("gestion_islem", "Recherche", Q_NULLPTR));
        vente_sel_col->clear();
        vente_sel_col->insertItems(0, QStringList()
         << QApplication::translate("gestion_islem", "All", Q_NULLPTR)
         << QApplication::translate("gestion_islem", "ID", Q_NULLPTR)
         << QApplication::translate("gestion_islem", "Commande", Q_NULLPTR)
         << QApplication::translate("gestion_islem", "Prix", Q_NULLPTR)
         << QApplication::translate("gestion_islem", "Livraison", Q_NULLPTR)
         << QApplication::translate("gestion_islem", "Payement", Q_NULLPTR)
        );
        pushButton_4->setText(QApplication::translate("gestion_islem", "Imprimer", Q_NULLPTR));
        pushButton->setText(QApplication::translate("gestion_islem", "Export Excel", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("gestion_islem", "Vente", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("gestion_islem", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestion_islem: public Ui_gestion_islem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_ISLEM_H
