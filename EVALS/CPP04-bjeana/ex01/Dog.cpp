#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called\n";
    ideas = new Brain;
    type = "Dog";
}

Dog::Dog(const Dog & other)
{
    std::cout << "Dog copy constructor called\n";
    this->ideas = new Brain(*(other.ideas));
    this->type = other.type;
}

Dog & Dog::operator=(const Dog & other)
{
    std::cout << "Dog copy assignment operator called\n";
    if (this == &other)
        return *this;
    this->type = other.type;
    this->ideas = new Brain(*(other.ideas));
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called\n";
    delete ideas;
}

/************************************************************/

void Dog::makeSound() const
{
    std::cout << "GavGav =)P\n";
}
