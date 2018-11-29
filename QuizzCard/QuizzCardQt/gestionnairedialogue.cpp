#include "gestionnairedialogue.h"

void GestionnaireDialogue::authentifier(std::string login){
    if(!verifClient(login)){
        client = new Client(login);
    }
    currentLogin = client->getLogin();
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
