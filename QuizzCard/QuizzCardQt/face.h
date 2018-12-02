#ifndef FACE
#define FACE

#include <iostream>
#include <iomanip>
#include <sstream>
#include <QImage>
/** @brief La classe Face permet la création d'un Face.
 **
 ** @version 1c
 **
 ** @author Pierre HENRY, Antoine PETITJEAN, Alban SPINDLER
 **/
class Face{
public :
    ///@brief destructeur de Face
    ///
    /// @version 1c
  virtual ~Face(){}
  //virtual void setContent(std::string txt) const=0;
  //virtual std::string getContent() const =0;

};
/** @brief La classe FaceImage permet la création d'un Face.
 ** Elle hérite de Face
 **
 ** @version 1c
 **
 ** @author Pierre HENRY, Antoine PETITJEAN, Alban SPINDLER
 **/
class FaceImage : public Face{
protected:
    ///@brief chemin de l'image de la face
    ///
    /// @version 1c
  std::string content;

public:
  ///@brief constrcuteur de la FaceImage
  ///
  /// @param content chemin de l'image
  ///
  /// @version 1c
  FaceImage(std::string content) : Face(), content(content){}
  ///@brief destructeur de la Face
  ///
  /// @version 1c
  virtual ~FaceImage(){}
  ///@brief Méthode de mise a jour du contenu de la Face Image
  ///
  /// @param content chemin de l'image
  ///
  /// @version 1c
  void setContent(std::string content);
  ///@brief Methode qui retourne le chemin de l'image
  ///
  /// @return Chemin de l'image
  ///
  /// @version 1c
  std::string getContent()const ;
};
/** @brief La classe FaceTexte permet la création d'un Face.
 ** Elle hérite de Face
 **
 ** @version 1c
 **
 ** @author Pierre HENRY, Antoine PETITJEAN, Alban SPINDLER
 **/
class FaceTexte : public Face{
private:
    ///@brief texte de la face
    ///
    /// @version 1c
  std::string content;

public:
  ///@brief constrcuteur de la FaceTexte
  ///
  /// @param content texte de la face
  ///
  /// @version 1c
  FaceTexte(std::string content) : Face(), content(content) {}
  ///@brief destructeur de la Face
  ///
  /// @version 1c
  virtual ~FaceTexte(){}
  ///@brief Méthode de mise a jour du contenu de la Face Texte
  ///
  /// @param content texte de la face
  ///
  /// @version 1c
  void setContent(std::string content);
  ///@brief Methode qui retourne le texte
  ///
  /// @return texte de la face
  ///
  /// @version 1c
  std::string getContent()const ;
};

#endif
