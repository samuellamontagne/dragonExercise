#ifndef DRAGON_H_
#define DRAGON_H_

#include <string>

using namespace std;

class Dragon {
public:
	Dragon(string name = "None", double weight = 0.0);
	virtual ~Dragon();
	Dragon(const Dragon &other);
	string getName();
	void setName(string newName);

private:
	string name;
	double weight;
};

#endif /* DRAGON_H_ */