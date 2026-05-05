/********************************************************************************
** Form generated from reading UI file 'mainappwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINAPPWINDOW_H
#define UI_MAINAPPWINDOW_H

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

class Ui_MainAppWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *verAnimales;
    QTableWidget *tableWidgetRecintos;
    QPushButton *BtnAnadeRecinto;
    QPushButton *BtnEliminaRecinto;
    QPushButton *BtnModificaRecinto;
    QTableWidget *tableWidgetEmpleados;
    QLabel *label_2;
    QPushButton *BtnAnadeEmpleado;
    QPushButton *BtnEliminaEmpleado;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainAppWindow)
    {
        if (MainAppWindow->objectName().isEmpty())
            MainAppWindow->setObjectName("MainAppWindow");
        MainAppWindow->resize(800, 600);
        centralwidget = new QWidget(MainAppWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 259, 101, 31));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        verAnimales = new QPushButton(centralwidget);
        verAnimales->setObjectName("verAnimales");
        verAnimales->setGeometry(QRect(62, 490, 101, 31));
        tableWidgetRecintos = new QTableWidget(centralwidget);
        if (tableWidgetRecintos->columnCount() < 3)
            tableWidgetRecintos->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetRecintos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetRecintos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetRecintos->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidgetRecintos->setObjectName("tableWidgetRecintos");
        tableWidgetRecintos->setGeometry(QRect(70, 300, 381, 181));
        QFont font1;
        font1.setPointSize(10);
        tableWidgetRecintos->setFont(font1);
        BtnAnadeRecinto = new QPushButton(centralwidget);
        BtnAnadeRecinto->setObjectName("BtnAnadeRecinto");
        BtnAnadeRecinto->setGeometry(QRect(170, 490, 111, 31));
        BtnEliminaRecinto = new QPushButton(centralwidget);
        BtnEliminaRecinto->setObjectName("BtnEliminaRecinto");
        BtnEliminaRecinto->setGeometry(QRect(290, 490, 121, 31));
        BtnModificaRecinto = new QPushButton(centralwidget);
        BtnModificaRecinto->setObjectName("BtnModificaRecinto");
        BtnModificaRecinto->setGeometry(QRect(420, 490, 131, 31));
        tableWidgetEmpleados = new QTableWidget(centralwidget);
        if (tableWidgetEmpleados->columnCount() < 3)
            tableWidgetEmpleados->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetEmpleados->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetEmpleados->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetEmpleados->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        tableWidgetEmpleados->setObjectName("tableWidgetEmpleados");
        tableWidgetEmpleados->setGeometry(QRect(70, 71, 381, 131));
        QFont font2;
        font2.setPointSize(7);
        tableWidgetEmpleados->setFont(font2);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 30, 131, 31));
        label_2->setFont(font);
        BtnAnadeEmpleado = new QPushButton(centralwidget);
        BtnAnadeEmpleado->setObjectName("BtnAnadeEmpleado");
        BtnAnadeEmpleado->setGeometry(QRect(70, 210, 131, 31));
        BtnEliminaEmpleado = new QPushButton(centralwidget);
        BtnEliminaEmpleado->setObjectName("BtnEliminaEmpleado");
        BtnEliminaEmpleado->setGeometry(QRect(210, 210, 141, 31));
        MainAppWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainAppWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainAppWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainAppWindow);
        statusbar->setObjectName("statusbar");
        MainAppWindow->setStatusBar(statusbar);

        retranslateUi(MainAppWindow);

        QMetaObject::connectSlotsByName(MainAppWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainAppWindow)
    {
        MainAppWindow->setWindowTitle(QCoreApplication::translate("MainAppWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainAppWindow", "Recintos", nullptr));
        verAnimales->setText(QCoreApplication::translate("MainAppWindow", "Ver animales", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetRecintos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainAppWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetRecintos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainAppWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetRecintos->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainAppWindow", "New Column", nullptr));
        BtnAnadeRecinto->setText(QCoreApplication::translate("MainAppWindow", "A\303\261adir recinto", nullptr));
        BtnEliminaRecinto->setText(QCoreApplication::translate("MainAppWindow", "Eliminar recinto", nullptr));
        BtnModificaRecinto->setText(QCoreApplication::translate("MainAppWindow", "Modificar recinto", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetEmpleados->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainAppWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetEmpleados->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainAppWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetEmpleados->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainAppWindow", "New Column", nullptr));
        label_2->setText(QCoreApplication::translate("MainAppWindow", "Empleados", nullptr));
        BtnAnadeEmpleado->setText(QCoreApplication::translate("MainAppWindow", "A\303\261adir empleado", nullptr));
        BtnEliminaEmpleado->setText(QCoreApplication::translate("MainAppWindow", "Eliminar empleado", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainAppWindow: public Ui_MainAppWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINAPPWINDOW_H
