#include "face.h"

Face::Face()
{
}

void FaceImage::setContent(std::string content) const{
    content=content;
}

std::string FaceImage::getContent()const{
    return content;
}

void FaceTexte::setContent(std::string content) const{
    content=content;
}

std::string FaceText::getContent()const{
    return content;
}
