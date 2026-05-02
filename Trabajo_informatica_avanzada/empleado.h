#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <QVector>
#include "usuario.h"

class Empleado:public Usuario
{
public:
    Empleado(int id, QString nombre);

    int getId();
    QString getNombre();

    void registrarAnimal();

private:
    int id;
    QString nombre;
};

#endif // EMPLEADO_H
