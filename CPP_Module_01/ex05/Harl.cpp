#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug( void ) {
	std::cout << "DEGUB function called" << std::endl;
}

void Harl::info( void ) {
	std::cout << "INFO function called" << std::endl;
}

void Harl::warning( void ) {
	std::cout << "WARNING function called" << std::endl;
}

void Harl::error( void ) {
	std::cout << "ERROR function called" << std::endl;
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

	for (int i = 0; i < 4; i++) {
		if (args[i] == level) {
			(this->*functions[i])();
			return;
		}
	}
	std::cout << "Error! There is no " << level << " function" << std::endl;
}