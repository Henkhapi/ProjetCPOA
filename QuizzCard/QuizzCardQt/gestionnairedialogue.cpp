#include "gestionnairedialogue.h"

void GestionnaireDialogue::authentifier(std::string login){
    if(!verifClient(login)){
        clients.push_back(new Client(login));
    }
    currentLogin = login;
}

void GestionnaireDialogue::deconnecter(){
    currentLogin = "";
}

void GestionnaireDialogue::addPaquet(std::string s) const{
    client->addPaquet(s);
}

void GestionnaireDialogue::addCarte(std::string nomPaquet, std::string front, std::string back) const{
    client->addCarte(nomPaquet,front,back);
}
bool GestionnaireDialogue::verifClient(std::string login){
    bool res = false;
    int i;
    for(i=0;i<clients.size();i++){
        if(clients[i].getLogin()==login){
            res = true;
        }
    }
    return res;

}
