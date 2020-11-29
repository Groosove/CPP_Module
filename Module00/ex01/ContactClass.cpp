//
// Created by Артур Лутфуллин on 24.11.2020.
//

#include "ContactClass.hpp"

void	Contact::printContact() {
	std::cout << "First name - "		<< _first_name << std::endl;
	std::cout << "Last name - "			<< _last_name << std::endl;
	std::cout << "Nickname - "			<< _nick << std::endl;
	std::cout << "Login - "				<< _login << std::endl;
	std::cout << "Postal address - "	<< _address << std::endl;
	std::cout << "Email address - "		<< _email << std::endl;
	std::cout << "Phone number - "		<< _phone_number << std::endl;
	std::cout << "Birthday - "			<< _birthday << std::endl;
	std::cout << "Favourite meal - "	<< _love_meal << std::endl;
	std::cout << "Underwear color - "	<< _underwear << std::endl;
	std::cout << "Darkest secret - "	<< _secret << std::endl;
}

void	Contact::addContact(int *count) {
	std::cout << "Write first name: ";
	std::getline(std::cin, this->_first_name);
	std::cout << "Write last name: ";
	std::getline(std::cin, this->_last_name);
	std::cout << "Write nickname: ";
	std::getline(std::cin, this->_nick);
	std::cout << "Write login: ";
	std::getline(std::cin, this->_login);
	std::cout << "Write postal address: ";
	std::getline(std::cin, this->_address);
	std::cout << "Write email address: ";
	std::getline(std::cin, this->_email);
	std::cout << "Write phone number: ";
	std::getline(std::cin, this->_phone_number);
	std::cout << "Write birthday date: ";
	std::getline(std::cin, this->_birthday);
	std::cout << "Write favourite meal: ";
	std::getline(std::cin, this->_love_meal);
	std::cout << "Write underwear color: ";
	std::getline(std::cin, this->_underwear);
	std::cout << "Write darkest secret: ";
	std::getline(std::cin, this->_secret);
	if (!_first_name.length() && !_last_name.length() && !_nick.length()) {
		std::cerr << "Please add contact again and plese enter: First name, Last name, Nickname" << std::endl;
		return;
	}
	*count += 1;
}

std::string		Contact::getFirst()		{ return (_first_name.length() < 11) ? _first_name : _first_name.substr(0,9) + '.';}
std::string		Contact::getSecond()	{ return (_last_name.length() < 11) ? _last_name : _last_name.substr(0,9) + '.'; }
std::string		Contact::getNick()		{ return (_nick.length() < 11) ? _nick : _nick.substr(0,9) + '.'; }

