#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;

#include "Animal.h"

class AnimalsInZoo {
   public:
      AnimalsInZoo(Animal animal);
      AnimalsInZoo();

      void display();

   private:
      int numAnimals;
      Animal animal;
};