#ifndef GESTIONNAIREDIALOGUE
#define GESTIONNAIREDIALOGUE

#include <iostream>
#include <iomanip>
#include <sstream>
#include "client.h"

class GestionnaireDialogue {
private:
  Client *client;
  std::string currentLogin;
  bool verifClient( std::string login);
public:
  void authentifier(std::string login);
  void deconnecter() const;
  void addPaquet( std::string s) const;
  void addCarte( std::string nomPaquet, std::string front, std::string back) const;
  void demandeInfoPaquet() const;
  void demandeInfoCarte() const;
};

#endif
