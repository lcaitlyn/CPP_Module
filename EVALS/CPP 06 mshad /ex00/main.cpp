#include "Scalar.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Erroneous arguments, please, put only 1 argument" << std::endl;
		return 1;
	}
	Scalar num(argv[1]);
	try
	{
		num.foundType();
		num.printInfoConversion();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}