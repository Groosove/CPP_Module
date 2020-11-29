//
// Created by Артур Лутфуллин on 27.11.2020.
//

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) {
	this->_count = N;
	this->_zombie = new Zombie[_count];
}

ZombieHorde::~ZombieHorde() {
	delete [] _zombie;
}

void ZombieHorde::announce() {
	for (int i = 0; i < _count; ++i)
		_zombie[i].announce();
}