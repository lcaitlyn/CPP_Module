#include <iostream>
#include <ctime>
#include <cstdlib>
#include <exception>

class Base
{
public:
	virtual ~Base(){};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *generate(void)
{
	Base *ptr;
	int random;

	srand(time(0));
	random = 1 + rand() % 3;
	switch (random)
	{
	case 1:
		ptr = new A();
		break;
	case 2:
		ptr = new B();
		break;
	case 3:
		ptr = new C();
		break;

	default:
		ptr = NULL;
		break;
	}
	return ptr;
}

void identify(Base *p)
{
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);

	if (a)
		std::cout << "Class A" << std::endl;
	else if (b)
		std::cout << "Class B" << std::endl;
	else if (c)
		std::cout << "Class C" << std::endl;
}

void identify(Base &p)
{
	Base *tmp = &p;
	if (!tmp)
		return;
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "Class A" << std::endl;
		return;
	}
	catch (const std::exception &e)
	{
		try
		{
			B &b = dynamic_cast<B &>(p);
			(void)b;
			std::cout << "Class B" << std::endl;
			return;
		}
		catch (const std::exception &e)
		{
			try
			{
				C &c = dynamic_cast<C &>(p);
				(void)c;
				std::cout << "Class C" << std::endl;
				return;
			}
			catch (const std::exception &e)
			{
				std::cerr << e.what() << std::endl;
			}
			std::cerr << e.what() << std::endl;
		}
		std::cerr << e.what() << std::endl;
	}
}

int main()
{
	Base *a = generate();
	// Base *a = NULL;
	identify(a);
	identify(*a);
	delete a;
	return 0;
}
