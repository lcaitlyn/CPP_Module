#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form(target, 72, 45), target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) 
	: Form(copy)
{
	*this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) {
	if (this != &copy) {
		target = copy.target;
	}
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (this->getSign() == false)
		throw "Error! Form is not signed!";
	if (executor.getGrade() > this->getGradeExec())
		throw Bureaucrat::GradeTooLowException();

	if (std::rand() % 2)
		std::cout << target << " robotization was successful" << std::endl;
	else
		std::cout << target << " robotization failed" << std::endl;
}
