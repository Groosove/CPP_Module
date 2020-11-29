//
// Created by Артур Лутфуллин on 27.11.2020.
//

#include "ZombieEvent.hpp"

void randomChump() {
	Zombie *zombie = new Zombie(zombieName[std::rand() % 4], zombieType[std::rand() % 8]);
	zombie->announce();
	delete zombie;
}
int main(){
	ZombieEvent zombieEvent;
	zombieEvent.setZombieType();
	Zombie *zombieHeap = zombieEvent.newZombie(zombieName[std::rand() % 4]);
	zombieHeap->announce();
	delete zombieHeap;
	Zombie zombieStack(zombieName[std::rand() % 4], zombieType[std::rand() % 8]);
	zombieStack.announce();
	randomChump();
	return 0;
}