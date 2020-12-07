//
// Created by Fenix Lavon on 12/7/20.
// Copyright (c) 2020 ${ORGANIZATION_NAME}. All rights reserved.
//

#include "Intern.hpp"

Intern::~Intern() {}
Intern::Intern(const Intern &intern) { *this = intern; }
Intern & Intern::operator=(const Intern &intern) { (void)intern; return *this; }
Intern::Intern() {}
const char * Intern::UnknownForm::what() const throw() { return "Intern unknown this form\n"; }

Form * Intern::makeForm(const std::string &nameForm, const std::string &target) {
	Form *form;
	const std::string knowForm[3] = {
		"Shrubbery",
		"Robotomy",
		"Presidential"
	};
	for (int i = 0; i < 3; ++i) {
		if (nameForm == knowForm[i]) {
			std::cout << "Intern creates " << nameForm << std::endl;
			switch (i) {
				case 0: form = new ShrubberyCreationForm(target); break;
				case 1:	form = new RobotomyRequestForm(target); break;
				case 2: form = new PresidentialPardonForm(target); break;
				default: form = nullptr; break;
			}
			return form;
		}
	}
	throw UnknownForm();
}