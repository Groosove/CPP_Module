//
// Created by Артур Лутфуллин on 27.11.2020.
//

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
	_type = "Basiс zombie";
}


ZombieEvent::~ZombieEvent() {
	return;
}

void	ZombieEvent::setZombieType() {
	this->_type = zombieType[std::rand() % 8];
}

Zombie* ZombieEvent::newZombie(std::string name) {
	Zombie *zombie = new Zombie(name, _type);
	return zombie;
}