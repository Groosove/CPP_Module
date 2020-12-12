//
// Created by Артур Лутфуллин on 27.11.2020.
//

#include <iostream>

void	MemoryLeak() {
	std::string*	panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}

