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

    void setId(int id);
    void setNombre(QString nombre);
    void setEmail(QString email);

    //bool iniciarSesion();
    //void on_login_clicked();
    //void cerrarSesion();

protected:
    int id;
    QString nombre;
    QString email;
    QString contraseña;

    QVector<Usuario> usuarios;

};

#endif // USUARIO_H
