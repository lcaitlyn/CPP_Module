// #pragma once
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>

template< typename T >
class MutantStack : public std::stack< T >
{
public:

	MutantStack() : std::stack< T >() {}
	MutantStack(const MutantStack< T > & mutant) : std::stack< T >(mutant) {}
	MutantStack const	&operator=(const MutantStack< T > & rhs)
	{
	if (this == &rhs)
		return *this;
	std::stack< T >::operator=(rhs);
	return *this;
	}
	~MutantStack() {}

	typedef typename std::stack< T >::container_type::iterator					iterator; //read and write
	typedef typename std::stack< T >::container_type::const_iterator			const_iterator; //read only
	typedef typename std::stack< T >::container_type::reverse_iterator			reverse_iterator; 
	typedef typename std::stack< T >::container_type::const_reverse_iterator	const_reverse_iterator;

	iterator		begin() { return	this->c.begin(); }
	const_iterator	begin() const { return	this->c.begin(); }

	iterator		end() { return	this->c.end(); }
	const_iterator	end() const { return	this->c.end(); }

	iterator		rbegin() { return	this->c.rbegin(); }
	const_iterator	rbegin() const { return	this->c.rbegin(); }

	iterator		rend() { return	this->c.rend(); }
	const_iterator	rend() const { return	this->c.rend(); }
};

#endif