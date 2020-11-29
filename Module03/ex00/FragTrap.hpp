//
// Module01
//
// Created by Артур Лутфуллин on 29.11.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

class FragTrap {
public:
	FragTrap(const std::string&);
	FragTrap(const FragTrap &);
	FragTrap & operator=(const FragTrap &);
	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(uint amount);
	void		beRepaired(uint amount);
	void		vaulthunerDotExe(std::string const & target);
	std::string	getName() const;
	uint		getMeleeAttack() const;
	uint		getRangedAttack() const;
	~FragTrap();

private:
	uint		_maxHitPoint;
	uint 		_currentHitPoint;
	uint		_energyPoint;
	uint		_maxEnergyPoint;
	uint		_level;
	std::string	_name;
	uint		_meleeAttackDamage;
	uint		_rangedAtackDamage;
	uint		_armorDamageReduction;

};

#endif
