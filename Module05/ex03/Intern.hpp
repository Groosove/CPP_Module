//
// Created by Fenix Lavon on 12/7/20.
// Copyright (c) 2020 ${ORGANIZATION_NAME}. All rights reserved.
//

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
public:

	Intern();
	~Intern();
	Intern(const Intern &);
	Intern &operator=(const Intern &);
	struct UnknownForm: public std::exception { const char * what() const throw(); };
	Form* makeForm(std::string const &nameForm, std::string const &target);
};


#endif //MODULE05_INTERN_HPP
