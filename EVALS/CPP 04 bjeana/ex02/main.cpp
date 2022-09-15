#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    //Animal a;

    Cat a;
    a.makeSound();

    Animal *ptr;
    ptr = &a;
    ptr->makeSound();
    
    return 0;
}