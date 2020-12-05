//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#ifndef MODULE04_ENEMY_HPP
# define MODULE04_ENEMY_HPP

#include <iostream>
class Enemy {
public:
	Enemy(int hp, std::string const &type);
	virtual ~Enemy();
	std::string const& getType() const;
	int	getHP() const;
	virtual void takeDamage(int);

private:
	int _hp;
	std::string _type;
	Enemy();
};


#endif //MODULE04_ENEMY_HPP
