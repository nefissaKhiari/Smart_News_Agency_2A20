/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_3;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_submit;
    QLineEdit *lineEdit_userID;
    QLineEdit *lineEdit_password;
    QLabel *label_pic;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(914, 588);
        MainWindow->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/img/maxresdefault.jpg);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(690, 480, 171, 41));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(500, 70, 321, 361));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 70, 91, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 150, 91, 21));
        pushButton_submit = new QPushButton(groupBox);
        pushButton_submit->setObjectName(QStringLiteral("pushButton_submit"));
        pushButton_submit->setGeometry(QRect(70, 230, 191, 41));
        pushButton_submit->setStyleSheet(QLatin1String("/*QPushButton:hover\n"
"{\n"
" background-color : green;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
" background-color : red;\n"
"}\n"
"*/"));
        lineEdit_userID = new QLineEdit(groupBox);
        lineEdit_userID->setObjectName(QStringLiteral("lineEdit_userID"));
        lineEdit_userID->setEnabled(true);
        lineEdit_userID->setGeometry(QRect(130, 70, 181, 20));
        lineEdit_userID->setMaxLength(10);
        lineEdit_userID->setClearButtonEnabled(false);
        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(130, 150, 181, 20));
        lineEdit_password->setMaxLength(20);
        lineEdit_password->setEchoMode(QLineEdit::Password);
        label_pic = new QLabel(centralwidget);
        label_pic->setObjectName(QStringLiteral("label_pic"));
        label_pic->setGeometry(QRect(60, 60, 341, 361));
        label_pic->setStyleSheet(QLatin1String("\n"
"background-image: url(:/new/prefix1/img/151232856_1217022955360319_5106535247918888891_n.png);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 914, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#aa0000;\">Connecting ... </span></p></body></html>", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Connecter", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "ID utilisateur", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Mot de passe", Q_NULLPTR));
        pushButton_submit->setText(QApplication::translate("MainWindow", "Se connecter", Q_NULLPTR));
        lineEdit_userID->setText(QString());
        lineEdit_userID->setPlaceholderText(QString());
        lineEdit_password->setText(QString());
        lineEdit_password->setPlaceholderText(QString());
        label_pic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
