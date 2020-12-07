//
// Created by Регина on 07.12.2020.
//

#include "PresidentialPardonForm.hpp"
PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential", 72, 45), _target(nullptr) {}
PresidentialPardonForm::PresidentialPardonForm(const std::string &target): Form("Presidential", 145, 137), _target(target) {}
PresidentialPardonForm::~PresidentialPardonForm() {}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &shrubberyCreationForm): Form(shrubberyCreationForm) { *this = shrubberyCreationForm; }
const std::string & PresidentialPardonForm::getTarget() const { return _target; }

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &shrubberyCreationForm) {
	this->_target = shrubberyCreationForm.getTarget();
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const {
	Form::execute(bureaucrat);
	std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}