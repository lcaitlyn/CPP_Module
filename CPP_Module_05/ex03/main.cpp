#include "Intern.hpp"

int main()
{
	Bureaucrat me("Zhun", 20);

	Intern a;
	Form * f = a.makeForm("rrf", "sweet"); // стажер создал новую форму robotomy

	std:: cout << *f << std::endl; //далее тут проверяем просто что реально она существует
	me.signForm(*f);
	try
	{
		f->execute(me);
	}
	catch (const char * er)
	{
		std::cout << er << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	f = a.makeForm("Форма1", "sweet"); 

	return (0);
}