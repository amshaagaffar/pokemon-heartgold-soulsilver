#include <iostream>
#include <iomanip>
using namespace std;
#include <string>
#include <fstream>

#ifndef STARTER_H
#define STARTER_H
class starter {
public:
starter(string name,int XP); 
string getName(); 
void setName(string); 
int getXP();
int subtractXP(int damage);
void updateXP();
//void saveStats(string);
void setXP(int);
void mainMenu();
virtual int attackOne()=0;
virtual int attackTwo() = 0;
virtual int attackThree() = 0;
virtual int attackFour() = 0;
virtual void attackMenu() = 0;





private:
string filename; 
string name;
int XP = 100;
};
#endif