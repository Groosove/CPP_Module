//
// Created by Артур Лутфуллин on 27.11.2020.
//

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) {
	this->_type = type;
	this->_name = name;
}

Zombie::~Zombie() {
	std::cout << _name << " died a second time. Lol" << std::endl;
}

void Zombie::announce() {
	std::cout << _name << " (" << _type << ") " << "Braiiiiiiinnnssss..." << std::endl;
}