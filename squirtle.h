#include <iostream>
#include <iomanip>
#include "starter.h"
using namespace std;
#ifndef SQUIRTLE_H
#define SQUIRTLE_H

class squirtle: public starter {
private:
int moves;

public:
squirtle(string name,int XP); 
void attackMenu();
// int HydroPump(); 
// int SkullBash(); 
// int AquaTail();
// int WaterPulse();
int attackOne();
int attackTwo();
int attackThree();
int attackFour();
};

#endif