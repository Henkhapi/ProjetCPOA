#include "gestionnairedialogue.h"

void GestionnaireDialogue::authentifier(std::string login){
    if(!verifClient(login)){
        client = new Client(login);
    }
    currentLogin = client->getLogin();
}
