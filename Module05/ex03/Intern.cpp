//
// Created by Fenix Lavon on 12/7/20.
// Copyright (c) 2020 ${ORGANIZATION_NAME}. All rights reserved.
//

#include "Intern.hpp"

Intern::~Intern() {}
Intern::Intern(const Intern &intern) { *this = intern; }
Intern & Intern::operator=(const Intern &intern) { (void)intern; return *this; }
