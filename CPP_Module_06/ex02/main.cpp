#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void) {
	srand (time(NULL));
	int r = rand() % 3;

	if (r == 0) {
		std::cout << "Generated A" << std::endl;
		return new A();
	} else if (r == 1) {
		std::cout << "Generated B" << std::endl;
		return new B();
	}
	std::cout << "Generated C" << std::endl;
	return new C();
}

void identify(Base* p) {
	std::cout << "Результат через указатель: ";

	if (dynamic_cast<A *>(p) != 0)
		std::cout << "I am A" << std::endl;
	else if (dynamic_cast<B *>(p) != 0)
		std::cout << "I am B" << std::endl;
	else if (dynamic_cast<C *>(p) != 0)
		std::cout << "I am C" << std::endl;
	else
		std::cout << "Error!" << std::endl;
}

void identify(Base& p) {
	std::cout << "Результат через адрес: ";

	try {
		A a = dynamic_cast<A &>(p);
		std::cout << "I am A" << std::endl;
	} catch (std::bad_cast &e) {
		try {
			e.what();
			B b = dynamic_cast<B &>(p);
			std::cout << "I am B" << std::endl;
		} catch (std::bad_cast &e) {
			try {
				C b = dynamic_cast<C &>(p);
				std::cout << "I am C" << std::endl;
			}
			catch (std::bad_cast &e) {
				std::cout << e.what() << std::endl;
			}
		}
	}
}

int main() {
	Base *b = generate();
	Base *b_fake = new Base();
	
	identify(b);	
	identify(*b);

	identify(b_fake);
	identify(*b_fake);

	delete b_fake;
	delete b;

	return 0;
}