/********************************************************************************
** Form generated from reading UI file 'alimentacioneswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALIMENTACIONESWINDOW_H
#define UI_ALIMENTACIONESWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_alimentacionesWindow
{
public:
    QWidget *centralwidget;
    QTableWidget *tableWidgetAlimentos;
    QLabel *label;
    QPushButton *BtnAnadeAlimento;
    QPushButton *BtnEliminaAlimento;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *alimentacionesWindow)
    {
        if (alimentacionesWindow->objectName().isEmpty())
            alimentacionesWindow->setObjectName("alimentacionesWindow");
        alimentacionesWindow->resize(800, 600);
        centralwidget = new QWidget(alimentacionesWindow);
        centralwidget->setObjectName("centralwidget");
        tableWidgetAlimentos = new QTableWidget(centralwidget);
        if (tableWidgetAlimentos->columnCount() < 2)
            tableWidgetAlimentos->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetAlimentos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetAlimentos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidgetAlimentos->setObjectName("tableWidgetAlimentos");
        tableWidgetAlimentos->setGeometry(QRect(70, 130, 261, 151));
        QFont font;
        font.setPointSize(12);
        tableWidgetAlimentos->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 89, 111, 31));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);
        BtnAnadeAlimento = new QPushButton(centralwidget);
        BtnAnadeAlimento->setObjectName("BtnAnadeAlimento");
        BtnAnadeAlimento->setGeometry(QRect(70, 290, 131, 31));
        BtnEliminaAlimento = new QPushButton(centralwidget);
        BtnEliminaAlimento->setObjectName("BtnEliminaAlimento");
        BtnEliminaAlimento->setGeometry(QRect(210, 290, 131, 29));
        alimentacionesWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(alimentacionesWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        alimentacionesWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(alimentacionesWindow);
        statusbar->setObjectName("statusbar");
        alimentacionesWindow->setStatusBar(statusbar);

        retranslateUi(alimentacionesWindow);

        QMetaObject::connectSlotsByName(alimentacionesWindow);
    } // setupUi

    void retranslateUi(QMainWindow *alimentacionesWindow)
    {
        alimentacionesWindow->setWindowTitle(QCoreApplication::translate("alimentacionesWindow", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetAlimentos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("alimentacionesWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetAlimentos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("alimentacionesWindow", "New Column", nullptr));
        label->setText(QCoreApplication::translate("alimentacionesWindow", "Alimentos", nullptr));
        BtnAnadeAlimento->setText(QCoreApplication::translate("alimentacionesWindow", "A\303\261adir alimento", nullptr));
        BtnEliminaAlimento->setText(QCoreApplication::translate("alimentacionesWindow", "Eliminar alimento", nullptr));
    } // retranslateUi

};

namespace Ui {
    class alimentacionesWindow: public Ui_alimentacionesWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALIMENTACIONESWINDOW_H
