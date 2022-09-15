#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called\n";
    for (size_t i = 0; i < 100; i++)
    {
        ideas[i] = "idea #" + std::to_string(i + 1);
    }
    
}

Brain::Brain(const Brain & other)
{
    std::cout << "Brain copy constructor called\n";
    for (size_t i = 0; i < 100; i++)
    {
        this->ideas[i] = other.ideas[i];
    }
}

Brain & Brain::operator=(const Brain & other)
{
    std::cout << "Brain copy assignment operator called\n";
    if (this == &other)
        return *this;
    for (size_t i = 0; i < 100; i++)
    {
        this->ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called\n";
}