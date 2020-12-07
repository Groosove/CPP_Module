//
// Created by Fenix Lavon on 12/6/20.
// Copyright (c) 2020 ${ORGANIZATION_NAME}. All rights reserved.
//

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
class Bureaucrat;
# include "Form.hpp"

class Bureaucrat {
public:

	Bureaucrat(const std::string &name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &);
	Bureaucrat &operator=(const Bureaucrat&);
	std::string const & getName() const;
	int	getGrade() const;
	void incrementGrade();
	void decrementGrade();
	void signForm(Form&);

	struct GradeTooHighException: public std::exception { const char * what() const throw(); };
	struct GradeTooLowException: public std::exception { const char * what() const throw(); };
private:
	std::string _name;
	int	_grade;
	Bureaucrat();
};

std::ostream & operator<<(std::ostream &out, const Bureaucrat&);

#endif
