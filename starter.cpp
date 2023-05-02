#include "starter.h"
starter:: starter(string inputName,int inputXP) {
  name = inputName;
  XP = inputXP;
}
string starter:: getName() {
  return name;
  
}
void starter::mainMenu() {
  cout << "*************************************" << endl;
  cout << "Main Menu:" << endl;
  cout << "1.) Continue to the next round" << endl;
  cout << "2.) Save progress of both player's Pokémon " << endl;
  cout << "3.) Quit game" << endl;
  cout << "Please press which option you'd like to choose" << endl;
}
void starter:: setName(string userName) {
  name = userName;
}
int starter:: getXP(){
  return XP;
  
}
int starter:: subtractXP(int damage){
  XP = XP - damage;
  return XP;
}
void starter:: updateXP(){
  cout << "Current stats: your Pokémon has " << XP << " XP." << endl;
  
}

void starter:: setXP(int userXP) {
  XP = userXP;
}
