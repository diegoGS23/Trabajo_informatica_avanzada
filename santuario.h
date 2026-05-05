#ifndef SANTUARIO_H
#define SANTUARIO_H

#include <QVector>
#include "recinto.h"
#include "empleado.h"
#include "usuario.h"
#include "administrador.h"

class Santuario
{
public:
    Santuario(QString nombre, QString ubicacion, QVector<Empleado> empleados);

    void agregarRecinto(int id, QString nombre, int capacidad, QVector<Animal> animales);
    void agregarRecinto(Recinto recinto);

    void eliminarRecinto(int fila);

    void modificarRecinto(int fila, QString nombre, int capacidad);

    QVector<Recinto> getRecintos();

private:
    QString nombre;
    QString ubicacion;

    QVector<Recinto> recintos;
    QVector<Empleado> empleados;
    QVector<Usuario> usuarios;
    QVector<Administrador> administradores;
};

#endif // SANTUARIO_H
