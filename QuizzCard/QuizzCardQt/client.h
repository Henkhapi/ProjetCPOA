#ifndef CLIENT
#define CLIENT

#include <iostream>
#include <iomanip>
#include <sstream>
#include "paquet.h"

class Client {
private:
    Paquet **paquet;
    std::ostream login;
public:
    bool authentifier( std::ostream &login);
    void addPaquet( std::ostream &paquet) const;
    void addCarte( std::ostream &nomPaquet, std::ostream front, std::ostream back) const;
};

#endif
