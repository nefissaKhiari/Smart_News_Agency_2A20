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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestion_zouhour
{
public:
    QAction *actiondeconnecter;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *rech_emp;
    QTableView *table_emp;
    QLabel *label;
    QComboBox *emp_sel_col;
    QGroupBox *groupBox;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *mission;
    QLineEdit *nom;
    QLineEdit *mail;
    QLabel *label_8;
    QLabel *label_3;
    QLineEdit *id;
    QLabel *label_2;
    QComboBox *occupation;
    QDateEdit *naissance;
    QLabel *label_10;
    QLineEdit *prenom;
    QPushButton *actionadd_emp;
    QPushButton *modif_emp;
    QPushButton *actiondelete_emp;
    QPushButton *stat_emp;
    QPushButton *pushButton;
    QLineEdit *nbetoile;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *tab_2;
    QTableView *table_mission;
    QLabel *label_4;
    QLineEdit *rech_mission;
    QComboBox *mission_sel_col;
    QGroupBox *groupBox_2;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *type;
    QTextEdit *description;
    QLineEdit *id2;
    QPushButton *actionadd_mission;
    QPushButton *modif_mission;
    QPushButton *actiondelete_mission;
    QWidget *tab_3;
    QLabel *label_13;
    QTableView *table_em;
    QGroupBox *groupBox_3;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *nom_em;
    QLineEdit *idmeml;
    QLabel *label_18;
    QLineEdit *id_em;
    QLabel *label_19;
    QLabel *label_20;
    QComboBox *ide2em;
    QLineEdit *ideeml;
    QLineEdit *ideeml2;
    QComboBox *ide2em_2;
    QComboBox *idmem;
    QPushButton *supprimerem;
    QPushButton *modifem;
    QPushButton *ajouterem;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *gestion_zouhour)
    {
        if (gestion_zouhour->objectName().isEmpty())
            gestion_zouhour->setObjectName(QStringLiteral("gestion_zouhour"));
        gestion_zouhour->resize(840, 747);
        gestion_zouhour->setStyleSheet(QLatin1String("background-image: url(:/res/img/hand-painted-watercolor-background-with-sky-clouds-shape_24972-1095.jpg);\n"
"background-image: url(:/new/prefix1/img/hand-painted-watercolor-background-with-sky-clouds-shape_24972-1095.jpg);\n"
"background-color: rgb(255, 170, 127);"));
        actiondeconnecter = new QAction(gestion_zouhour);
        actiondeconnecter->setObjectName(QStringLiteral("actiondeconnecter"));
        QIcon icon;
        icon.addFile(QStringLiteral("img/Windows-Log-Off-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/new/prefix1/img/Windows-Log-Off-icon.png"), QSize(), QIcon::Normal, QIcon::On);
        actiondeconnecter->setIcon(icon);
        centralwidget = new QWidget(gestion_zouhour);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 10, 801, 661));
        tabWidget->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/img/hand-painted-watercolor-background-with-sky-clouds-shape_24972-1095.jpg);"));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        rech_emp = new QLineEdit(tab);
        rech_emp->setObjectName(QStringLiteral("rech_emp"));
        rech_emp->setGeometry(QRect(489, 30, 151, 24));
        rech_emp->setClearButtonEnabled(true);
        table_emp = new QTableView(tab);
        table_emp->setObjectName(QStringLiteral("table_emp"));
        table_emp->setGeometry(QRect(20, 70, 431, 331));
        table_emp->setSortingEnabled(false);
        table_emp->horizontalHeader()->setCascadingSectionResizes(true);
        table_emp->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        table_emp->horizontalHeader()->setStretchLastSection(false);
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 291, 41));
        emp_sel_col = new QComboBox(tab);
        emp_sel_col->setObjectName(QStringLiteral("emp_sel_col"));
        emp_sel_col->setGeometry(QRect(640, 30, 81, 22));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(469, 60, 261, 301));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 190, 81, 21));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 150, 81, 21));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 230, 81, 21));
        mission = new QComboBox(groupBox);
        mission->setObjectName(QStringLiteral("mission"));
        mission->setGeometry(QRect(120, 270, 131, 22));
        nom = new QLineEdit(groupBox);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(120, 70, 131, 20));
        mail = new QLineEdit(groupBox);
        mail->setObjectName(QStringLiteral("mail"));
        mail->setGeometry(QRect(120, 150, 131, 20));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 270, 71, 21));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 110, 81, 21));
        id = new QLineEdit(groupBox);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(120, 30, 131, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 30, 41, 21));
        occupation = new QComboBox(groupBox);
        occupation->setObjectName(QStringLiteral("occupation"));
        occupation->setGeometry(QRect(120, 230, 131, 22));
        naissance = new QDateEdit(groupBox);
        naissance->setObjectName(QStringLiteral("naissance"));
        naissance->setGeometry(QRect(120, 190, 131, 22));
        naissance->setCalendarPopup(true);
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 70, 61, 21));
        prenom = new QLineEdit(groupBox);
        prenom->setObjectName(QStringLiteral("prenom"));
        prenom->setGeometry(QRect(120, 110, 131, 20));
        actionadd_emp = new QPushButton(tab);
        actionadd_emp->setObjectName(QStringLiteral("actionadd_emp"));
        actionadd_emp->setGeometry(QRect(470, 380, 75, 23));
        modif_emp = new QPushButton(tab);
        modif_emp->setObjectName(QStringLiteral("modif_emp"));
        modif_emp->setGeometry(QRect(570, 380, 75, 23));
        actiondelete_emp = new QPushButton(tab);
        actiondelete_emp->setObjectName(QStringLiteral("actiondelete_emp"));
        actiondelete_emp->setGeometry(QRect(660, 380, 75, 23));
        stat_emp = new QPushButton(tab);
        stat_emp->setObjectName(QStringLiteral("stat_emp"));
        stat_emp->setGeometry(QRect(260, 410, 231, 221));
        stat_emp->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/img/statti.png);"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(650, 440, 93, 28));
        nbetoile = new QLineEdit(tab);
        nbetoile->setObjectName(QStringLiteral("nbetoile"));
        nbetoile->setGeometry(QRect(510, 440, 113, 22));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(520, 470, 93, 28));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(350, 30, 93, 28));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        table_mission = new QTableView(tab_2);
        table_mission->setObjectName(QStringLiteral("table_mission"));
        table_mission->setGeometry(QRect(10, 70, 451, 361));
        table_mission->setSelectionMode(QAbstractItemView::ExtendedSelection);
        table_mission->setSortingEnabled(true);
        table_mission->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 10, 281, 41));
        rech_mission = new QLineEdit(tab_2);
        rech_mission->setObjectName(QStringLiteral("rech_mission"));
        rech_mission->setGeometry(QRect(480, 30, 141, 24));
        rech_mission->setClearButtonEnabled(true);
        mission_sel_col = new QComboBox(tab_2);
        mission_sel_col->setObjectName(QStringLiteral("mission_sel_col"));
        mission_sel_col->setGeometry(QRect(630, 30, 81, 22));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(480, 70, 241, 291));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 30, 41, 21));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 110, 121, 21));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 70, 51, 21));
        type = new QLineEdit(groupBox_2);
        type->setObjectName(QStringLiteral("type"));
        type->setGeometry(QRect(80, 70, 131, 20));
        description = new QTextEdit(groupBox_2);
        description->setObjectName(QStringLiteral("description"));
        description->setGeometry(QRect(10, 140, 201, 131));
        id2 = new QLineEdit(groupBox_2);
        id2->setObjectName(QStringLiteral("id2"));
        id2->setGeometry(QRect(80, 30, 131, 20));
        actionadd_mission = new QPushButton(tab_2);
        actionadd_mission->setObjectName(QStringLiteral("actionadd_mission"));
        actionadd_mission->setGeometry(QRect(480, 370, 75, 23));
        modif_mission = new QPushButton(tab_2);
        modif_mission->setObjectName(QStringLiteral("modif_mission"));
        modif_mission->setGeometry(QRect(560, 370, 75, 23));
        actiondelete_mission = new QPushButton(tab_2);
        actiondelete_mission->setObjectName(QStringLiteral("actiondelete_mission"));
        actiondelete_mission->setGeometry(QRect(640, 370, 75, 23));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(50, 20, 431, 41));
        table_em = new QTableView(tab_3);
        table_em->setObjectName(QStringLiteral("table_em"));
        table_em->setGeometry(QRect(10, 80, 461, 361));
        table_em->setSelectionMode(QAbstractItemView::ExtendedSelection);
        table_em->setSortingEnabled(true);
        table_em->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        groupBox_3 = new QGroupBox(tab_3);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(500, 90, 261, 301));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 240, 91, 21));
        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 170, 91, 21));
        nom_em = new QLineEdit(groupBox_3);
        nom_em->setObjectName(QStringLiteral("nom_em"));
        nom_em->setGeometry(QRect(120, 70, 131, 20));
        idmeml = new QLineEdit(groupBox_3);
        idmeml->setObjectName(QStringLiteral("idmeml"));
        idmeml->setGeometry(QRect(120, 140, 131, 20));
        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 110, 81, 21));
        id_em = new QLineEdit(groupBox_3);
        id_em->setObjectName(QStringLiteral("id_em"));
        id_em->setGeometry(QRect(120, 30, 131, 20));
        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 30, 41, 21));
        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(10, 70, 61, 21));
        ide2em = new QComboBox(groupBox_3);
        ide2em->setObjectName(QStringLiteral("ide2em"));
        ide2em->setGeometry(QRect(120, 240, 131, 22));
        ideeml = new QLineEdit(groupBox_3);
        ideeml->setObjectName(QStringLiteral("ideeml"));
        ideeml->setGeometry(QRect(122, 200, 121, 22));
        ideeml2 = new QLineEdit(groupBox_3);
        ideeml2->setObjectName(QStringLiteral("ideeml2"));
        ideeml2->setGeometry(QRect(120, 270, 121, 22));
        ide2em_2 = new QComboBox(groupBox_3);
        ide2em_2->setObjectName(QStringLiteral("ide2em_2"));
        ide2em_2->setGeometry(QRect(120, 170, 131, 22));
        idmem = new QComboBox(groupBox_3);
        idmem->setObjectName(QStringLiteral("idmem"));
        idmem->setGeometry(QRect(120, 100, 131, 22));
        supprimerem = new QPushButton(tab_3);
        supprimerem->setObjectName(QStringLiteral("supprimerem"));
        supprimerem->setGeometry(QRect(690, 410, 75, 23));
        modifem = new QPushButton(tab_3);
        modifem->setObjectName(QStringLiteral("modifem"));
        modifem->setGeometry(QRect(600, 410, 75, 23));
        ajouterem = new QPushButton(tab_3);
        ajouterem->setObjectName(QStringLiteral("ajouterem"));
        ajouterem->setGeometry(QRect(500, 410, 75, 23));
        tabWidget->addTab(tab_3, QString());
        gestion_zouhour->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gestion_zouhour);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 840, 26));
        gestion_zouhour->setMenuBar(menubar);
        statusbar = new QStatusBar(gestion_zouhour);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        gestion_zouhour->setStatusBar(statusbar);
        toolBar = new QToolBar(gestion_zouhour);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        gestion_zouhour->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actiondeconnecter);
        toolBar->addSeparator();

        retranslateUi(gestion_zouhour);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(gestion_zouhour);
    } // setupUi

    void retranslateUi(QMainWindow *gestion_zouhour)
    {
        gestion_zouhour->setWindowTitle(QApplication::translate("gestion_zouhour", "MainWindow", Q_NULLPTR));
        actiondeconnecter->setText(QApplication::translate("gestion_zouhour", "Se deconnecter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actiondeconnecter->setToolTip(QApplication::translate("gestion_zouhour", "deconnecter", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actiondeconnecter->setShortcut(QApplication::translate("gestion_zouhour", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        rech_emp->setText(QString());
        rech_emp->setPlaceholderText(QApplication::translate("gestion_zouhour", "Recherche", Q_NULLPTR));
        label->setText(QApplication::translate("gestion_zouhour", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#d54e21;\">Gestion Employes</span></p></body></html>", Q_NULLPTR));
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
        groupBox->setTitle(QApplication::translate("gestion_zouhour", "Form", Q_NULLPTR));
        label_5->setText(QApplication::translate("gestion_zouhour", "Date Naissance", Q_NULLPTR));
        label_6->setText(QApplication::translate("gestion_zouhour", "E-mail", Q_NULLPTR));
        label_7->setText(QApplication::translate("gestion_zouhour", "Occupation", Q_NULLPTR));
        label_8->setText(QApplication::translate("gestion_zouhour", "Mission", Q_NULLPTR));
        label_3->setText(QApplication::translate("gestion_zouhour", "Prenom", Q_NULLPTR));
        label_2->setText(QApplication::translate("gestion_zouhour", "ID", Q_NULLPTR));
        occupation->clear();
        occupation->insertItems(0, QStringList()
         << QApplication::translate("gestion_zouhour", "Journaliste", Q_NULLPTR)
         << QApplication::translate("gestion_zouhour", "Agent", Q_NULLPTR)
         << QApplication::translate("gestion_zouhour", "Admin", Q_NULLPTR)
         << QApplication::translate("gestion_zouhour", " Ecrivain", Q_NULLPTR)
        );
        label_10->setText(QApplication::translate("gestion_zouhour", "Nom", Q_NULLPTR));
        actionadd_emp->setText(QApplication::translate("gestion_zouhour", "Ajouter", Q_NULLPTR));
        modif_emp->setText(QApplication::translate("gestion_zouhour", "Modifier", Q_NULLPTR));
        actiondelete_emp->setText(QApplication::translate("gestion_zouhour", "Supprimer", Q_NULLPTR));
        stat_emp->setText(QString());
        pushButton->setText(QApplication::translate("gestion_zouhour", "Chat", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("gestion_zouhour", "votez", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("gestion_zouhour", "refresh", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("gestion_zouhour", "Employ\303\251s", Q_NULLPTR));
        label_4->setText(QApplication::translate("gestion_zouhour", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#d54e21;\">Gestion missions</span></p></body></html>", Q_NULLPTR));
        rech_mission->setPlaceholderText(QApplication::translate("gestion_zouhour", "Recherche", Q_NULLPTR));
        mission_sel_col->clear();
        mission_sel_col->insertItems(0, QStringList()
         << QApplication::translate("gestion_zouhour", "All", Q_NULLPTR)
         << QApplication::translate("gestion_zouhour", "ID", Q_NULLPTR)
         << QApplication::translate("gestion_zouhour", "Type", Q_NULLPTR)
         << QApplication::translate("gestion_zouhour", "Description", Q_NULLPTR)
        );
        groupBox_2->setTitle(QApplication::translate("gestion_zouhour", "Form", Q_NULLPTR));
        label_9->setText(QApplication::translate("gestion_zouhour", "ID", Q_NULLPTR));
        label_11->setText(QApplication::translate("gestion_zouhour", "Description", Q_NULLPTR));
        label_12->setText(QApplication::translate("gestion_zouhour", "Type", Q_NULLPTR));
        actionadd_mission->setText(QApplication::translate("gestion_zouhour", "ajouter", Q_NULLPTR));
        modif_mission->setText(QApplication::translate("gestion_zouhour", "modifier", Q_NULLPTR));
        actiondelete_mission->setText(QApplication::translate("gestion_zouhour", "supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("gestion_zouhour", "Missions", Q_NULLPTR));
        label_13->setText(QApplication::translate("gestion_zouhour", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#d54e21;\">Gestion Employes-Missions</span></p></body></html>", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("gestion_zouhour", "Form", Q_NULLPTR));
        label_14->setText(QApplication::translate("gestion_zouhour", "id employesn\302\2602", Q_NULLPTR));
        label_15->setText(QApplication::translate("gestion_zouhour", "id employesn\302\2601", Q_NULLPTR));
        label_18->setText(QApplication::translate("gestion_zouhour", "id mission", Q_NULLPTR));
        label_19->setText(QApplication::translate("gestion_zouhour", "ID", Q_NULLPTR));
        label_20->setText(QApplication::translate("gestion_zouhour", "Nom", Q_NULLPTR));
        supprimerem->setText(QApplication::translate("gestion_zouhour", "Supprimer", Q_NULLPTR));
        modifem->setText(QApplication::translate("gestion_zouhour", "Modifier", Q_NULLPTR));
        ajouterem->setText(QApplication::translate("gestion_zouhour", "Ajouter", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("gestion_zouhour", "Employes-Missions", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("gestion_zouhour", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestion_zouhour: public Ui_gestion_zouhour {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_ZOUHOUR_H
