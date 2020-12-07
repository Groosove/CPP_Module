//
// Module01
//
// Created by Артур Лутфуллин on 27.11.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human {
public:
	Human();
	~Human();
	std::string identify() const;
	const Brain& getBrain() const;

private:
	Brain _brain;
};


#endif
