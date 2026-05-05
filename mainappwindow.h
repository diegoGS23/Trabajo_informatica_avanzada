#ifndef MAINAPPWINDOW_H
#define MAINAPPWINDOW_H

#include <QMainWindow>
#include "santuario.h"
#include "recinto.h"
#include "animal.h"
#include "administrador.h"

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
    QVector<Recinto> getRecintos();
    void mostrarRecintos();

    QVector<Empleado> getEmpleados();
    void mostrarEmpleados();

    void on_verAnimales_clicked();

    void on_BtnAnadeRecinto_clicked();

    void on_BtnEliminaRecinto_clicked();

    void on_BtnModificaRecinto_clicked();

    void on_BtnAnadeEmpleado_clicked();

    void on_BtnEliminaEmpleado_clicked();

private:
    Ui::MainAppWindow *ui;

    Santuario santuario;
    Administrador admin;
    QVector<Recinto> recintos;
    QVector<Animal> animales;
};

#endif // MAINAPPWINDOW_H
