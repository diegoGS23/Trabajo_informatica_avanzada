#include "santuario.h"
#include <QVector>
#include <QDebug>

Santuario::Santuario(QString nombre, QString ubicacion):nombre(nombre),ubicacion(ubicacion) {

}

void Santuario::agregarRecinto(int id, QString nombre, int capacidad){
    Recinto nuevo(id,nombre,capacidad);
    recintos.append(nuevo);
}

//void modificarRecinto(int id, QString nombre, int capacidad){
    //recintos[id].setNombre(nombre);
//}

QVector<Recinto> Santuario::getRecintos(){
    return recintos;
}
