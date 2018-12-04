#include "face.h"

void FaceImage::setContent(std::string text){
    content=text;
}

std::string FaceImage::getContent()const{
    return content;
}

void FaceTexte::setContent(std::string text){
    content=text;
}

std::string FaceTexte::getContent()const{
    return content;
}
