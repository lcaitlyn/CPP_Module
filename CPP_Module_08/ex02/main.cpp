#include "MutantStack.hpp"

# define SIZE 10
# include <list>

int main( void ) {
	MutantStack<int> mstack;
	std::list<int> list;

	mstack.push(5);
	mstack.push(17);
	
	list.push_back(5);
	list.push_back(17);

	std::cout << "top mstack = " << mstack.top() << std::endl;

	mstack.pop();
	list.pop_back();

	std::cout << "size mstack = " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;

	std::cout << "mstack:" << std::endl;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}

	std::list<int>::iterator ti = list.begin();
	std::list<int>::iterator tie = list.end();
	++ti;
	--ti;

	std::cout << "list:" << std::endl;
	while (ti != tie)
	{
	std::cout << *ti << std::endl;
	++ti;
	}
	
	return 0;
}