//
// Created by Артур Лутфуллин on 27.11.2020.
//

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde {
public:
	ZombieHorde(int N);
	~ZombieHorde();
	void announce();

private:
	int 	_count;
	Zombie *_zombie;
};


#endif
