#include "client.h"

Client::Client()
{
}
void Client::addPaquet(std::string nomPaquet) const{
    paquets.push_back(new Paquet(nomPaquet));
}
void Client::addCarte( std::string nomPaquet, std::string front, std::string back) const{
    for(i=0;i<paquets.size();i++){
        if(paquets[i].getNom()==nomPaquet){
            paquets[i].addCarte(front, back);
        }
    }
}
