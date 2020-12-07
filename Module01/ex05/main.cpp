//
// Module01
//
// Created by Артур Лутфуллин on 27.11.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//

#include "Human.hpp"
int main() {
	Human bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
	return 0;
}