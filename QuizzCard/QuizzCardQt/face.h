#ifndef FACE
#define FACE

#include <iostream>
#include <iomanip>
#include <sstream>
#include <QImage>

class Face{
public :
  virtual ~Face(){}
  //virtual void setContent(std::string txt) const=0;
  //virtual std::string getContent() const =0;

};

class FaceImage : public Face{
protected:
  std::string content;
  std::string text;
public:
  FaceImage(std::string content) : Face(), content(content){}
  virtual ~FaceImage(){}
  void setContent(std::string content);
  std::string getContent()const ;
};

class FaceTexte : public Face{
private:
  std::string content;

public:
  FaceTexte(std::string content) : Face(), content(content) {}
  virtual ~FaceTexte(){}
  void setContent(std::string content);
  std::string getContent()const ;
};

#endif
