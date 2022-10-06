#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main() {
	try {
		std::cout << "Сейчас будет все ок" << std::endl;
		Bureaucrat Lord("The Lord", 1);
		std::cout << Lord << std::endl;

		PresidentialPardonForm PPF("PPF");
		std::cout << PPF << std::endl;

		RobotomyRequestForm RRF("RRF");
		std::cout << RRF << std::endl;

		ShrubberyCreationForm SCF("SCF");
		std::cout << SCF << std::endl;

		Lord.signForm(PPF);
		Lord.executeForm(PPF);
		Lord.signForm(RRF);
		Lord.executeForm(RRF);
		Lord.signForm(SCF);
		Lord.executeForm(SCF);

		std::cout << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}