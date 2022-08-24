#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called\n";
    type = "Animal";
}

Animal::Animal(const Animal & other)
{
    std::cout << "Animal copy constructor called\n";
    this->type = other.type;
}

Animal & Animal::operator=(const Animal & other)
{
    std::cout << "Animal copy assignment operator called\n";
    if (this == &other)
        return *this;
    this->type = other.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called\n";
}

/*******************************************************************/

std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << "I am Animal, I don't make sound :/\n";
}

