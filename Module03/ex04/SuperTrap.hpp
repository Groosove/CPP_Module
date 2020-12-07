//
// Module01
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap {
public:
	SuperTrap(const std::string &);
	SuperTrap(const SuperTrap &);
	SuperTrap & operator=(const  SuperTrap&);

	using FragTrap::rangedAttack;
	using NinjaTrap::meleeAttack;
	void		takeDamage(uint amount);
	void		beRepaired(uint amount);
	~SuperTrap();
};


#endif
