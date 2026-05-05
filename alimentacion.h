#ifndef ALIMENTACION_H
#define ALIMENTACION_H

#include <QVector>

class Alimentacion
{
public:
    Alimentacion(int id, QString comida);

    int getId();
    QString getComida();

    void setId(int id);
    void setComida(QString comida);

private:
    int id;
    QString comida;
};

#endif // ALIMENTACION_H
