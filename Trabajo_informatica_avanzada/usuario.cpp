#include "usuario.h"

Usuario::Usuario(int id, QString nombre, QString email, QString contraseña):id(id), nombre(nombre), email(email), contraseña(contraseña) {
    this->id=id;
    this->nombre=nombre;
    this->email=email;
    this->contraseña=contraseña;

}

int Usuario::getId(){
    return id;
}

QString Usuario::getNombre(){
    return nombre;
}

QString Usuario::getEmail(){
    return email;
}

//void Usuario::on_login_clicked(QString email, QString contraseña){

//}
