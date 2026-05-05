#ifndef ANIMAL_H
#define ANIMAL_H

#include <QString>
#include "alimentacion.h"

class Animal
{
public:
    Animal(int id, QString especie, QString nombre, int edad);

    int getId();
    QString getEspecie();
    QString getNombre();
    int getEdad();

    void setId(int id);
    void setNombre(QString nombre);
    void setEspecie(QString especie);
    void setEdad(int edad);

    void agregarAlimento(int id, QString comida);
    void agregarAlimento(Alimentacion alimento);

    void eliminarAlimento(int fila);

    QVector<Alimentacion> getAlimentos();

private:
    int id;
    QString especie;
    QString nombre;
    int edad;

    QVector<Alimentacion> alimentaciones;
};

#endif // ANIMAL_H
