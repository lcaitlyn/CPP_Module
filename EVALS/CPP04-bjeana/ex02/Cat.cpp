#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called\n";
    type = "Cat";
    ideas = new Brain;
}

Cat::Cat(const Cat & other)
{
    std::cout << "Cat copy constructor called\n";
    this->type = other.type;
    this->ideas = new Brain(*(other.ideas));
}

Cat & Cat::operator=(const Cat & other)
{
    std::cout << "Cat copy assignment operator called\n";
    if (this == &other)
        return *this;
    this->type = other.type;
    this->ideas = new Brain(*(other.ideas));
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called\n";
    delete ideas;
}

/************************************************************/

void Cat::makeSound() const
{
    std::cout << "Meow Meow ^_____^\n";
}
