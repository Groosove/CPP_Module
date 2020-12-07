//
// Created by Артур Лутфуллин on 27.11.2020.
//

#include "Pony.hpp"

Pony::Pony(std::string name) {
	this->_name = name;
	std::cout << "Hey my name is " << _name << std::endl;
}

Pony::~Pony() {
	std::cout << "Bye-bye! Say Hi to your mom:)" << std::endl;
}

void Pony::ponyOnTheHeap() const {
	std::cout << "I'm Pony on the Heap. Be-be-be" << std::endl;
}

void Pony::ponyOnTheStack() const {
	std::cout << "I'm Pony on the Stack. Be-be-be" << std::endl;
}