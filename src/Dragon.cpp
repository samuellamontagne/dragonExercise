#include "Dragon.h"

Dragon::Dragon(string nameIn, double weightIn):name(nameIn), weight(weightIn){

}
Dragon::~Dragon(){

}
Dragon::Dragon(const Dragon &other){

}
string Dragon::getName(){
  return name;
}
void Dragon::setName(string newName){
  name = newName;
}

