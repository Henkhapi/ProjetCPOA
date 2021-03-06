#include "gestionnairedialogue.h"

void GestionnaireDialogue::authentifier(std::string login){
    currentClient = verifClient(login);
    if(currentClient == nullptr){
        currentClient = new Client(login);
        clients.push_back(currentClient);
    }
    currentLogin = login;
}

void GestionnaireDialogue::deconnecter(){
    currentLogin = "";
    currentClient = nullptr;
}

Client *GestionnaireDialogue::getCurrentClient(){
    return currentClient;
}

void GestionnaireDialogue::addPaquet(std::string s) const{
    currentClient->addPaquet(s);
}

void GestionnaireDialogue::addCarte(std::string nomPaquet, std::string front, std::string back) const{
    currentClient->addCarte(nomPaquet,front,back);
}
Client *GestionnaireDialogue::verifClient(std::string login){
    unsigned int i;
    for(i=0;i<clients.size();i++){
        if(clients[i]->getLogin()==login){
            return clients[i];
        }
    }
    return nullptr;

}
