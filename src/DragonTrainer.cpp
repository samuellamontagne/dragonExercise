
#include "DragonTrainer.h"
#include "Dragon.h"
#include <iostream>
using namespace std;

DragonTrainer::DragonTrainer() {
  
}

DragonTrainer::DragonTrainer(const DragonTrainer& toCopyFrom){
  name = toCopyFrom.name;
  myDragon = new Dragon;
  *myDragon = *(toCopyFrom.myDragon);
}
DragonTrainer& DragonTrainer::operator=(const DragonTrainer& toCopyFrom){

  *myDragon = *(toCopyFrom.myDragon);
  name = toCopyFrom.name;

  return *this;
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
