//
// Created by Артур Лутфуллин on 21.11.2020.
//

#include "PhoneBook.hpp"

void	PhoneBook::contact_delete(int index) {
	while (index < 7) {
		this->contact[index] = this->contact[index + 1];
		index++;
	}
	--this->count;
}

void	PhoneBook::shortPrint () {
	std::cout	<< '|' << std::setw(10) << "index"
				<< '|' << std::setw(10) << "first name"
				<< '|' << std::setw(10) << "last name"
				<< '|' << std::setw(10) << "nickname" << std::endl;
	for (int i = 0; i < count; ++i) {
		std::cout << '|' << std::setw(10) << i + 1;
		std::cout << '|' << std::setw(10) << contact[i].getFirst();
		std::cout << '|' << std::setw(10) << contact[i].getSecond();
		std::cout << '|' << std::setw(10) << contact[i].getNick();
		std::cout << '|' << std::endl;
	}
}
void	PhoneBook::search() {
	int index;
	std::string buff;

	if (count == 0) {std::cerr << "Phonebook is empty. Please add contact to phonebook" << std::endl; return;}
	shortPrint();
	while (1) {
		std::cout << "Write contact index to see all information: " << std::endl;
		std::getline(std::cin, buff);
		try {
			index = std::stoi(buff);
			if ((index == 0 || index > count) || buff.length() != 1)
				throw std::exception();
		}
		catch (std::exception &err) { std::cerr << "Wrong index. Please try again!" << std::endl; continue;}
		contact[index - 1].printContact();
		break;
	}
}

void	PhoneBook::add() {
	std::string buffer;
	int index;
	if (this->count == 8)
	{
		std::cout << "PhoneBook is full. Do you want to overwrite a contact?(yes\\no): ";
		std::getline(std::cin, buffer);
		if (toupper(buffer) != "YES")
			return;
		while (true) {
			std::cout << "Which contact do you want to overwrite(1...8): ";
			std::getline(std::cin, buffer);
			try {
				index = std::stoi(buffer);
				if (index >= 1 && index <= 8) {
					contact_delete(index - 1);
					break;
				}
				else
					std::exception();
			}
			catch (std::exception &err) { std::cerr << "Please, try again. Write number in range (1...8)" << std::endl; }
		}
	}
	this->contact[count].addContact(&this->count);
}

PhoneBook::PhoneBook() {
	this->count = 0;
}
