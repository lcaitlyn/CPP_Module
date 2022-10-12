#include "iter.hpp"

int main() {
	int arrInt[] = { 1, 2, 3, 4, 5 };
	std::string arrString[] = { "Biba", "Boba", "Pupa", "Lupa" };
	
	iter(arrInt, 5, printer);
	iter(arrString, 4, printer);


	return 0;
}