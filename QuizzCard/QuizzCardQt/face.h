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
<<<<<<< HEAD
  FaceImage(std::str content) : Face(), content(content){}
  virtual ~FaceImage(){}
  void setContent(std::str content) const {}
=======
  FaceImage(std::string txt) : Face(), content(QString::fromStdString(txt)),text(txt){}
  virtual ~FaceImage();
  void setContent(std::string txt) const ;
  std::string getContent()const ;
>>>>>>> ef5d6aeabd312d7e11c36c474ddf4d90f5be5ad3
};

class FaceTexte : public Face{
private:
  std::string content;

public:
<<<<<<< HEAD
  FaceTexte(std::string content) : Face(), content(content) {}
  virtual ~FaceTexte(){}
  void setContent(std::string content){}
=======
  FaceTexte(std::string txt) : Face(), content(txt) {}
  virtual ~FaceTexte();
  void setContent(std::string txt)const ;
  std::string getContent()const ;
>>>>>>> ef5d6aeabd312d7e11c36c474ddf4d90f5be5ad3

};

#endif
