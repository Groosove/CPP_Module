//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#include "Victim.hpp"

Victim::Victim() : _name("none") {}

Victim::Victim(const Victim &victim) {
	*this = victim;
}

Victim::Victim(const std::string &name) : _name(name){
	std::cout << "Soma random victim called " << _name << " just appeared!" << std::endl;
}

std::string Victim::getName() const { return _name; }

Victim::~Victim() {
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}