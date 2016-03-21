#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
#ifndef Dice_H
#define Dice_H
#endif Dice_H

class Dice
{
public:
	//default constuctor
	Dice();
	//destructor
	~Dice();

	void Rolll();
	void Display();
	void Reset();
private:
	//member functions
	int RollCount();
	int totalSscore();
};

