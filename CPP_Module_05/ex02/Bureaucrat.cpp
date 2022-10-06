#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade) {
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
	if (this != &bureaucrat) {
		const_cast<std::string &>(name) = bureaucrat.name;
		grade = bureaucrat.grade;
	}
	return *this;
}

std::string Bureaucrat::getName() const { return name; }

int Bureaucrat::getGrade() const { return grade; }

void Bureaucrat::upGrade() {
	if (grade == 1)
		throw GradeTooHighException();
	grade--;
}

void Bureaucrat::downGrade() {
	if (grade == 150)
		throw GradeTooLowException();
	grade++;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) {
	(*this) = bureaucrat;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Error! Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Error! Grade too low!";
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
	out << bureaucrat.getName() << " has grade " << bureaucrat.getGrade();
	return out;
}

void Bureaucrat::signForm(Form &form) {
	try
	{
		form.beSigned(*this);
		std::cout << name << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr	<< name << " couldn’t sign " << form.getName()
					<< " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form const & form) {
	try {
		form.execute(*this);
		std::cout << name << " executed " << form.getName() << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}