#include "carte.h"

Carte::Carte(std::string front, std::string back){
    setFaces(front,back);
}


void Carte::setFaces(std::string front, std::string back){
    if(isText(front)){
        faceFront = new FaceTexte(front);
    }else{
        faceFront = new FaceImage(front);
    }

    if(isText(back)){
        faceBack = new FaceTexte(back);
    }else{
        faceBack = new FaceImage(back);
    }
}

Face *Carte::getFaceFront() const{
    return faceFront;
}


Face *Carte::getFaceBack() const{
    return faceBack;
}


bool Carte::isText(std::string os){
    bool res = true;
    std::string tmp = os;
    int pos;
    pos=tmp.size()-5;
    if(pos<0){
        pos=0;
    }
    tmp.substr(pos,4);
    if(tmp.compare(".png")==0){
        res= false;
    }
    return res;
}

