#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include <QVector>
#include "usuario.h"
#include "empleado.h"

class Administrador:public Usuario
{
public:
    Administrador(int id, QString nombre);

    void agregarEmpleados(Empleado empleado);

    void eliminarEmpleados(int fila);

    QVector<Empleado> getEmpleados();

private:
    int id;
    QString nombre;

    QVector<Empleado> empleados;
};

#endif // ADMINISTRADOR_H
