#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor called\n";
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat & other)
{
    std::cout << "WrongCat copy constructor called\n";
    this->type = other.type;
}

WrongCat & WrongCat::operator=(const WrongCat & other)
{
    std::cout << "WrongCat copy assignment operator called\n";
    if (this == &other)
        return *this;
    this->type = other.type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called\n";
}

/************************************************************/

void WrongCat::makeSound() const
{
    std::cout << "Meow Meow ^_____^\n";
}