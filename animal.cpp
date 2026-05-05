#include "animal.h"
#include "alimentacion.h"
#include <QVector>
#include <QDebug>

Animal::Animal(int id, QString especie, QString nombre, int edad):id(id),especie(especie),nombre(nombre),edad(edad) {
    this->id=id;
    this->especie=especie;
    this->nombre=nombre;
    this->edad=edad;
}

int Animal::getId(){
    return id;
}

QString Animal::getEspecie(){
    return especie;
}

QString Animal::getNombre(){
    return nombre;
}

int Animal::getEdad(){
    return edad;
}

void Animal::setId(int id){
    this->id=id;
}

void Animal::setEspecie(QString especie){
    this->especie=especie;
}

void Animal::setNombre(QString nombre){
    this->nombre=nombre;
}

void Animal::setEdad(int edad){
    this->edad=edad;
}

void Animal::agregarAlimento(int id, QString comida){
    Alimentacion nuevo(id,comida);
    alimentaciones.append(nuevo);
}

void Animal::agregarAlimento(Alimentacion alimento){
    alimentaciones.append(alimento);
}

void Animal::eliminarAlimento(int fila){
    alimentaciones.remove(fila-1);
}

QVector<Alimentacion> Animal::getAlimentos(){
    return alimentaciones;
}
