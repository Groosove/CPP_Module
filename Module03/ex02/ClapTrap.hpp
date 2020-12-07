//
// Module01
//
// Created by Артур Лутфуллин on 01.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#ifndef MODULE01_CLAPTRAP_HPP
# define MODULE01_CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(std::string name, int currentHitPoint, int energyPoint, uint level,
		  uint meleeAttackDamage, uint rangedAttackDamage, uint armorDamageReduction, uint maxHitPoint, uint maxEnergyPoint);
	~ClapTrap();
	ClapTrap & operator=(const ClapTrap &);

	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(uint amount);
	void		beRepaired(uint amount);
	std::string	getName() const;
	uint		getMeleeAttackDamage() const;
	uint		getRangeAttackDamage() const;
	uint		getRandomAttack() const;

protected:
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


#endif //MODULE01_CLAPTRAP_HPP
