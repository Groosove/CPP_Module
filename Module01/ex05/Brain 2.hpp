//
// Module01
//
// Created by Артур Лутфуллин on 27.11.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <sstream>

class Brain {
public:
	Brain();
	~Brain();
	std::string identify() const;

private:
	int _brainSerialNumber;
};


#endif
