#ifndef MAINAPPWINDOW_H
#define MAINAPPWINDOW_H

#include <QMainWindow>
#include "santuario.h"
#include "recinto.h"
#include "animal.h"

namespace Ui {
class MainAppWindow;
}

class MainAppWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainAppWindow(QWidget *parent = nullptr);
    ~MainAppWindow();

private slots:
    //void asignarAnimal();
    QVector<Recinto> getRecintos();
    void mostrarRecintos();


private:
    Ui::MainAppWindow *ui;

    Santuario santuario;
    QVector<Recinto> recintos;
    QVector<Animal> animales;
};

#endif // MAINAPPWINDOW_H
