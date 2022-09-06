#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug( void ) {
	std::cout	<< "[ DEBUG ]" << std::endl
				<< "DEGUB function called" << std::endl
				<< std::endl;
}

void Harl::info( void ) {
	std::cout	<< "[ INFO ]" << std::endl
				<< "INFO function called" << std::endl
				<< std::endl;
}

void Harl::warning( void ) {
	std::cout	<< "[ WARNING ]" << std::endl
				<< "WARNING function called" << std::endl
				<< std::endl;
}

void Harl::error( void ) {
	std::cout	<< "[ ERROR ]" << std::endl
				<< "ERROR function called" << std::endl
				<< std::endl;
}

void Harl::complain( std::string level ) {
	void (Harl::*functions[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::string args[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	int i;
	for (i = 0; i < 4; i++) {
		if (args[i] == level) {
			break;
		}
	}

	switch (i) {
		case 0:
			(this->*functions[0])();
		case 1:
			(this->*functions[1])();
		case 2:
			(this->*functions[2])();
		case 3:
			(this->*functions[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}