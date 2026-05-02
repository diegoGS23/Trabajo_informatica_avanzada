#include "empleado.h"

Empleado::Empleado(int id, QString nombre):Usuario(id, nombre, email, contraseña) {
    this->id=id;
    this->nombre=nombre;
}

int Empleado::getId(){
    return id;
}

QString Empleado::getNombre(){
    return nombre;
}

void Empleado::registrarAnimal(){

}
