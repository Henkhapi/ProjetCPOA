#ifndef CARTE
#define CARTE

#include <iostream>
#include <iomanip>
#include <sstream>
#include "Face.hpp"

class Carte {
private:
  Face *front
  Face *back
public:
  void setFaces(std::ostream front, std::ostream back) const;
};

#endif
