#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called\n";
    type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal & other)
{
    std::cout << "WrongAnimal copy constructor called\n";
    this->type = other.type;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & other)
{
    std::cout << "WrongAnimal copy assignment operator called\n";
    if (this == &other)
        return *this;
    this->type = other.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called\n";
}

/*******************************************************************/

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "I am WrongAnimal, I don't make sound :/\n";
}