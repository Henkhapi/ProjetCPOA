#ifndef PAQUET
#define PAQUET

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>
#include "carte.h"

/** @brief La classe Paquet permet la création d'une collection de cartes.
 **
 ** @version 1c
 **
 ** @author Pierre HENRY, Antoine PETITJEAN, Alban SPINDLER
 **/
class Paquet {
private:
    ///@brief nom du paquet
    ///
    /// @version 1b
  std::string nom;
  ///@brief Collection de cartes
  ///
  /// @version 1c
  std::vector<Carte*> cartes;
public:
  ///@brief Constructeur d'un paquet
  ///
  /// @param nomPaquet nom du paquet en question
  ///
  /// @version 1b
  Paquet(std::string nomPaquet) : nom(nomPaquet){}
  ///@brief Methode permettant l'ajout d'une carte dans le paquet
  ///
  ///@param front texte/image de la face avant (cf @ref carte)
  /// @param back texte/image de la face arrière (cf @ref carte)
  ///
  /// @version 1c
  void addCarte(std::string front, std::string back);
  ///@brief Methode retournant le nom du paquet
  ///
  /// @return nom du paquet
  ///
  /// @version 1b
  std::string getNom() const;
};

#endif
