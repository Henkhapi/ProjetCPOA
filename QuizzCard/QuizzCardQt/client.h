#ifndef CLIENT
#define CLIENT

#include <iostream>
#include <iomanip>
#include <sstream>
#include "paquet.h"
#include <vector>

class Client {
protected:
    std::vector<Paquet*> paquets;
    std::string loginClient;
public:
    Client(std::string login) :loginClient(login){}
    void authentifier (std::string login);
    void addPaquet( std::string paquet) ;
    void addCarte( std::string nomPaquet, std::string front, std::string back);
    std::string getLogin() const;
};

#endif