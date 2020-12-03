//
// Module01
//
// Created by Артур Лутфуллин on 29.11.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

const std::string randomPhraseFrag[5] = {
		"hello kitty boom attack",
		"rain of tetris attack",
		"quicksand jelly attack",
		"walking trees attack",
		"dancing beans attack"
};

class FragTrap {
public:
	FragTrap(const std::string&);
	FragTrap(const FragTrap &);
	FragTrap & operator=(const FragTrap &);
	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(uint amount);
	void		beRepaired(uint amount);
	void		vaulthunterDotExe(std::string const & target);
	std::string	getName() const;
	uint		getMeleeAttackDamage() const;
	uint		getRangeAttackDamage() const;
	uint		getRandomAttack() const;
	~FragTrap();

private:
	uint		_maxHitPoint;
	int 		_currentHitPoint;
	int			_energyPoint;
	uint		_maxEnergyPoint;
	uint		_level;
	std::string	_name;
	uint		_meleeAttackDamage;
	uint		_rangedAttackDamage;
	uint		_armorDamageReduction;

};

#endif
