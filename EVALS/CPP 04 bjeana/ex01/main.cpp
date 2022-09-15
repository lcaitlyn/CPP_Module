#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // delete j; //should not create a leak
    // delete i;

    size_t size = 4;
    Animal *arr[size];

    for (size_t i = 0; i < size/2; i++)
    {
        arr[i] = new Dog;
    }
    for (size_t i = size/2; i < size; i++)
    {
        arr[i] = new Cat;
    }
    
    for (size_t i = 0; i < size; i++)
    {
        delete arr[i];
    }
    
    return 0;
}