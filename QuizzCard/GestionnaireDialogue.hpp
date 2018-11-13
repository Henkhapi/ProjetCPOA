#ifndef GESTIONNAIREDIALOGUE
#define GESTIONNAIREDIALOGUE

#include <iostream>
#include <iomanip>
#include <sstream>

class GestionnaireDialogue {
private:
  Client **client
  bool isText( std::ostream &os);
  bool verifClient( std::ostream login);
public:
  void authentifier( std::ostream &os) const;
  void addPaquet( std::ostream &os) const;
  void addCarte( std::ostream &nomPaquet, std::ostream front, std::ostream back) const;
  void demandeInfoPaquet() const;
  void demandeInfoCarte() const;
};

#endif
