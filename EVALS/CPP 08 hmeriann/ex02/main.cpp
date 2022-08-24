#include "MutantStack.hpp"
#include <list>

int main()
{
	std::cout << "-------------------------------------MutantStack-----------------------------------\n\n" << std::endl;
	
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	
	std::cout << " mstack.size() : " << mstack.size() << " (two values were added)\n" << std::endl;
	std::cout << " mstack.top() : " << mstack.top() << " (last added value)\n"<< std::endl;
	mstack.pop();
	
	std::cout << " mstack.size() : " << mstack.size() << " (17 was popped)\n" << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	
	while (it != ite)
	{
		std::cout << " *it : " << *it << std::endl;
		++it;
	}

	std::cout << "\n----------------------------MutantStack to std::stack-----------------------------\n\n" << std::endl;

	std::stack<int> s(mstack);
	
	std::cout << " mstack top mstack:	" << mstack.top() << std::endl;
	std::cout << " mstack top s:		" << s.top() << "\n" << std::endl;
	
	std::cout << "\n------------------------MutantStack replaced with std::list-----------------------\n\n" << std::endl;
	
	std::list<int> lstack;
	lstack.push_back(5);
	lstack.push_back(17);
	
	std::cout << " lstack.size() : " << lstack.size() << " (two values were added)\n" << std::endl;
	std::cout << " lstack.back() : " << lstack.back() << " (last added value)\n" << std::endl;
	lstack.pop_back();
	
	std::cout << " lstack.size() : " << lstack.size() << " (17 was popped)\n" << std::endl;
	
	lstack.push_back(3);
	lstack.push_back(5);
	lstack.push_back(737);
	//[...]
	lstack.push_back(0);

	std::list<int>::iterator lit = lstack.begin();
	std::list<int>::iterator lite = lstack.end();
	
	++lit;
	--lit;
	
	while (lit != lite)
	{
		std::cout << " *it : " << *lit << std::endl;
		++lit;
	}

	return 0;
}