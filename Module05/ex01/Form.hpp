//
// Created by Fenix Lavon on 12/6/20.
// Copyright (c) 2020 ${ORGANIZATION_NAME}. All rights reserved.
//

#ifndef MODULE05_FORM_HPP
# define MODULE05_FORM_HPP

#include "Bureaucrat.hpp"

class Form {
public:
	Form(const std:string &name, int signedCost, int signedExec);
	~Form();
	Form(const Form &);
	Form &operator=(const Form &);
	struct GradeTooHighException: public std::exception { const char * what() const throw(); };
	struct GradeTooLowException: public std::exception { const char * what() const throw(); };
	void beSigned(const Bureaucrat &);

	bool getSigned() const;
	std::string const & getName() const;
	int const getSignedCost() const;
	int const getSignedExec() const;

private:
	bool _signed;
	const std::string	_name;
	const int _signedCost;
	const int _signedExec;
	Form();
};

std::ostream & operator<<(std::ostream &out, const Form&);

#endif //MODULE05_FORM_HPP
