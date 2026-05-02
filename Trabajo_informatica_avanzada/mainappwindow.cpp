#include "mainappwindow.h"
#include "ui_mainappwindow.h"
#include "santuario.h"

MainAppWindow::MainAppWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainAppWindow)
    ,santuario("Gaia","Ávila")
{
    ui->setupUi(this);

    santuario.agregarRecinto(1,"Acuario",10);
    santuario.agregarRecinto(2,"Bosque",16);
    santuario.agregarRecinto(3,"Pradera",22);

    mostrarRecintos();
}

MainAppWindow::~MainAppWindow()
{
    delete ui;
}

QVector<Recinto> MainAppWindow::getRecintos()
{
    return santuario.getRecintos();
}

void MainAppWindow::mostrarRecintos(){
    ui->listWidget->clear();

    QVector<Recinto> lista=santuario.getRecintos();
    for(int i=0; i<lista.size(); i++)
    {
        QString texto =QString::number(lista[i].getId()) +" - " +lista[i].getNombre() +" | Cap: " +QString::number(lista[i].getCapacidad());

        ui->listWidget->addItem(texto);
    }
}
