#ifndef CLIENT
#define CLIENT

#include <iostream>
#include <iomanip>
#include <sstream>
#include "paquet.h"
#include <vector>

/** @brief La classe Client permet la création d'un client à partir
 **        de son login.
 **
 ** Elle contient une @ref à une liste de paquets
 ** et un attribut login.
 ** Ainsi que différentes méthodes d'ajouts d'objets et
 ** retour d'attributs.
 **
 ** @version 1c
 **
 ** @author Pierre HENRY, Antoine PETITJEAN, Alban SPINDLER
 **/
class Client {
protected:
    ///@brief paquet par defaut
    ///
    /// @version 1b
    Paquet* defaut;
    ///@brief Liste des paquets du client
    ///
    /// @version 1b
    std::vector<Paquet*> paquets;
    ///@brief login du Client
    ///
    /// @version 1a
    std::string loginClient;
public:
    ///@brief Constructeur d'un client
    ///
    /// @see loginClient : le login du client
    ///
    /// @version 1a
    Client(std::string login) :loginClient(login){defaut=new Paquet("défaut");paquets.push_back(defaut);}
    ///@brief méthode d'authentification du client
    ///
    /// @version 1a
    void authentifier (std::string login);
    ///@brief methode de restitution de la liste des paquets
    ///
    /// @version 1b
    std::vector<Paquet*> getPaquets();
    ///@brief methode d'ajout d'un paquet
    ///
    /// @version 1b
    void addPaquet( std::string paquet) ;
    ///@brief methode d'ajout de carte dans un paquet
    ///
    /// @version 1c
    void addCarte( std::string nomPaquet, std::string front, std::string back);
    ///@brief methode de restitution du login du client
    ///
    /// @version 1a
    std::string getLogin() const;
};

#endif
