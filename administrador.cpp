#include "administrador.h"

Administrador::Administrador(int id, QString nombre):Usuario(id, nombre,email,contraseña) {

}

void Administrador::agregarEmpleados(Empleado empleado){
    empleados.append(empleado);
}

void Administrador::eliminarEmpleados(int fila){
    empleados.remove(fila-1);
}

QVector<Empleado> Administrador::getEmpleados(){
    return empleados;
}


