//
// Created by Артур Лутфуллин on 27.11.2020.
//

#include "Zombie.hpp"

Zombie::Zombie() {
	this->_type = zombieType[std::rand() % 8];
	this->_name = zombieName[std::rand() % 4];
}

Zombie::~Zombie() {
	std::cout << _name << " (" << _type << ") " << " died a second time. Lol" << std::endl;
}

void Zombie::announce() {
	std::cout << _name << " (" << _type << ") " << "Braiiiiiiinnnssss..." << std::endl;
}