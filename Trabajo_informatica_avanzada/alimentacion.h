#ifndef ALIMENTACION_H
#define ALIMENTACION_H

#include <QVector>

class Alimentacion
{
public:
    Alimentacion(int id, QString tipoComida);

    void registrarComida();

private:
    int id;
    QString tipoComida;
};

#endif // ALIMENTACION_H
