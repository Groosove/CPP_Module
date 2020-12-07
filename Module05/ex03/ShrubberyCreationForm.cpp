//
// Created by Регина on 07.12.2020.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery", 145, 137), _target(nullptr) {}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): Form("Shrubbery", 145, 137), _target(target) {}
ShrubberyCreationForm::~ShrubberyCreationForm() {}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyCreationForm): Form(shrubberyCreationForm) { *this = shrubberyCreationForm; }
const std::string & ShrubberyCreationForm::getTarget() const { return _target; }

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubberyCreationForm) {
    this->_target = shrubberyCreationForm.getTarget();
    return *this;
}

const char * ShrubberyCreationForm::FileDoNotOpen::what() const throw() { return "File is don't open\n"; }

void ShrubberyCreationForm::execute(const Bureaucrat &bur) const {
	Form::execute(bur);
    std::ofstream out("/Users/flavon/Desktop/CPP_Module/Module05/" + _target + "_shrubbery");
	out << "             /\\\n"
	"            <  >\n"
	"             \\/\n"
	"             /\\\n"
	"            /  \\\n"
	"           /++++\\\n"
	"          /  ()  \\\n"
	"          /      \\\n"
	"         /~`~`~`~`\\\n"
	"        /  ()  ()  \\\n"
	"        /          \\\n"
	"       /*&*&*&*&*&*&\\\n"
	"      /  ()  ()  ()  \\\n"
	"      /              \\\n"
	"     /++++++++++++++++\\\n"
	"    /  ()  ()  ()  ()  \\\n"
	"    /                  \\\n"
	"   /~`~`~`~`~`~`~`~`~`~`\\\n"
	"  /  ()  ()  ()  ()  ()  \\\n"
	"  /*&*&*&*&*&*&*&*&*&*&*&\\\n"
	" /                        \\\n"
	"/,.,.,.,.,.,.,.,.,.,.,.,.,.\\\n"
	"           |   |\n"
	"          |`````|\n"
	"          \\_____/\n";
	out.close();
}



