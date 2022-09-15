#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called\n";
    type = "Dog";
}

Dog::Dog(const Dog & other)
{
    std::cout << "Dog copy constructor called\n";
    this->type = other.type;
}

Dog & Dog::operator=(const Dog & other)
{
    std::cout << "Dog copy assignment operator called\n";
    if (this == &other)
        return *this;
    this->type = other.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called\n";
}

/************************************************************/

void Dog::makeSound() const
{
    std::cout << "GavGav =)P\n";
}
