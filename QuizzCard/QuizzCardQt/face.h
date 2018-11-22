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
  FaceImage(QImage img) : Face(), content(img){}
  virtual ~FaceImage(){}
  void setContent(QImage img) const {}
};

class FaceTexte : public Face{
private:
  std::string content;

public:
  FaceTexte(std::string txt) : Face(), content(txt) {}
  virtual ~FaceTexte(){}
  void setContent(std::string txt){}

};

#endif
