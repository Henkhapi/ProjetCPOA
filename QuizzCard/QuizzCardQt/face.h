#ifndef FACE
#define FACE

#include <iostream>
#include <iomanip>
#include <sstream>
#include <QImage>

class Face{
public :
  virtual ~Face(){}

};

class FaceImage : public Face{
protected:
  QImage content;
public:
  FaceImage(std::str content) : Face(), content(content){}
  virtual ~FaceImage(){}
  void setContent(std::str content) const {}
};

class FaceTexte : public Face{
private:
  std::string content;

public:
  FaceTexte(std::string content) : Face(), content(content) {}
  virtual ~FaceTexte(){}
  void setContent(std::string content){}

};

#endif
