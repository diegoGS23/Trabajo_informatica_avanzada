#include "recinto.h"
#include <QVector>
#include <QDebug>

Recinto::Recinto(int id, QString nombre, int capacidad):id(id), nombre(nombre), capacidad(capacidad){
    this->id=id;
    this->nombre=nombre;
    this->capacidad=capacidad;

}

int Recinto::getId(){
    return id;
}

QString Recinto::getNombre(){
    return nombre;
}

int Recinto::getCapacidad(){
    return capacidad;
}

void Recinto::setNombre(QString nombre){
    this->nombre=nombre;
}

void Recinto::setCapacidad(int capacidad){
    this->capacidad=capacidad;
}

void Recinto::asignarAnimal() {

    }

