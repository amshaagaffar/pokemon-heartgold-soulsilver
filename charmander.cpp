#include "charmander.h"
charmander::charmander(string inputName, int inputXP)
    : starter(inputName, inputXP){}
void charmander:: attackMenu() {
  cout << "CHARMANDER'S attack menu includes:" << endl;
  cout << "1.) Flamethrower- this causes damage of 15 XP to the opponent!" << endl;
  cout << "2.) Inferno- this move causes damage of 25 XP to the opponent!" << endl;
  cout << "3.) Dragon Breath- this move causes damage of 25 XP to the opponent!" << endl;
  cout << "4.) Fire Fang- this move causes damage of 35 XP to the opponent!" << endl;
  cout << "Please enter the number of the move you'd like to play!" << endl;
}
int charmander::attackOne() {
  return starter::subtractXP(25);
}
int charmander::attackTwo() {
  return starter::subtractXP(15);
}
int charmander:: attackThree() {
  return starter::subtractXP(25);
}
int charmander::attackFour(){
  return starter::subtractXP(35);
}