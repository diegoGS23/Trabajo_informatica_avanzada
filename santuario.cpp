#include "santuario.h"
#include <QVector>
#include <QDebug>

Santuario::Santuario(QString nombre, QString ubicacion, QVector<Empleado> empleados):nombre(nombre),ubicacion(ubicacion),empleados(empleados) {

}

void Santuario::agregarRecinto(int id, QString nombre, int capacidad, QVector<Animal> animales){
    Recinto nuevo(id,nombre,capacidad,animales);
    recintos.append(nuevo);
}

void Santuario::agregarRecinto(Recinto recinto){
    recintos.append(recinto);
}

void Santuario::eliminarRecinto(int fila){
    recintos.remove(fila-1);
}

void Santuario::modificarRecinto(int fila, QString nombre, int capacidad){
    recintos[fila-1].setNombre(nombre);
    recintos[fila-1].setCapacidad(capacidad);
}

QVector<Recinto> Santuario::getRecintos(){
    return recintos;
}
