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
public:
  Paquet(std::string nomPaquet){
    nom(nomPaquet);
    std::vector<Carte> cartes;
  }
  void addCarte(std::string front, std::string back) const{
    cartes.push_back(new Carte(front, back));
}
};

#endif
