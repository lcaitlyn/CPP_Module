#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	const std::string	name;
	bool				sign;
	const int			gradeSign;
	const int 			gradeExec;
public:
	Form();
	Form(std::string name, int gradeSign, int gradeExec);
	Form(const Form &form);
	Form &operator=(const Form &form);

	~Form();

	std::string getName() const;
	int			getGradeExec() const;
	int			getGradeSign() const;
	bool		getSign() const;

	void	beSigned(Bureaucrat &bureaucrat);
	
	virtual void execute(Bureaucrat const & executor) const = 0;


	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
};

std::ostream& operator<< (std::ostream &out, const Form &form);

#endif