/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavon <flavon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 00:58:57 by flavon            #+#    #+#             */
/*   Updated: 2020/11/26 02:13:15 by flavon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACTCLASS_HPP
# define CONTACTCLASS_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact {
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nick;
	std::string	_login;
	std::string	_address;
	std::string	_email;
	std::string	_phone_number;
	std::string	_birthday;
	std::string	_love_meal;
	std::string	_underwear;
	std::string	_secret;

public:
	Contact() {}
	std::string getFirst();
	std::string getSecond();
	std::string getNick();
	void		printContact();
	void		addContact(int *count);
};


#endif
