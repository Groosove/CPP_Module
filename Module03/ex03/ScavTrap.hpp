//
// Module01
//
// Created by Артур Лутфуллин on 01.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

const std::string randomPhraseScav[5] = {
		"original attack",
		"super original attack",
		"super mega original attack",
		"super mega combo original attack",
		"hug attack"
};

class ScavTrap: public ClapTrap {
public:
	ScavTrap(const std::string&);
	ScavTrap(const ScavTrap &);
	ScavTrap & operator=(const ScavTrap &);
	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(uint amount);
	void		beRepaired(uint amount);
	void		challengeNewcomer(std::string const & target);
	~ScavTrap();

};

#endif
