//
// Created by Fenix Lavon on 12/6/20.
// Copyright (c) 2020 ${ORGANIZATION_NAME}. All rights reserved.
//

#include "Form.hpp"

Form::Form(): _signed(false), _name(nullptr), _signedCost(0), _signedExec(0) {}

Form::Form(const Form &form): _signed(form.getSigned()), _name(form.getName()), _signedCost(form.getSignedCost()), _signedExec(form.getSignedExec()){}

Form & Form::operator=(const Form &form) { this->_signed = form.getSigned(); return *this; }

