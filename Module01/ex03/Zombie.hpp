//
// Created by Артур Лутфуллин on 27.11.2020.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

const std::string zombieType[8] = {
		"Chargers",
		"Spitters",
		"Jockey",
		"Wandering Witchers",
		"Smokers",
		"Boomers",
		"Hunters",
		"Tanks"
};

const std::string zombieName[4] = {
		"Coach",
		"Nick",
		"Rochelle",
		"Ellis"
};

class Zombie {

private:
	std::string _name;
	std::string _type;
public:
	Zombie();
	~Zombie();
	void announce();
};

#endif
