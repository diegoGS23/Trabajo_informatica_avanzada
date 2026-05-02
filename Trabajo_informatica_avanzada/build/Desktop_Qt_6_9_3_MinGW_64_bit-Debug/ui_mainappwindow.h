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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainAppWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableWidget;
    QListWidget *listWidget;
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
        label->setGeometry(QRect(400, 100, 63, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 100, 71, 20));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 130, 761, 151));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(horizontalLayoutWidget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");

        horizontalLayout->addWidget(tableWidget);

        listWidget = new QListWidget(horizontalLayoutWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName("listWidget");

        horizontalLayout->addWidget(listWidget);

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
        label_2->setText(QCoreApplication::translate("MainAppWindow", "Animales", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainAppWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainAppWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainAppWindow", "New Column", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainAppWindow", "New Item", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainAppWindow", "New Item", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class MainAppWindow: public Ui_MainAppWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINAPPWINDOW_H
