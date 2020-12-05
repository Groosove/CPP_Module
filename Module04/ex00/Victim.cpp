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

std::ostream& operator<<(std::ostream &out, const Victim &victim) {
	std::cout << "I'm " << victim.getName() << " and I like otters!" << std::endl;
	return out;
}

void Victim::getPolymorphed() const {
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}
