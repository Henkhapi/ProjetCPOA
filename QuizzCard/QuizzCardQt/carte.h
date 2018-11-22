#ifndef CARTE
#define CARTE

#include <iostream>
#include <iomanip>
#include <sstream>
#include "face.h"

class Carte {
private:
  Face faceFront;
  Face faceBack;
public:
  Carte(std::string front, std::string back){
    faceFront.setContent(front);
    faceBack.setContent(back);
  }
  void setFaces(std::string front, std::string back) const{
    faceFront.setContent(front);
    faceBack.setContent(back);
}
  std::string getFaceFront() const{
    return faceFront.getContent();
  }
  std::string getFaceBack() const{
    return faceBack.getContent();
  }
};

#endif
