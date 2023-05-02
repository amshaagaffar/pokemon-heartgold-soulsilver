#include <iostream>
#include <iomanip>
#include "starter.h"
using namespace std;
#ifndef BULBASAUR_H
#define BULBASAUR_H
class bulbasaur: public starter {
public:
bulbasaur(string name, int XP);
int attackOne();
int attackTwo();
int attackThree();
int attackFour();
void attackMenu();

private:
int moves;

};
#endif