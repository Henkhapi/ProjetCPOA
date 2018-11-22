#ifndef PAQUET
#define PAQUET

#include <iostream>
#include <iomanip>
#include <sstream>
#include "Carte.hpp"

class Paquet {
private:
  std::ostream nom;
  
public:
  void addCarte(std::ostream front, std::ostream back) const;
};

#endif