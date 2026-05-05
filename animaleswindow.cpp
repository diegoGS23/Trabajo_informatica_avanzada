#include "animaleswindow.h"
#include "ui_animaleswindow.h"
#include "animal.h"
#include "alimentacioneswindow.h"
#include <QInputDialog>
#include <QMessageBox>

animalesWindow::animalesWindow(Recinto recinto,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::animalesWindow)
    ,recintoActual(recinto)

{
    ui->setupUi(this);

    mostrarAnimales();

    ui->tableWidgetAnimales->setColumnCount(4);

    QStringList cabeceras;
    cabeceras << "ID" << "Nombre" << "Especie" << "Edad";

    ui->tableWidgetAnimales->setHorizontalHeaderLabels(cabeceras);

}

animalesWindow::~animalesWindow()
{
    delete ui;
}


QVector<Animal> animalesWindow::getAnimales()
{
    return recintoActual.getAnimales();
}


void animalesWindow::mostrarAnimales(){

    ui->tableWidgetAnimales->setRowCount(0);

    QVector<Animal> lista=recintoActual.getAnimales();

    for(int i=0; i<lista.size(); i++){
        ui->tableWidgetAnimales->insertRow(i);

        ui->tableWidgetAnimales->setItem(i,0,new QTableWidgetItem(QString::number(lista[i].getId())));

        ui->tableWidgetAnimales->setItem(i,1,new QTableWidgetItem(lista[i].getNombre()));

        ui->tableWidgetAnimales->setItem(i,2,new QTableWidgetItem(lista[i].getEspecie()));

        ui->tableWidgetAnimales->setItem(i,3,new QTableWidgetItem(QString::number(lista[i].getEdad())));
    }
}


void animalesWindow::on_verAlimentos_clicked()
{
    int fila =ui->tableWidgetAnimales->currentRow();

    if(fila < 0){
         QMessageBox::information(this,"Aviso","Debe seleccionar un animal");
        return;
    }

    Animal seleccionado =recintoActual.getAnimales()[fila];
    alimentacionesWindow *w =new alimentacionesWindow(seleccionado);

    w->show();
}


void animalesWindow::on_BtnAnadeAnimal_clicked()
{
    int id=QInputDialog::getInt(this,"Nuevo animal","Id del animal:");
    if (id<~0)
        return;

    QString nombre=QInputDialog::getText(this,"Nuevo animal","Nombre del animal:");
    if (nombre.size()==0)
        return;

    QString especie=QInputDialog::getText(this,"Nuevo animal","Especie del animal:");
    if (especie.size()==0)
        return;

    int edad=QInputDialog::getInt(this,"Nuevo animal","Edad del animal:");
    if (edad<~0)
        return;

    Animal a(id,nombre,especie,edad);
    recintoActual.agregarAnimal(a);

    mostrarAnimales();

    QMessageBox::information(this,"Nuevo animal","Animal añadido");
}


void animalesWindow::on_BtnEliminaAnimal_clicked()
{
    int fila=QInputDialog::getInt(this,"Animal a eliminar","Animal nº:");
    if (fila<~0)
        return;

    recintoActual.eliminarAnimal(fila);

    mostrarAnimales();

    QMessageBox::information(this,"Animal a eliminar","Animal eliminado");
}


void animalesWindow::on_BtnModificaAnimal_clicked()
{
    int fila=QInputDialog::getInt(this,"Animal a modificar","Animal nº:");
    if (fila<~0)
        return;

    QString nuevoNombre=QInputDialog::getText(this,"Animal a modificar","Nuevo nombre:");
    if (nuevoNombre.size()==0)
        return;

    QString nuevaEspecie=QInputDialog::getText(this,"Animal a modificar","Nuevo especie:");
    if (nuevaEspecie.size()==0)
        return;

    int nuevaEdad=QInputDialog::getInt(this,"Animal a modificar","Nueva edad:");
    if (nuevaEdad<~0)
        return;

    recintoActual.modificarAnimal(fila,nuevoNombre,nuevaEspecie,nuevaEdad);

    mostrarAnimales();

    QMessageBox::information(this,"Recinto a modificar","Recinto modificado");
}

