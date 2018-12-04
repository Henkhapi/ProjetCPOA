#ifndef CARTE
#define CARTE

#include <iostream>
#include <iomanip>
#include <sstream>
#include "face.h"

/** @brief La classe Carte permet la création d'un carte à partir
 **        de deux std::string permettant de créer les deux Faces de cette Carte
 **
 ** Elle contient des @ref à des Faces et des méthodes permettant
 ** d'instancier ses Faces et de les retournées
 **
 ** @version 1c
 **
 ** @author Pierre HENRY, Antoine PETITJEAN, Alban SPINDLER
 **/
class Carte {
private:
    /// @brief @ref sur la Face avant de la carte
    ///
    /// @version 1c
  Face *faceFront;

  /// @brief @ref sur la Face arrière de la carte
  ///
  /// @version 1c
  Face *faceBack;
public:
  ///@brief Constructeur de la carte avec deux String en entrée
  ///
  ///@param front texte ou chemin de l'image associée à la face avant (cf @ref Face)
  /// @param back texte ou chemin de l'image associée à la face arrière (cf @ref Face)
  ///
  /// @version 1c
  Carte(std::string front, std::string back);

  ///@brief méthode permettant de modifier les faces de la carte
  ///
  /// @param front texte ou chemin de l'image associée à la face avant (cf @ref Face)
  /// @param back texte ou chemin de l'image associée à la face arrière (cf @ref Face)
  ///
  /// @version 1c
  void setFaces(std::string front, std::string back);
  ///@brief methode retournant la @ref de la face avant
  ///
  /// @return la @ref sur la face avant
  ///
  /// @version 1c
  Face *getFaceFront() const;
  ///@brief methode retournant la @ref de la face arrière
  ///
  /// @return la @ref sur la face arrière
  ///
  /// @version 1c
  Face *getFaceBack() const;
  ///@brief methode permettant de distinguer une image d'un simple texte
  ///
  /// @param os texte à mettre dans la face
  ///
  /// @return True si os est un texte, False si c'est un chemin vers une image
  ///
  /// @version 1c
  bool isText( std::string os);
};

#endif
