/*


*/

#include <iostream>
#include "DragonTrainer.h"

using namespace std;



int main() {
  Dragon* myDragon = new Dragon("Roger", 12);
  Dragon* myDragon2 = new Dragon("Pierre", 15);
  DragonTrainer myTrainer("Bob", myDragon);
  DragonTrainer* myTrainerHeap = new DragonTrainer("Georgette", myDragon2);

  cout << "Dragon's Name: " << myTrainer.getMyDragonsName() << endl;
  cout << "Dragon's Name (from heap): " << myTrainerHeap->getMyDragonsName() << endl;

  
 
  return 0;
}