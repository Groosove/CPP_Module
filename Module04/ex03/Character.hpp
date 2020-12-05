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
	Character();
	virtual ~Character();
	Character &operator=(const Character &);
	Character(const Character &);
	std::string const& getName() const;
	void equip(AMateria* m);
	void unequip(int idx) const;
	void use(int idx, ICharacter &target);

private:
	std::string _name;
	int _count;
	AMateria* _aMateria[4];
};

#endif
