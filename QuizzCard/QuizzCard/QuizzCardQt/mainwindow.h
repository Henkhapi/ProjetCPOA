#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "gestionnairedialogue.h"

///@brief Nom de la classe qui nous allons construire
///
/// @version 1a
namespace Ui {
class MainWindow;
}
/** @brief Classe permettant de créer la fenêtre graphique de notre projet
 **
 **Elle possède différentes méthodes et objets pour le bon fonctionnement de l'application
 **
 ** @version 1c
 **
 ** @author Pierre HENRY, Antoine PETITJEAN, Alban SPINDLER
 **/
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    ///@brief Constructeur de la fenetre
    ///
    /// @version 1a
    explicit MainWindow(QWidget *parent = nullptr);
    ///@brief destructeur de la fenetre
    ///
    /// @version 1a
    ~MainWindow();
    ///@brief Methode permettant la mise a jour de la liste des paquets
    ///
    /// @version 1b
    void update();

private slots:
    ///@brief Methode d'ajout de paquet après clic sur un bouton
    ///
    /// @version 1b
    void on_ajoutPaquet_clicked();
    ///@brief Methode permettant de réviser un paquet
    ///
    /// @version 1a
    void on_reviser_clicked();
///@brief Methode de connexion lors de l'appui sur le bouton
///
/// @version 1a
    void on_connexion_clicked();
///@brief Methode d'ajout de carte lors de l'appui du bouton
///
/// @version 1c
    void on_ajoutCarte_clicked();
///@brief Methode de suppression de paquet lors de l'appui sur le bouton
///
/// @version 1c
    void on_supprPaquet_clicked();

private:
    ///@brief gestionnaire de dialogue qui nous sera utile
    ///
    /// @version 1a
    GestionnaireDialogue gestionnaire;

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
