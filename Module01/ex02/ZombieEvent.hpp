//
// Created by Артур Лутфуллин on 27.11.2020.
//

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent {
private:
	std::string _type;
public:
	ZombieEvent();
	~ZombieEvent();
	Zombie*	newZombie(std::string name);
	void	setZombieType();


};


#endif
