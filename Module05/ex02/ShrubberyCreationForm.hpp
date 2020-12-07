//
// Created by Регина on 07.12.2020.
//

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm: public Form {
public:
    ShrubberyCreationForm(const std::string &target);
    virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm &);
    std::string const& getTarget() const;
    void execute(Bureaucrat const&) const;
    struct FileDoNotOpen: public std::exception { const char * what() const throw(); };
private:
    std::string _target;
    ShrubberyCreationForm();
};


#endif
