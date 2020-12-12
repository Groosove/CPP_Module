//
// Created by Артур Лутфуллин on 27.11.2020.
//

#ifndef PONY_HPP
#define PONY_HPP

#include <string>
#include <iostream>

class Pony {

private:
	std::string _name;
public:
	Pony(std::string _name);
	~Pony();
	void ponyOnTheHeap() const;
	void ponyOnTheStack() const;

};


#endif
