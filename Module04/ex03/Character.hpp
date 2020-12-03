//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#ifndef MODULE04_CHARACTER_HPP
# define MODULE04_CHARACTER_HPP

class Character {
public:
	Character();

	~Character();

	Character &operator=(const Character &);

	Character(const Character &);
};

#endif
