#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form(target, 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) 
	: Form(copy)
{
	*this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy) {
	if (this != &copy) {
		target = copy.target;
	}
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (this->getSign() == false)
		throw "Error! Form is not signed!";
	if (executor.getGrade() > this->getGradeExec()) {
		throw Bureaucrat::GradeTooLowException();
	}
		

	std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}