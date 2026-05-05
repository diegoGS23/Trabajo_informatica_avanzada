#include "recinto.h"
#include "animal.h"
#include <QVector>
#include <QDebug>

Recinto::Recinto(int id, QString nombre, int capacidad, QVector<Animal> animales):id(id), nombre(nombre), capacidad(capacidad),animales(animales){
    this->id=id;
    this->nombre=nombre;
    this->capacidad=capacidad;
    this->animales=animales;

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

void Recinto::agregarAnimal(Animal animal){
    if(capacidad>animales.size())
        this->animales.append(animal);
}

void Recinto::eliminarAnimal(int fila){
    animales.remove(fila-1);
}

void Recinto::modificarAnimal(int fila, QString nombre, QString especie, int edad){
    animales[fila-1].setNombre(nombre);
    animales[fila-1].setEspecie(especie);
    animales[fila-1].setEdad(edad);
}

QVector<Animal> Recinto::getAnimales(){
    return animales;
}

