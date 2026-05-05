#include "alimentacion.h"

Alimentacion::Alimentacion(int id, QString comida):id(id), comida(comida) {
    this->id=id;
    this->comida=comida;
}

int Alimentacion::getId(){
    return id;
}

QString Alimentacion::getComida(){
    return comida;
}

void Alimentacion::setId(int id){
    this->id=id;
}

void Alimentacion::setComida(QString comida){
    this->comida=comida;
}



