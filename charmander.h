#include <iostream>
#include <iomanip>
#include "starter.h"
using namespace std;
#ifndef CHARMANDER_H
#define CHARMANDER_H
class charmander: public starter {
private:
int moves;

public:
charmander(string name,int XP); 
void attackMenu();
int attackOne();
int attackTwo();
int attackThree();
int attackFour();
};
#endif