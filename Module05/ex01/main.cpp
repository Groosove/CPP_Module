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
    form.beSigned(bureaucrat);
    std::cout << form << std::endl;
    bureaucrat.signForm(form);

	return 0;
}