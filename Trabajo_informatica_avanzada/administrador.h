#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include <QVector>
#include "usuario.h"

class Administrador:public Usuario
{
public:
    Administrador(int id, QString nombre);

    void gestionarEmpleados();
    void gestionarAnimales();

private:
    int id;
    QString nombre;
};

#endif // ADMINISTRADOR_H
