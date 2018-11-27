#ifndef PAQUET
#define PAQUET

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>
#include "carte.h"

class Paquet {
private:
  std::string nom;
  std::vector<Carte*> cartes;
public:
  Paquet(std::string nomPaquet) : nom(nomPaquet){}
  void addCarte(std::string front, std::string back);
  std::string getNom() const;
};

#endif
