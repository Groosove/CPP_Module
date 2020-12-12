//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() { std::cout << "* teleports from space *" << std::endl; }

AssaultTerminator::~AssaultTerminator() { std::cout << "I’ll be back..." << std::endl; }

ISpaceMarine * AssaultTerminator::clone() const { return new AssaultTerminator(*this); }

AssaultTerminator::AssaultTerminator(const AssaultTerminator &assaultTerminator) { *this = assaultTerminator; }

AssaultTerminator & AssaultTerminator::operator=(const AssaultTerminator &assaultTerminator) {
	(void)assaultTerminator;
	return *this;
}

void AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const {
	std::cout << "* attacks with chainfists *" << std::endl;
}