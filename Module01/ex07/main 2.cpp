//
// Module01
//
// Created by Артур Лутфуллин on 28.11.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//

#include "Replace.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Wrong arguments. Please try again:)" << std::endl;
		return 1;
	}
	std::string filename = av[1];
	std::string search = av[2];
	std::string str = av[3];
	Replace replace(filename, search, str);
	switch (replace.checkArguments()) {
		case 1: std::cerr << "str1 is empty"; return 1;
		case 2: std::cerr << "str2 is empty"; return 1;
		default: break;
	}
	replace.writeStr();
	return 0;
}
