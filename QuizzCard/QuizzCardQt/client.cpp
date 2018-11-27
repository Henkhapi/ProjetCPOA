#include "client.h"

void Client::addPaquet(std::string nomPaquet) {
    paquets.push_back(new Paquet(nomPaquet));
}
void Client::addCarte( std::string nomPaquet, std::string front, std::string back){
    unsigned int i;
    for(i=0;i<=paquets.size();i++){
        if(paquets[i]->getNom()==nomPaquet){
            paquets[i]->addCarte(front, back);
        }
    }
}
std::string Client::getLogin() const{
    return loginClient;
}
void Client::authentifier (std::string login) {
    loginClient=login;
}
