#ifndef ALIMENTACIONESWINDOW_H
#define ALIMENTACIONESWINDOW_H

#include <QMainWindow>
#include "alimentacion.h"
#include "animal.h"

namespace Ui {
class alimentacionesWindow;
}

class alimentacionesWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit alimentacionesWindow(Animal animal,QWidget *parent = nullptr);
    ~alimentacionesWindow();

private slots:
   QVector<Alimentacion> getAlimentos();
    void mostrarAlimentos();

   void on_BtnAnadeAlimento_clicked();

    void on_BtnEliminaAlimento_clicked();

private:
    Ui::alimentacionesWindow *ui;

    Animal animalActual;
    QVector<Alimentacion> alimentaciones;
};

#endif // ALIMENTACIONESWINDOW_H
