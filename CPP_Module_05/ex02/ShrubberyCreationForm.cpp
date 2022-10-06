#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form(target, 72, 45), target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) 
	: Form(copy)
{
	*this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) {
	if (this != &copy) {
		target = copy.target;
	}
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (this->getSign() == false)
		throw "Error! Form is not signed!";
	if (executor.getGrade() > this->getGradeExec())
		throw Bureaucrat::GradeTooLowException();

	std::ofstream file;

	try {
		file.open(target + "_shrubbery");
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	file
	<< "                                                         .       " << std::endl
	<< "                                              .         ;        " << std::endl
	<< "                 .              .              ;%     ;;         " << std::endl
	<< "                   ,           ,                :;%  %;          " << std::endl
	<< "                    :         ;                   :;%;'     .,   " << std::endl
	<< "           ,.        %;     %;            ;        %;'    ,;     " << std::endl
	<< "             ;       ;%;  %%;        ,     %;    ;%;    ,%'      " << std::endl
	<< "              %;       %;%;      ,  ;       %;  ;%;   ,%;'       " << std::endl
	<< "               ;%;      %;        ;%;        % ;%;  ,%;'         " << std::endl
	<< "                `%;.     ;%;     %;'         `;%%;.%;'           " << std::endl
	<< "                 `:;%.    ;%%. %@;        %; ;@%;%'              " << std::endl
	<< "                    `:%;.  :;bd%;          %;@%;'                " << std::endl
	<< "                      `@%:.  :;%.         ;@@%;'                 " << std::endl
	<< "                        `@%.  `;@%.      ;@@%;                   " << std::endl
	<< "                          `@%%. `@%%    ;@@%;                    " << std::endl
	<< "                            ;@%. :@%%  %@@%;                     " << std::endl
	<< "                              %@bd%%%bd%%:;                      " << std::endl
	<< "                                #@%%%%%:;;                       " << std::endl
	<< "                                %@@%%%::;                        " << std::endl
	<< "                                %@@@%(o);  . '                   " << std::endl
	<< "                                %@@@o%;:(.,'                     " << std::endl
	<< "                            `.. %@@@o%::;                        " << std::endl
	<< "                               `)@@@o%::;                        " << std::endl
	<< "                                %@@(o)::;                        " << std::endl
	<< "                               .%@@@@%::;                        " << std::endl
	<< "                               ;%@@@@%::;.                       " << std::endl
	<< "                              ;%@@@@%%:;;;.                      " << std::endl
	<< "                          ...;%@@@@@%%:;;;;,..                   " << std::endl;

	file.close();
}
