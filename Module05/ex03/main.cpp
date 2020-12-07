//
// Created by Fenix Lavon on 12/6/20.
// Copyright (c) 2020 ${ORGANIZATION_NAME}. All rights reserved.
//

#include "Bureaucrat.hpp"

int main(void) {
	try { Bureaucrat bureaucrat("Bob", 151); }
	catch (std::exception &e) { std::cout << e.what(); }

	try { Bureaucrat bureaucrat("Bob", 0); }
	catch (std::exception &e) { std::cout << e.what(); }

	try { Bureaucrat bureaucrat("Bob", 1); bureaucrat.decrementGrade(); }
	catch (std::exception &e) { std::cout << e.what(); }

	try { Bureaucrat bureaucrat("Bob", 150); bureaucrat.incrementGrade(); }
	catch (std::exception &e) { std::cout << e.what(); }

	Bureaucrat bureaucrat("Bob", 5);
	std::cout << bureaucrat << std::endl;

	try { Form form("28C", 0, 125); }
    catch (std::exception &e) { std::cout << e.what(); }
    try { Form form("28C", 139, 151); }
    catch (std::exception &e) { std::cout << e.what(); }

    Form form("28C", 12, 125);
//    form.beSigned(bureaucrat);
    std::cout << form << std::endl;

	ShrubberyCreationForm shrubberyCreationForm("shrubberyCreationForm");
	try { shrubberyCreationForm.execute(bureaucrat); }
	catch (std::exception &e) { std::cout << e.what(); }
	try { Bureaucrat bureaucrat1("Henry", 150); shrubberyCreationForm.execute(bureaucrat1); }
	catch (std::exception &e) { std::cout << e.what(); }
	bureaucrat.signForm(shrubberyCreationForm);
	shrubberyCreationForm.execute(bureaucrat);

	std::cout << std::endl;

	RobotomyRequestForm robotomyRequestForm("robotomyRequestForm");
	bureaucrat.signForm(robotomyRequestForm);
	try { robotomyRequestForm.execute(bureaucrat); }
	catch (std::exception &e) { std::cout << e.what(); }

	std::cout << std::endl;
	PresidentialPardonForm presidentialPardonForm("presidentialPardonForm");
	bureaucrat.signForm(presidentialPardonForm);
	try { Bureaucrat bureaucrat2("Milly", 150); presidentialPardonForm.execute(bureaucrat2); }
	catch (std::exception &e) { std::cout << e.what(); }
	presidentialPardonForm.execute(bureaucrat);
	return 0;
}