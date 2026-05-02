#ifndef SANTUARIO_H
#define SANTUARIO_H

#include <QVector>
#include "recinto.h"

class Santuario
{
public:
    Santuario(QString nombre, QString ubicacion);

    void agregarRecinto(int id, QString nombre, int capacidad);
    void modificarRecinto(int id, QString nombre, int capacidad);

    QVector<Recinto> getRecintos();

private:
    QString nombre;
    QString ubicacion;

    QVector<Recinto> recintos;
};

#endif // SANTUARIO_H
