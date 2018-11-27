#ifndef FACE
#define FACE

#include <iostream>
#include <iomanip>
#include <sstream>
#include <QImage>

class Face{
public :
  virtual ~Face(){}
  virtual void setContent(std::string txt) const=0;
  virtual std::string getContent() const =0;

};

class FaceImage : public Face{
protected:
  QImage content;
  std::string text;
public:
  FaceImage(std::string txt) : Face(), content(QString::fromStdString(txt)),text(txt){}
  virtual ~FaceImage();
  void setContent(std::string txt) const ;
  std::string getContent()const ;
};

class FaceTexte : public Face{
private:
  std::string content;

public:
  FaceTexte(std::string txt) : Face(), content(txt) {}
  virtual ~FaceTexte();
  void setContent(std::string txt)const ;
  std::string getContent()const ;

};

#endif
