#ifndef GESTIONNAIREDIALOGUE
#define GESTIONNAIREDIALOGUE

#include <iostream>
#include <iomanip>
#include <sstream>
#include "client.h"

class GestionnaireDialogue {
private:
  Client **client;
  std::ostream currentLogin;
  bool isText( std::ostream &os);
  bool verifClient( std::ostream login);
public:
  bool authentifier( std::ostream &login);
  void deconnecter() const;
  void addPaquet( std::ostream &os) const;
  void addCarte( std::ostream &nomPaquet, std::ostream front, std::ostream back) const;
  void demandeInfoPaquet() const;
  void demandeInfoCarte() const;
};

#endif
