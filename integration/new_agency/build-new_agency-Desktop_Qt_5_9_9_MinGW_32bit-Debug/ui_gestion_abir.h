/********************************************************************************
** Form generated from reading UI file 'gestion_abir.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_ABIR_H
#define UI_GESTION_ABIR_H

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

class Ui_gestion_abir
{
public:
    QAction *actionadd_article;
    QAction *actiondelete_article;
    QAction *actionadd_archive;
    QAction *actiondelete_archive;
    QAction *actionarchiver_article;
    QAction *actionenvoyer_article;
    QAction *actiondeconnecter;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *rech_article;
    QTableView *table_article;
    QLabel *label;
    QComboBox *article_sel_col;
    QWidget *tab_2;
    QTableView *table_arch;
    QLabel *label_4;
    QLineEdit *rech_arch;
    QComboBox *arch_sel_col;
    QPushButton *export_excel;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *gestion_abir)
    {
        if (gestion_abir->objectName().isEmpty())
            gestion_abir->setObjectName(QStringLiteral("gestion_abir"));
        gestion_abir->resize(821, 682);
        gestion_abir->setStyleSheet(QLatin1String("background-image: url(:/img/hand-painted-watercolor-background-with-sky-clouds-shape_24972-1095.jpg);\n"
"background-image: url(:/new/prefix1/img/hand-painted-watercolor-background-with-sky-clouds-shape_24972-1095.jpg);\n"
"background-color: rgb(255, 170, 127);"));
        actionadd_article = new QAction(gestion_abir);
        actionadd_article->setObjectName(QStringLiteral("actionadd_article"));
        actionadd_article->setCheckable(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/img/Add-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionadd_article->setIcon(icon);
        actiondelete_article = new QAction(gestion_abir);
        actiondelete_article->setObjectName(QStringLiteral("actiondelete_article"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/img/delete-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actiondelete_article->setIcon(icon1);
        actionadd_archive = new QAction(gestion_abir);
        actionadd_archive->setObjectName(QStringLiteral("actionadd_archive"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/img/images (2).jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actionadd_archive->setIcon(icon2);
        actiondelete_archive = new QAction(gestion_abir);
        actiondelete_archive->setObjectName(QStringLiteral("actiondelete_archive"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/img/images (1).jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actiondelete_archive->setIcon(icon3);
        actionarchiver_article = new QAction(gestion_abir);
        actionarchiver_article->setObjectName(QStringLiteral("actionarchiver_article"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/img/archiver.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionarchiver_article->setIcon(icon4);
        actionenvoyer_article = new QAction(gestion_abir);
        actionenvoyer_article->setObjectName(QStringLiteral("actionenvoyer_article"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/img/backmain.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionenvoyer_article->setIcon(icon5);
        actiondeconnecter = new QAction(gestion_abir);
        actiondeconnecter->setObjectName(QStringLiteral("actiondeconnecter"));
        QIcon icon6;
        icon6.addFile(QStringLiteral("img/Windows-Log-Off-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon6.addFile(QStringLiteral(":/new/prefix1/img/Windows-Log-Off-icon.png"), QSize(), QIcon::Normal, QIcon::On);
        actiondeconnecter->setIcon(icon6);
        centralwidget = new QWidget(gestion_abir);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 20, 1051, 561));
        tabWidget->setStyleSheet(QLatin1String("background-image: url(:/img/hand-painted-watercolor-background-with-sky-clouds-shape_24972-1095.jpg);\n"
"background-image: url(:/new/prefix1/img/hand-painted-watercolor-background-with-sky-clouds-shape_24972-1095.jpg);\n"
"background-color: rgb(255, 170, 127);"));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        rech_article = new QLineEdit(tab);
        rech_article->setObjectName(QStringLiteral("rech_article"));
        rech_article->setGeometry(QRect(430, 30, 151, 24));
        rech_article->setClearButtonEnabled(true);
        table_article = new QTableView(tab);
        table_article->setObjectName(QStringLiteral("table_article"));
        table_article->setGeometry(QRect(20, 71, 651, 331));
        table_article->setSortingEnabled(true);
        table_article->horizontalHeader()->setCascadingSectionResizes(true);
        table_article->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        table_article->horizontalHeader()->setStretchLastSection(false);
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 261, 41));
        article_sel_col = new QComboBox(tab);
        article_sel_col->setObjectName(QStringLiteral("article_sel_col"));
        article_sel_col->setGeometry(QRect(591, 30, 81, 22));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        table_arch = new QTableView(tab_2);
        table_arch->setObjectName(QStringLiteral("table_arch"));
        table_arch->setGeometry(QRect(10, 60, 651, 361));
        table_arch->setSelectionMode(QAbstractItemView::ExtendedSelection);
        table_arch->setSortingEnabled(true);
        table_arch->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 10, 291, 31));
        rech_arch = new QLineEdit(tab_2);
        rech_arch->setObjectName(QStringLiteral("rech_arch"));
        rech_arch->setGeometry(QRect(430, 20, 141, 24));
        rech_arch->setClearButtonEnabled(true);
        arch_sel_col = new QComboBox(tab_2);
        arch_sel_col->setObjectName(QStringLiteral("arch_sel_col"));
        arch_sel_col->setGeometry(QRect(580, 20, 81, 22));
        export_excel = new QPushButton(tab_2);
        export_excel->setObjectName(QStringLiteral("export_excel"));
        export_excel->setGeometry(QRect(150, 430, 381, 23));
        tabWidget->addTab(tab_2, QString());
        gestion_abir->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gestion_abir);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 821, 26));
        gestion_abir->setMenuBar(menubar);
        statusbar = new QStatusBar(gestion_abir);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        gestion_abir->setStatusBar(statusbar);
        toolBar = new QToolBar(gestion_abir);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        gestion_abir->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionadd_article);
        toolBar->addAction(actiondelete_article);
        toolBar->addSeparator();
        toolBar->addAction(actionadd_archive);
        toolBar->addAction(actiondelete_archive);
        toolBar->addSeparator();
        toolBar->addAction(actionarchiver_article);
        toolBar->addSeparator();
        toolBar->addAction(actionenvoyer_article);
        toolBar->addSeparator();
        toolBar->addAction(actiondeconnecter);

        retranslateUi(gestion_abir);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(gestion_abir);
    } // setupUi

    void retranslateUi(QMainWindow *gestion_abir)
    {
        gestion_abir->setWindowTitle(QApplication::translate("gestion_abir", "MainWindow", Q_NULLPTR));
        actionadd_article->setText(QApplication::translate("gestion_abir", "add_article", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionadd_article->setToolTip(QApplication::translate("gestion_abir", "<html><head/><body><p><img src=\":/img/ajouter article.jpg\"/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionadd_article->setShortcut(QApplication::translate("gestion_abir", "Ctrl+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actiondelete_article->setText(QApplication::translate("gestion_abir", "delete_article", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actiondelete_article->setToolTip(QApplication::translate("gestion_abir", "<html><head/><body><p><img src=\":/img/supprimer article.jpg\"/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actiondelete_article->setShortcut(QApplication::translate("gestion_abir", "Backspace, Ctrl+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionadd_archive->setText(QApplication::translate("gestion_abir", "add_archive", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionadd_archive->setShortcut(QApplication::translate("gestion_abir", "Ctrl+Shift+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actiondelete_archive->setText(QApplication::translate("gestion_abir", "delete_archive", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actiondelete_archive->setShortcut(QApplication::translate("gestion_abir", "Ctrl+Shift+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionarchiver_article->setText(QApplication::translate("gestion_abir", "archiver_article", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionarchiver_article->setShortcut(QApplication::translate("gestion_abir", "A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionenvoyer_article->setText(QApplication::translate("gestion_abir", "envoyer_article", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionenvoyer_article->setShortcut(QApplication::translate("gestion_abir", "E", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actiondeconnecter->setText(QApplication::translate("gestion_abir", "Se deconnecter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actiondeconnecter->setToolTip(QApplication::translate("gestion_abir", "deconnecter", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actiondeconnecter->setShortcut(QApplication::translate("gestion_abir", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        rech_article->setPlaceholderText(QApplication::translate("gestion_abir", "Recherche", Q_NULLPTR));
        label->setText(QApplication::translate("gestion_abir", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#d54e21;\">Liste des articles :</span></p></body></html>", Q_NULLPTR));
        article_sel_col->clear();
        article_sel_col->insertItems(0, QStringList()
         << QApplication::translate("gestion_abir", "All", Q_NULLPTR)
         << QApplication::translate("gestion_abir", "ID", Q_NULLPTR)
         << QApplication::translate("gestion_abir", "-", Q_NULLPTR)
         << QApplication::translate("gestion_abir", "Titre", Q_NULLPTR)
         << QApplication::translate("gestion_abir", "Categorie", Q_NULLPTR)
         << QApplication::translate("gestion_abir", "Contenu", Q_NULLPTR)
         << QApplication::translate("gestion_abir", "Date arch", Q_NULLPTR)
         << QApplication::translate("gestion_abir", "Archive", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("gestion_abir", "Articles", Q_NULLPTR));
        label_4->setText(QApplication::translate("gestion_abir", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#d54e21;\">liste des archives :</span></p></body></html>", Q_NULLPTR));
        rech_arch->setPlaceholderText(QApplication::translate("gestion_abir", "Recherche", Q_NULLPTR));
        arch_sel_col->clear();
        arch_sel_col->insertItems(0, QStringList()
         << QApplication::translate("gestion_abir", "All", Q_NULLPTR)
         << QApplication::translate("gestion_abir", "ID", Q_NULLPTR)
         << QApplication::translate("gestion_abir", "Intitule", Q_NULLPTR)
         << QApplication::translate("gestion_abir", "Droit Access", Q_NULLPTR)
         << QApplication::translate("gestion_abir", "Traitement", Q_NULLPTR)
         << QApplication::translate("gestion_abir", "Creation", Q_NULLPTR)
        );
        export_excel->setText(QApplication::translate("gestion_abir", "Export Excel", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("gestion_abir", "Archives", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("gestion_abir", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestion_abir: public Ui_gestion_abir {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_ABIR_H
