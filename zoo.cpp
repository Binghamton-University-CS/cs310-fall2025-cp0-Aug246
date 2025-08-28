#include <iostream>
#include <stdlib.h>
using namespace std;

#include "AnimalsInZoo.h"

int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal animal3("Grizzly Bear", 1969);
   AnimalsInZoo animalsinzoo(animal3);

   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   animal2.display();
   animal1->display();
   animal3.display();

   animalsinzoo.display();

   delete animal1;
}
