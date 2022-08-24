#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called\n";
    type = "Cat";
}

Cat::Cat(const Cat & other)
{
    std::cout << "Cat copy constructor called\n";
    this->type = other.type;
}

Cat & Cat::operator=(const Cat & other)
{
    std::cout << "Cat copy assignment operator called\n";
    if (this == &other)
        return *this;
    this->type = other.type;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called\n";
}

/************************************************************/

void Cat::makeSound() const
{
    std::cout << "Meow Meow ^_____^\n";
}
