#include "Animals.h"
#include "Brain.h"

int main() {
   // Animal a;

    Dog dog;
    Cat cat;

    std::cout << "Dog says: ";
    dog.makeSound();

    std::cout << "Cat says: ";
    cat.makeSound();

    return 0;
}
