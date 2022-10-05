#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {
private:
	const std::string name;
	int grade;
public:
	std::string getName();
	int getGrade();

	void upGrade();
	void downGrade();

	class GradeTooHighException : public std::exception {
	public:
		GradeTooHighException();
		~GradeTooHighException();
	};
	
	class GradeTooLowException : public std::exception {
	public:
		GradeTooLowException();
		~GradeTooLowException();
	};
};


#endif