#pragma once
#include "Sportovec.h"
#include <fstream>
#include <string>

using namespace std;

class Slalom
{
private:
	Sportovec** zoznam = nullptr;
	int pocetSporotvcov = 0;
public:
	Slalom();
	Slalom(char* nazovSuboru);
	void zorad();
	void vymen(Sportovec& a, Sportovec& b);
	void vypis();
	~Slalom();

};

