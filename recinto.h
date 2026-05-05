#ifndef RECINTO_H
#define RECINTO_H

#include <QVector>
#include "animal.h"

class Recinto
{
public:
    Recinto(int id, QString nombre, int capacidad, QVector<Animal> animales);

    int getId();
    QString getNombre();
    int getCapacidad();

    void setNombre(QString nombre);
    void setCapacidad(int capacidad);

    void agregarAnimal(Animal animal);

    void eliminarAnimal(int fila);

    void modificarAnimal(int fila,QString nombre, QString especie, int edad);

    QVector<Animal> getAnimales();

private:
    int id;
    QString nombre;
    int capacidad;

    QVector<Animal> animales;
};

#endif // RECINTO_H
