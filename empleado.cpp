#include "empleado.h"

Empleado::Empleado(int id, QString nombre, QString email, QString contraseña):Usuario(id, nombre, email, contraseña) {
    this->id=id;
    this->nombre=nombre;
    this->email=email;
}

int Empleado::getId(){
    return id;
}

QString Empleado::getNombre(){
    return nombre;
}

QString Empleado::getEmail(){
    return email;
}

//void Empleado::agregarAnimal(Animal animal){
    //if(capacidad>animales.size())
      //  this->animales.append(animal);
//}
