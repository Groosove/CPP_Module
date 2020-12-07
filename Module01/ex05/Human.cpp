//
// Module01
//
// Created by Артур Лутфуллин on 27.11.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//

#include "Human.hpp"

Human::Human() {
	return;
}

Human::~Human() {
	return;
}

Brain const& Human::getBrain() const {
	return _brain;
}

std::string Human::identify() const {
	return _brain.identify();
}
