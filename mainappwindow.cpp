#include "mainappwindow.h"
#include "ui_mainappwindow.h"
#include "santuario.h"
#include "animaleswindow.h"
#include "animal.h"
#include "alimentacion.h"
#include "empleado.h"
#include "administrador.h"
#include <QInputDialog>
#include <QMessageBox>
#include <QDebug>

MainAppWindow::MainAppWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainAppWindow)
    ,santuario("Gaia","Ávila",{})
    ,admin(1685,"Diego")

{
    ui->setupUi(this);

    Animal a1(1473,"Pez payaso","Nemo",2);
    Animal a2(1282,"Lobo ibérico","Rex",4);
    Animal a3(2547,"Zorro ibérico","Toby",5);
    Animal a4(1119,"Pantera","Baguira",5);

    Empleado e1(5389,"Carlos","carloslopez@gmail","J63Y");
    Empleado e2(1529,"Laura","laurasanchez@gmail","5U7B");

    QVector<Animal> lista={a1,a2,a3,a4};
    QVector<Empleado> listaEmpleados={e1,e2};

    Recinto r1(1562,"Acuario",10,{});
    Recinto r2(2218,"Bosque",16,{});
    Recinto r3(1190,"Jungla",22,{});

    Alimentacion alim1(14,"Zooplancton");
    Alimentacion alim2(6,"Carnaza");
    Alimentacion alim3(4,"Pollo");
    Alimentacion alim4(2,"Pescado");
    Alimentacion alim5(16,"Algas");

    a1.agregarAlimento(alim1);
    a1.agregarAlimento(alim5);
    a2.agregarAlimento(alim2);
    a3.agregarAlimento(alim3);
    a4.agregarAlimento(alim2);
    a4.agregarAlimento(alim4);

    r1.agregarAnimal(a1);
    r2.agregarAnimal(a2);
    r2.agregarAnimal(a3);
    r3.agregarAnimal(a4);

    santuario.agregarRecinto(r1);
    santuario.agregarRecinto(r2);
    santuario.agregarRecinto(r3);

    admin.agregarEmpleados(e1);
    admin.agregarEmpleados(e2);


    ui->tableWidgetRecintos->setColumnCount(3);

    QStringList cabeceras;
    cabeceras << "ID" << "Nombre" << "Capacidad";

    ui->tableWidgetRecintos->setHorizontalHeaderLabels(cabeceras);


    ui->tableWidgetEmpleados->setColumnCount(3);

    QStringList cabecerasEm;
    cabecerasEm << "ID" << "Nombre" << "Email";

    ui->tableWidgetEmpleados->setHorizontalHeaderLabels(cabecerasEm);

    mostrarRecintos();
    mostrarEmpleados();
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
    ui->tableWidgetRecintos->setRowCount(0);

    QVector<Recinto> lista=santuario.getRecintos();

    for(int i=0; i<lista.size(); i++){
        ui->tableWidgetRecintos->insertRow(i);

        ui->tableWidgetRecintos->setItem(i,0,new QTableWidgetItem(QString::number(lista[i].getId())));

        ui->tableWidgetRecintos->setItem(i,1,new QTableWidgetItem(lista[i].getNombre()));

        ui->tableWidgetRecintos->setItem(i,2,new QTableWidgetItem(QString::number(lista[i].getCapacidad())));
    }

}


QVector<Empleado> MainAppWindow::getEmpleados()
{
    return admin.getEmpleados();
}


void MainAppWindow::mostrarEmpleados(){
    ui->tableWidgetEmpleados->setRowCount(0);

    QVector<Empleado> lista=admin.getEmpleados();

    for(int i=0; i<lista.size(); i++){
        ui->tableWidgetEmpleados->insertRow(i);

        ui->tableWidgetEmpleados->setItem(i,0,new QTableWidgetItem(QString::number(lista[i].getId())));

        ui->tableWidgetEmpleados->setItem(i,1,new QTableWidgetItem(lista[i].getNombre()));

        ui->tableWidgetEmpleados->setItem(i,2,new QTableWidgetItem(lista[i].getEmail()));
    }

}

void MainAppWindow::on_verAnimales_clicked()
{
    int fila =ui->tableWidgetRecintos->currentRow();

    if(fila < 0){
        QMessageBox::information(this,"Aviso","Debe seleccionar un recinto");
        return;
    }

    Recinto seleccionado =santuario.getRecintos()[fila];
    animalesWindow *w =new animalesWindow(seleccionado);

    w->show();
}


void MainAppWindow::on_BtnAnadeRecinto_clicked()
{
    int id=QInputDialog::getInt(this,"Nuevo recinto","Id del recinto:");
    if (id<~0)
        return;

    QString nombre=QInputDialog::getText(this,"Nuevo recinto","Nombre del recinto:");
    if (nombre.size()==0)
        return;

    int capacidad=QInputDialog::getInt(this,"Nuevo recinto","Capacidad del recinto:");
    if (capacidad<~0)
        return;

    Recinto r(id,nombre,capacidad,{});
    santuario.agregarRecinto(r);

    mostrarRecintos();

    QMessageBox::information(this,"Nuevo recinto","Recinto añadido");
}


void MainAppWindow::on_BtnEliminaRecinto_clicked()
{
    int fila=QInputDialog::getInt(this,"Recinto a eliminar","Recinto nº:");
    if (fila<~0)
        return;

    santuario.eliminarRecinto(fila);

    mostrarRecintos();

    QMessageBox::information(this,"Recinto a eliminar","Recinto eliminado");
}


void MainAppWindow::on_BtnModificaRecinto_clicked()
{
    int fila=QInputDialog::getInt(this,"Recinto a modificar","Recinto nº:");
    if (fila<~0)
        return;

    QString nuevoNombre=QInputDialog::getText(this,"Recinto a modificar","Nuevo nombre:");
    if (nuevoNombre.size()==0)
        return;

    int nuevaCapacidad=QInputDialog::getInt(this,"Recinto a modificar","Nueva capacidad:");
    if (nuevaCapacidad<~0)
        return;

    santuario.modificarRecinto(fila,nuevoNombre,nuevaCapacidad);

    mostrarRecintos();

    QMessageBox::information(this,"Recinto a modificar","Recinto modificado");
}


void MainAppWindow::on_BtnAnadeEmpleado_clicked()
{
    int id=QInputDialog::getInt(this,"Nuevo empleado","Id del empleado:");
    if (id<~0)
        return;

    QString nombre=QInputDialog::getText(this,"Nuevo empleado","Nombre del empleado:");
    if (nombre.size()==0)
        return;

    QString email=QInputDialog::getText(this,"Nuevo empleado","Email del empleado:");
    if (email.size()==0)
        return;

    Empleado e(id,nombre,email,"");

    admin.agregarEmpleados(e);

    mostrarEmpleados();

    QMessageBox::information(this,"Nuevo empleado","Empleado añadido");
}


void MainAppWindow::on_BtnEliminaEmpleado_clicked()
{
    int fila=QInputDialog::getInt(this,"Empleado a eliminar","Empleado nº:");
    if (fila<~0)
        return;

    admin.eliminarEmpleados(fila);

    mostrarEmpleados();

    QMessageBox::information(this,"Empleado a eliminar","Empleado eliminado");
}

