#include "squirtle.h"
squirtle::squirtle(string inputName, int inputXP)
    : starter(inputName, inputXP){}
void squirtle:: attackMenu() {
  cout << "SQUIRTLE'S attack menu includes:" << endl;
  cout << "1.) Aqua Tail- this causes damage of 15 XP to the opponent!" << endl;
  cout << "2.) Skull Bash- this move causes damage of 25 XP to the opponent!" << endl;
  cout << "3.) Water Pulse- this move causes damage of 25 XP to the opponent!" << endl;
  cout << "4.) Hydro Pump- this move causes damage of 35 XP to the opponent!" << endl;
  cout << "Please enter the number of the move you'd like to play!" << endl;
}
int squirtle::attackOne() {
  return starter::subtractXP(35);
}
int squirtle::attackTwo(){
  return starter::subtractXP(25);
}
int squirtle::attackThree(){
  return starter::subtractXP(15);
}
int squirtle::attackFour(){
  return starter::subtractXP(25);
}