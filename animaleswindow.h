#ifndef ANIMALESWINDOW_H
#define ANIMALESWINDOW_H

#include <QMainWindow>
#include "recinto.h"
#include "animal.h"

namespace Ui {
class animalesWindow;
}

class animalesWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit animalesWindow(Recinto recinto,QWidget *parent = nullptr);
    ~animalesWindow();

private slots:
    QVector<Animal> getAnimales();
    void mostrarAnimales();


    void on_verAlimentos_clicked();

    void on_BtnAnadeAnimal_clicked();

    void on_BtnEliminaAnimal_clicked();

    void on_BtnModificaAnimal_clicked();

private:
    Ui::animalesWindow *ui;

    Recinto recintoActual;
    QVector<Animal> animales;
};

#endif // ANIMALESWINDOW_H

