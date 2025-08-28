#include <iostream>
#include <stdlib.h>
using namespace std;

#include "AnimalsInZoo.h"
#include "Animal.h"

AnimalsInZoo::AnimalsInZoo(Animal a){
    numAnimals = 1;
    animal = a;
}

AnimalsInZoo::AnimalsInZoo() : numAnimals(0), animal() {};

void AnimalsInZoo::display() {
    cout << "Animal Count: " << numAnimals << endl;
    if (numAnimals > 0) {
        animal.display();
    }
}