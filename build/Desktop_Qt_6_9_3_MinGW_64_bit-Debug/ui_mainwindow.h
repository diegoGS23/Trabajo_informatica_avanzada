/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_User;
    QLineEdit *lineEdit_Password;
    QPushButton *login;
    QPushButton *cancel;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 230, 141, 31));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);
        label->setLineWidth(1);
        label->setMidLineWidth(-2);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 280, 201, 41));
        label_2->setFont(font);
        lineEdit_User = new QLineEdit(centralwidget);
        lineEdit_User->setObjectName("lineEdit_User");
        lineEdit_User->setGeometry(QRect(270, 230, 321, 31));
        QFont font1;
        font1.setPointSize(14);
        lineEdit_User->setFont(font1);
        lineEdit_Password = new QLineEdit(centralwidget);
        lineEdit_Password->setObjectName("lineEdit_Password");
        lineEdit_Password->setGeometry(QRect(270, 290, 321, 31));
        lineEdit_Password->setFont(font1);
        login = new QPushButton(centralwidget);
        login->setObjectName("login");
        login->setGeometry(QRect(270, 340, 111, 29));
        cancel = new QPushButton(centralwidget);
        cancel->setObjectName("cancel");
        cancel->setGeometry(QRect(400, 340, 93, 29));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(270, 130, 421, 71));
        QFont font2;
        font2.setPointSize(36);
        label_3->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Usuario:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Contrase\303\261a:", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "Iniciar sesi\303\263n", nullptr));
        cancel->setText(QCoreApplication::translate("MainWindow", "Cancelar", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Inicio de sesi\303\263n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
