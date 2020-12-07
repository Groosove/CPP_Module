//
// Created by Fenix Lavon on 12/6/20.
// Copyright (c) 2020 ${ORGANIZATION_NAME}. All rights reserved.
//

#include "Form.hpp"

Form::Form(): _signed(false), _name(nullptr), _signedCost(0), _signedExec(0) {}

Form::Form(const Form &form): _signed(form.getSigned()), _name(form.getName()), _signedCost(form.getSignedCost()), _signedExec(form.getSignedExec()){}

Form::~Form() {}

Form & Form::operator=(const Form &form) { this->_signed = form.getSigned(); return *this; }

Form::Form(const std::string &name, int signedCost, int signedExec) :_signed(false), _name(name), _signedCost(signedCost), _signedExec(signedExec) {
    if (signedCost < 1 || signedExec < 1)
        throw Form::GradeTooLowException();
    else if (signedCost > 150 || signedExec > 150)
        throw Form::GradeTooHighException();
}

void Form::beSigned(const Bureaucrat &bur) {
    if (bur.getGrade() > _signedCost)
        throw Form::GradeTooLowException();
    if (_signed)
        throw Form::FormIsSigned();
    else
        this->_signed = true;
}

bool Form::getSigned() const { return _signed; }
const std::string & Form::getName() const { return _name; }
int Form::getSignedCost() const { return _signedCost; }
int Form::getSignedExec() const { return _signedExec; }
const char * Form::GradeTooLowException::what() const throw() { return "Form grade is lower\n"; }
const char * Form::GradeTooHighException::what() const throw() { return "Form grade is higher\n"; }
const char * Form::FormIsNotSigned::what() const throw() { return "Form is not signed\n"; }
const char * Form::FormIsSigned::what() const throw() { return "Form is signed\n"; }

void Form::execute(const Bureaucrat &bur) const {
		if (bur.getGrade() > _signedExec)
			throw Form::GradeTooLowException();
		if (!this->_signed)
			throw Form::FormIsNotSigned();
}

std::ostream & operator<<(std::ostream &out, const Form &form) {
    out << "Form name: " << form.getName() << std::endl;
    out << "Form cost: " << form.getSignedCost() << std::endl;
    out << "Form exec cost: " << form.getSignedExec() << std::endl;
    out << "Form signed: " << ((form.getSigned()) ? "True" : "False") << std::endl;
    return out;
}