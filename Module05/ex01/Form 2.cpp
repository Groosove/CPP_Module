//
// Created by Fenix Lavon on 12/6/20.
// Copyright (c) 2020 ${ORGANIZATION_NAME}. All rights reserved.
//

#include "Form.hpp"

Form::Form(): _signed(false), _name(nullptr), _signedCost(0), _signedExec(0) {}

Form::Form(const Form &form): _signed(form.getSigned()), _name(form.getName()), _signedCost(form.getSignedCost()), _signedExec(form.getSignedExec()){}

Form & Form::operator=(const Form &form) { this->_signed = form.getSigned(); return *this; }


void Form::beSigned(const Bureaucrat &bur) {
    if (bur.getGrade() > _signedCost)
        throw Form::GradeTooLowException();
    if (_signed)
        std::cerr << "Form is signed" << std::endl;
    else
        this->_signed = true;
}

bool Form::getSigned() const { return _signed; }
const std::string & Form::getName() const { return _name; }
int Form::getSignedCost() const { return _signedCost; }
int Form::getSignedExec() const { return _signedExec; }

const char * Form::GradeTooLowException::what() const throw() { return "Form grade is lower\n"; }

const char * Form::GradeTooHighException::what() const throw() { return "Form grade is higher\n"; }

