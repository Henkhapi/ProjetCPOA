#ifndef FACE
#define FACE

#include <iostream>
#include <iomanip>
#include <sstream>

class Face{
};

class FaceImage : public Face{
  void setContent() {}
};

class FaceTexte : public Face{
private:
  std::string content;
  
public:
  void setContent(std::string content){}
  
};