#include "Bureaucrat.hpp"

int main()
{
	try	{
		Bureaucrat a("Biba", 1);
		std::cout << a << std::endl;
		a.downGrade();
		std::cout << a << std::endl;
		a.upGrade();
		std::cout << a << std::endl;
		a.upGrade();
		std::cout << a << std::endl;
		std::cout << "Должен был вылетить в exception!" << std::endl;
	} catch (std::exception & ex) {
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	try	{
		Bureaucrat a("Boba", -1);
		std::cout << a << std::endl;
		std::cout << "Должен был вылетить в exception!" << std::endl;
	} catch (std::exception & ex) {
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	try	{
		Bureaucrat a("Jim", 150);
		std::cout << a << std::endl;
		a.downGrade();
		std::cout << a << std::endl;
		std::cout << "Должен был вылетить в exception!" << std::endl;
	} catch (std::exception & ex) {
		std::cout << ex.what() << std::endl;
	}
	return 0;
}