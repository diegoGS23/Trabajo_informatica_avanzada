#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <QVector>
#include "usuario.h"
#include "animal.h"

class Empleado:public Usuario
{
public:
    Empleado(int id, QString nombre, QString email,QString contraseña);

    int getId();
    QString getNombre();
    QString getEmail();

    void agregarAnimal(Animal animal);

private:
    int id;
    QString nombre;
    QString email;
    QString contraseña;
};

#endif // EMPLEADO_H
