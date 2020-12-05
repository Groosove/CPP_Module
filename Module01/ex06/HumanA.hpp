//
// Module01
//
// Created by Артур Лутфуллин on 28.11.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
class HumanA {
public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void attack() const;

private:
	std::string _name;
	Weapon& _weapon;
};


#endif
