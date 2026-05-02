#ifndef RECINTO_H
#define RECINTO_H

#include <QVector>
#include "animal.h"

class Recinto
{
public:
    Recinto(int id, QString nombre, int capacidad);

    int getId();
    QString getNombre();
    int getCapacidad();

    void setNombre(QString nombre);
    void setCapacidad(int capacidad);

    void asignarAnimal();

private:
    int id;
    QString nombre;
    int capacidad;

    QVector<Animal> animales;
};

#endif // RECINTO_H
