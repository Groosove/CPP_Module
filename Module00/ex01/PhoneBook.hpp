//
// Created by Артур Лутфуллин on 21.11.2020.
//

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "ContactClass.hpp"

std::string toupper(std::string str);

class PhoneBook
{
private:
	Contact contact[8];
	int 	count;
	void	contact_delete(int);
	void	shortPrint();

public:
	PhoneBook();
	void	add();
	void	search();
};

#endif
