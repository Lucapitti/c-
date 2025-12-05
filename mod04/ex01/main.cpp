#include "Animals.h"
#include "Brain.h"

#define L 4

int main()
{
    Animal *zoo[L];

    for(int i = 0; i < L; i++)
    {
        if (i < L/2)
            zoo[i] = new Dog();
        else
            zoo[i] = new Cat();
    }
    for(int i = 0; i < L; i++)
        delete zoo[i];
}
