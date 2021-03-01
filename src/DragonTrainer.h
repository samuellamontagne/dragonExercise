#include "Dragon.h"
#include <string>

class DragonTrainer{
  private:
	  string name;
    Dragon* myDragon;
	public:
		string getMyDragonsName();
    DragonTrainer();
    DragonTrainer(string nameIn, Dragon* dragon);
	~DragonTrainer();
    DragonTrainer(const DragonTrainer& toCopyFrom);
    DragonTrainer& operator=(const DragonTrainer& toCopyFrom);

};
