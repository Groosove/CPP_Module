//
// Created by Артур Лутфуллин on 21.11.2020.
//

#include "PhoneBook.hpp"

std::string toupper(std::string str)
{
	for (int i = 0; str[i]; ++i)
		str[i] = (char)((str[i] >= 97 && str[i] <= 122) ? str[i] - 32 : str[i]);
	return (str);
}

int main(void)
{
	PhoneBook book;
	int count;
	std::string command;

	count = 0;
	while(true)
	{
		std::cout << "This programm take this command(ADD SEARCH EXIT): " << std::endl;
		std::getline(std::cin, command);
		if (toupper(command) == "ADD")
			book.add();
		else if (toupper(command) == "SEARCH")
			book.search();
		else if (toupper(command) == "EXIT")
			break;
	}
	std::cout << "This programm is end. Good luck, my little boy:)" << std::endl;
	return  (0);
}

