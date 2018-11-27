#ifndef GESTIONNAIREDIALOGUE
#define GESTIONNAIREDIALOGUE

#include <iostream>
#include <iomanip>
#include <sstream>
#include "client.h"

class GestionnaireDialogue {
private:
  Client *client;
  std::ostream currentLogin;
  bool verifClient( std::string login);
public:
  bool authentifier( std::string login);
  void deconnecter() const;
  void addPaquet( std::string s) const;
  void addCarte( std::string nomPaquet, std::string front, std::string back) const;
  void demandeInfoPaquet() const;
  void demandeInfoCarte() const;
};

#endif
