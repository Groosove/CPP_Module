//
// Module01
//
// Created by Артур Лутфуллин on 01.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

const std::string randomPhraseNinja[5] = {
		"utututu attack",
		"kutikutitu attack",
		"lalalalala attack",
		"heyyeyeyeyey attack",
		"Never gonna give you up attack"
};

class NinjaTrap: public ClapTrap  {
public:
	NinjaTrap();
	NinjaTrap(const std::string &name);
	NinjaTrap(const NinjaTrap &);
	NinjaTrap & operator=(const NinjaTrap &);
	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(uint amount);
	void		beRepaired(uint amount);
	void		ninjaShoebox(ClapTrap &);
	void		ninjaShoebox(FragTrap &);
	void		ninjaShoebox(NinjaTrap &);
	void		ninjaShoebox(ScavTrap &);
	~NinjaTrap();
};


#endif
