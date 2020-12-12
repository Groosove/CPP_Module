//
// Module01
//
// Created by Артур Лутфуллин on 28.11.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
public:
	HumanB(std::string name);
	~HumanB();
	void attack() const;
	void setWeapon(Weapon &weapon);
private:
	std::string _name;
	Weapon *_weapon;
};


#endif
