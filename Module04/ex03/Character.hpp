//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#ifndef MODULE04_CHARACTER_HPP
# define MODULE04_CHARACTER_HPP

#include "ICharacter.hpp"
class Character: public ICharacter {
public:
	Character(const std::string &name);
	Character(const Character &);
	virtual ~Character();
	Character &operator=(const Character &);
	std::string const& getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter &target);

private:
	std::string _name;
	AMateria* _aMateria[4];
	Character();
};

#endif
