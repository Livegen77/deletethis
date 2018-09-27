#include <iostream>

#include "deletethis.h"

Deletethis::Deletethis() {
    std::cout << "Constructor delete this" << std::endl;
}

Deletethis::~Deletethis() {
    std::cout << "Destructor delete this" << std::endl;
}

void Deletethis::deletethis() {
    delete this;
}

void Deletethis::dummycout() {
    std::cout << "hello poeple" << std::endl;
}
  

