#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "gestionnairedialogue.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void update();

private slots:
    void on_ajoutPaquet_clicked();

    void on_reviser_clicked();

    void on_connexion_clicked();

    void on_ajoutCarte_clicked();

    void on_supprPaquet_clicked();


private:
    GestionnaireDialogue gestionnaire;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
