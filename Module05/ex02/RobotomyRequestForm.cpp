//
// Created by Регина on 07.12.2020.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy", 72, 45), _target(nullptr) {}
RobotomyRequestForm::RobotomyRequestForm(const std::string &target): Form("Robotomy", 145, 137), _target(target) {}
RobotomyRequestForm::~RobotomyRequestForm() {}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &shrubberyCreationForm): Form(shrubberyCreationForm) { *this = shrubberyCreationForm; }
const std::string & RobotomyRequestForm::getTarget() const { return _target; }

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &shrubberyCreationForm) {
	this->_target = shrubberyCreationForm.getTarget();
	return *this;
}

const char * RobotomyRequestForm::DrillIsFailed::what() const throw() { return "Drill is failed\n"; }

void RobotomyRequestForm::execute(const Bureaucrat &bur) const {
	std::srand(time(0));
	Form::execute(bur);
	if (std::rand() % 2)
		throw DrillIsFailed();
	std::cout << "I'm drill and i do BRRRRRRRR" << std::endl;
}