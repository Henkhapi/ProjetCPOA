#include "paquet.h"

std::string Paquet::getNom()const{
    return nom;
}
void Paquet::addCarte(std::string front, std::string back) {
    cartes.push_back(new Carte(front, back));
}
