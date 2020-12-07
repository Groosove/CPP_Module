//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#include "Peon.hpp"

Peon::Peon(): Victim("none") {}

Peon::Peon(const std::string &name): Victim(name){
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
    std::cout << "Bleuark..." << std::endl;
}

Peon &Peon::operator=(const Peon &peon) {
    this->_name = peon.getName();
    return *this;
}

Peon::Peon(const Peon &peon): Victim(peon) {
    *this = peon;
    std::cout << "Zog zog." << std::endl;
}

void Peon::getPolymorphed() const {
    std::cout << _name << " has been turned into a pink pony!" << std::endl;
}