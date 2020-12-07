//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() { std::cout << "Tactical Marine ready for battle!" << std::endl; }

TacticalMarine::~TacticalMarine() { std::cout << "Aaargh..." << std::endl; }

TacticalMarine & TacticalMarine::operator=(const TacticalMarine &tacticalMarine) { (void)tacticalMarine; return *this; }

TacticalMarine::TacticalMarine(const TacticalMarine &tacticalMarine) { *this = tacticalMarine; }

ISpaceMarine * TacticalMarine::clone() const { return new TacticalMarine(*this); }

void TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with a chainsword *" << std::endl;
}
