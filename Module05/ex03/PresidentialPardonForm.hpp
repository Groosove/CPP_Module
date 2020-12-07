//
// Created by Регина on 07.12.2020.
//

#ifndef MODULE05_PRESIDENTIALPARDONFORM_HPP
#define MODULE05_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form {
public:

	PresidentialPardonForm(const std::string &target);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &);
	PresidentialPardonForm& operator=(const PresidentialPardonForm &);
	std::string const& getTarget() const;
	void execute(Bureaucrat const&) const;

private:
	std::string _target;
	PresidentialPardonForm();
};


#endif
