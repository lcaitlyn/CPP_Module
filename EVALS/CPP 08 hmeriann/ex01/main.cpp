#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


std::cout << "Negative test" << std::endl;

	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(12);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

std::cout << "Test thousands" << std::endl;

	try
		{
			std::vector<int> tmp;
			for (int i = 0; i < 100000; ++i)
				tmp.push_back(i);

			Span sp = Span(100000);
			sp.addNumber(tmp.begin(), tmp.end() - 1);
			std::cout << "shortestSpane:	" << sp.shortestSpan() << std::endl;
			std::cout << "longestSpan:	" << sp.longestSpan() << std::endl;
		}
		catch (const std::exception &ex) {
			std::cout << ex.what() <<std::endl;
		}

	return 0;
}
