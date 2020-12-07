//
// Created by Fenix Lavon on 12/6/20.
// Copyright (c) 2020 ${ORGANIZATION_NAME}. All rights reserved.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = grade;
}

Bureaucrat::~Bureaucrat() {}
Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) { *this = bureaucrat; }
Bureaucrat::Bureaucrat() : _name(nullptr), _grade(0) {}

const std::string & Bureaucrat::getName() const { return _name; }
int Bureaucrat::getGrade() const { return _grade; }

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
	this->_grade = bureaucrat.getGrade();
	return *this;
}

void Bureaucrat::incrementGrade() {
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooHighException();
	this->_grade += 1;
}

void Bureaucrat::decrementGrade() {
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooLowException();
	this->_grade -= 1;
}

std::ostream & operator<<(std::ostream &out, const Bureaucrat&bur) {
	out << bur.getName() << ", bureaucrat grade " << bur.getGrade() << std::endl;
	return out;
}

const char * Bureaucrat::GradeTooLowException::what() const throw() { return "Bureaucrat grade is lower\n"; }

const char * Bureaucrat::GradeTooHighException::what() const throw() { return "Bureaucrat grade is higher\n"; }
