//
// Created by Fenix Lavon on 12/7/20.
// Copyright (c) 2020 ${ORGANIZATION_NAME}. All rights reserved.
//

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"

class Intern {
public:

	Intern();
	~Intern();
	Intern(const Intern &);
	Intern &operator=(const Intern &);
	Form* makeForm(std::string const &nameForm, std::string const &target);
};


#endif //MODULE05_INTERN_HPP
