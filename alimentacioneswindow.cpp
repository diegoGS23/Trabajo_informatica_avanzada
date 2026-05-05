#include "alimentacioneswindow.h"
#include "ui_alimentacioneswindow.h"
#include "animal.h"
#include "alimentacion.h"
#include <QInputDialog>
#include <QMessageBox>

alimentacionesWindow::alimentacionesWindow(Animal animal,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::alimentacionesWindow)
    , animalActual(animal)
{
    ui->setupUi(this);


    ui->tableWidgetAlimentos->setColumnCount(2);

    QStringList cabecerasAl;
    cabecerasAl << "ID" << "Comida";

    ui->tableWidgetAlimentos->setHorizontalHeaderLabels(cabecerasAl);

    mostrarAlimentos();
}

alimentacionesWindow::~alimentacionesWindow()
{
    delete ui;
}

QVector<Alimentacion> alimentacionesWindow::getAlimentos()
{
    return animalActual.getAlimentos();
}


void alimentacionesWindow::mostrarAlimentos(){

    ui->tableWidgetAlimentos->setRowCount(0);

    QVector<Alimentacion> lista=animalActual.getAlimentos();

    for(int i=0; i<lista.size(); i++){
        ui->tableWidgetAlimentos->insertRow(i);

        ui->tableWidgetAlimentos->setItem(i,0,new QTableWidgetItem(QString::number(lista[i].getId())));

        ui->tableWidgetAlimentos->setItem(i,1,new QTableWidgetItem(lista[i].getComida()));
    }
}


void alimentacionesWindow::on_BtnAnadeAlimento_clicked()
{
    int id=QInputDialog::getInt(this,"Nuevo alimento","Id del alimento:");
    if (id<~0)
        return;

    QString comida=QInputDialog::getText(this,"Nuevo alimento","Nombre del alimento:");
    if (comida.size()==0)
        return;

    Alimentacion alim(id,comida);
    animalActual.agregarAlimento(alim);

    mostrarAlimentos();

    QMessageBox::information(this,"Nuevo alimento","Alimento añadido");
}


void alimentacionesWindow::on_BtnEliminaAlimento_clicked()
{
    int fila=QInputDialog::getInt(this,"Alimento a eliminar","Alimento nº:");
    if (fila<~0)
        return;

    animalActual.eliminarAlimento(fila);

    mostrarAlimentos();

    QMessageBox::information(this,"Alimento a eliminar","Alimento eliminado");
}

