#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat {
private:
	const std::string name;
	int grade;
public:
	Bureaucrat();
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &bureaucrat);

	~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &bureaucrat);

	std::string getName() const;
	int getGrade() const;

	void upGrade();
	void downGrade();

	void signForm(Form &form);
	void executeForm(Form const & form);

	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
	
	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif