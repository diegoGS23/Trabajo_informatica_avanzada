/********************************************************************************
** Form generated from reading UI file 'animaleswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANIMALESWINDOW_H
#define UI_ANIMALESWINDOW_H

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

class Ui_animalesWindow
{
public:
    QWidget *centralwidget;
    QTableWidget *tableWidgetAnimales;
    QLabel *label;
    QPushButton *verAlimentos;
    QPushButton *BtnAnadeAnimal;
    QPushButton *BtnEliminaAnimal;
    QPushButton *BtnModificaAnimal;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *animalesWindow)
    {
        if (animalesWindow->objectName().isEmpty())
            animalesWindow->setObjectName("animalesWindow");
        animalesWindow->resize(800, 600);
        centralwidget = new QWidget(animalesWindow);
        centralwidget->setObjectName("centralwidget");
        tableWidgetAnimales = new QTableWidget(centralwidget);
        if (tableWidgetAnimales->columnCount() < 4)
            tableWidgetAnimales->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetAnimales->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetAnimales->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetAnimales->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetAnimales->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidgetAnimales->setObjectName("tableWidgetAnimales");
        tableWidgetAnimales->setGeometry(QRect(60, 110, 511, 192));
        QFont font;
        font.setPointSize(12);
        tableWidgetAnimales->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 69, 101, 31));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);
        verAlimentos = new QPushButton(centralwidget);
        verAlimentos->setObjectName("verAlimentos");
        verAlimentos->setGeometry(QRect(60, 310, 111, 31));
        BtnAnadeAnimal = new QPushButton(centralwidget);
        BtnAnadeAnimal->setObjectName("BtnAnadeAnimal");
        BtnAnadeAnimal->setGeometry(QRect(180, 310, 101, 31));
        BtnEliminaAnimal = new QPushButton(centralwidget);
        BtnEliminaAnimal->setObjectName("BtnEliminaAnimal");
        BtnEliminaAnimal->setGeometry(QRect(290, 310, 131, 31));
        BtnModificaAnimal = new QPushButton(centralwidget);
        BtnModificaAnimal->setObjectName("BtnModificaAnimal");
        BtnModificaAnimal->setGeometry(QRect(430, 310, 131, 31));
        animalesWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(animalesWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        animalesWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(animalesWindow);
        statusbar->setObjectName("statusbar");
        animalesWindow->setStatusBar(statusbar);

        retranslateUi(animalesWindow);

        QMetaObject::connectSlotsByName(animalesWindow);
    } // setupUi

    void retranslateUi(QMainWindow *animalesWindow)
    {
        animalesWindow->setWindowTitle(QCoreApplication::translate("animalesWindow", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetAnimales->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("animalesWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetAnimales->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("animalesWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetAnimales->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("animalesWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetAnimales->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("animalesWindow", "New Column", nullptr));
        label->setText(QCoreApplication::translate("animalesWindow", "Animales", nullptr));
        verAlimentos->setText(QCoreApplication::translate("animalesWindow", "Ver alimentos", nullptr));
        BtnAnadeAnimal->setText(QCoreApplication::translate("animalesWindow", "A\303\261adir animal", nullptr));
        BtnEliminaAnimal->setText(QCoreApplication::translate("animalesWindow", "Eliminar animal", nullptr));
        BtnModificaAnimal->setText(QCoreApplication::translate("animalesWindow", "Modificar animal", nullptr));
    } // retranslateUi

};

namespace Ui {
    class animalesWindow: public Ui_animalesWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANIMALESWINDOW_H
