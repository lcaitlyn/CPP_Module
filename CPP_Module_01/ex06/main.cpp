#include "Harl.hpp"

int main(int argc, char *argv[]) {
	Harl Karen;

	if (argc != 2) {
		std::cout	<< "./harlFilter \"WARNING\"" << std::endl
					<< "./harlFilter \"I am not sure how tired I am today...\"" << std::endl;
		exit (1);
	}
	Karen.complain(argv[1]);
	return 0;
}