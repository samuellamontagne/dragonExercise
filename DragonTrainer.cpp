
#include "DragonTrainer.h"
#include "Dragon.h"
#include <iostream>
using namespace std;

DragonTrainer::DragonTrainer() {
  
}

DragonTrainer::~DragonTrainer() {
  cout << "Destructing the dragon" << endl;
  delete myDragon;
}

DragonTrainer::DragonTrainer(string nameIn, Dragon* dragon):myDragon(nullptr) {
  name = nameIn;
  //myDragon = dragon;
  myDragon = new Dragon;
  *myDragon = *dragon;
}


string DragonTrainer::getMyDragonsName() {
  return myDragon->getName();
}