#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	Form *newPPF(std::string target);
	Form *newRRF(std::string target);
	Form *newSCF(std::string target);
public:
	Intern();
	Intern(const Intern &intern);

	Intern &operator=(const Intern &inter);

	~Intern();

	Form *makeForm(std::string name, std::string target);
};





#endif