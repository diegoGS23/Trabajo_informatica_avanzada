#ifndef ANIMAL_H
#define ANIMAL_H

#include <QString>
#include "alimentacion.h"

class Animal
{
public:
    Animal(int id, QString especie, QString nombre, int edad);

    void actualizarEstado();

private:
    int id;
    QString especie;
    QString nombre;
    int edad;

    QVector<Alimentacion> alimentaciones;
};

#endif // ANIMAL_H
