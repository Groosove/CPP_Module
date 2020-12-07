//
// Created by Регина on 07.12.2020.
//

#ifndef MODULE05_ROBOTOMYREQUESTFORM_HPP
#define MODULE05_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form {
public:

	RobotomyRequestForm(const std::string &target);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &);
	RobotomyRequestForm& operator=(const RobotomyRequestForm &);
	std::string const& getTarget() const;
	void execute(Bureaucrat const&) const;

	struct DrillIsFailed: public std::exception { const char * what() const throw(); };

private:
	std::string _target;
	RobotomyRequestForm();
};


#endif //MODULE05_ROBOTOMYREQUESTFORM_HPP
