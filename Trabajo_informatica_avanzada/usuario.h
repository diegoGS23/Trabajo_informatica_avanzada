#ifndef USUARIO_H
#define USUARIO_H

#include <QVector>

class Usuario
{
public:
    Usuario(int id, QString nombre, QString email, QString contraseña);

    int getId();
    QString getNombre();
    QString getEmail();

    //bool iniciarSesion();
    //void on_login_clicked();
    //void cerrarSesion();

protected:
    int id;
    QString nombre;
    QString email;
    QString contraseña;

};

#endif // USUARIO_H
