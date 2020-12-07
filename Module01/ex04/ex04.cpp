//
// Created by Артур Лутфуллин on 27.11.2020.
//

#include <iostream>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string *strPointer = &str;
	std::string &strReference = str;

	std::cout << *strPointer << std::endl;
	std::cout << strReference << std::endl;
	return 0;
}