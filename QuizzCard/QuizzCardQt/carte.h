#ifndef CARTE
#define CARTE

#include <iostream>
#include <iomanip>
#include <sstream>
#include "face.h"

class Carte {
private:
  Face *faceFront;
  Face *faceBack;
public:
  Carte(std::string front, std::string back);
  void setFaces(std::string front, std::string back);
  Face *getFaceFront() const;
  Face *getFaceBack() const;
  bool isText( std::string os);
};

#endif
