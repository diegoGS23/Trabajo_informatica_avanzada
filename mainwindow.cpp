#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainappwindow.h"
#include "ui_mainappwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_login_clicked()
{
    QString Usuario=ui->lineEdit_User->text();
    QString Contraseña=ui->lineEdit_Password->text();

    if (Usuario=="diego" && Contraseña=="1234"){
        QMessageBox::information(this,"Inicio de sesión","Inicio exitoso");

        MainAppWindow *ventana=new MainAppWindow();
        ventana->show();
    }
    else{
         QMessageBox::warning(this,"Inicio de sesión","Usuario o contraseña incorrectos");
    }
}

void MainWindow::on_cancel_clicked()
{
    QMessageBox::StandardButton reply;
    reply=QMessageBox::question(this,"Inicio de sesión","¿Quieres cerrar la aplicación?");

    if (reply==QMessageBox::Yes){
        QApplication::quit();
    }
}


