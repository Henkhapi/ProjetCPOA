#ifndef GESTIONNAIREDIALOGUE
#define GESTIONNAIREDIALOGUE

#include <iostream>
#include <iomanip>
#include <sstream>
#include "client.h"
/** @brief La classe GestionnaireDialogue est la classe principale.
 ** Elle fait @ref à une liste de client
 **
 **Elle possède différentes méthodes permettant l'implémentation de clients
 ** de paquet et cartes
 **
 ** @version 1c
 **
 ** @author Pierre HENRY, Antoine PETITJEAN, Alban SPINDLER
 **/
class GestionnaireDialogue {
private:
    ///@brief Liste des @ref aux clients
    ///
    /// @version 1a
  std::vector<Client*> clients;
  ///@brief login du client courant
  ///
  /// @version 1a
  std::string currentLogin;
  ///@brief @ref sur la client Courant
  ///
  /// @version 1a
  Client *currentClient;
  ///@brief Methode retournant la @ref sur le Client
  ///
  /// @param login le login d'un client
  ///
  /// @return nullptr sur le login ne correspond à aucun client
  ///         le client en question sinon
  ///
  /// @version 1a
  Client *verifClient( std::string login);
public:
  ///@brief methode permettant de s'authentifier
  ///
  /// @param login login du client
  ///
  /// @version 1a
  void authentifier(std::string login);
  ///@brief methode de deconnection
  ///
  /// @version 1a
  void deconnecter();
  ///@brief retournant le clientCourant
  ///
  /// @return le client courant
  ///
  /// @version 1a
  Client *getCurrentClient();
  ///@brief Methode permettant d'ajouter un paquet danc le client courant
  ///
  /// @param s nom du paquet à ajouter
  ///
  /// @version 1b
  void addPaquet( std::string s) const;
  ///@brief Methode permettant l'ajout d'une carte dans un paquet
  ///
  /// @param nomPaquet nom du paquet désigné
  /// @param front texte/chemin de la face avant (cf @ref carte)
  /// @param back texte/chemin de la face arrière (cf @ref carte)
  ///
  /// @version 1c
  void addCarte( std::string nomPaquet, std::string front, std::string back) const;
};

#endif
