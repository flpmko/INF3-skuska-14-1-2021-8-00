#pragma once
#include <iostream>

class Sportovec
{
private:
	char* priezvisko = nullptr;
	char* meno = nullptr;
	int cas = 0;
public:
	Sportovec();
	Sportovec(char* paPriezvisko, char* paMeno, int paCas);
	Sportovec(const Sportovec& zdroj);
	Sportovec& operator = (const Sportovec& zdroj);
	void vypis();
	inline int getCas() { return this->cas; };
	~Sportovec();
};

