#include "bulbasaur.h"
bulbasaur::bulbasaur(string inputName, int inputXP)
    : starter(inputName, inputXP){}
void bulbasaur:: attackMenu() {
  cout << "BULBASAUR'S attack menu includes:" << endl;
  cout << "1.) Razor Leaf- this causes damage of 15 XP to the opponent!" << endl;
  cout << "2.) Seed Bomb- this move causes damage of 25 XP to the opponent!" << endl;
  cout << "3.) Double Edge- this move causes damage of 25 XP to the opponent!" << endl;
  cout << "4.) Solar Beam- this move causes damage of 35 XP to the opponent!" << endl;
  cout << "Please enter the number of the move you'd like to play!" << endl;
}
int bulbasaur:: attackOne() {
  return starter::subtractXP(15);
}
int bulbasaur::attackTwo(){
  return starter::subtractXP(25);
}
int bulbasaur::attackThree(){ 
  return starter::subtractXP(25);
}
int bulbasaur::attackFour(){
  return starter::subtractXP(35);
}