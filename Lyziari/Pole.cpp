#include "Pole.h"

void Pole::pripocitajKonstatnuHodnotu(int cislo)
{
	if (this->aPole != nullptr)
	{
		for (int i = 0; i < aPocet; i++)
		{
			if (aPole[i] == 0)
			{
				aPole[i] += cislo;
			}

		}
	}
}

Pole::~Pole()
{
	delete[] aPole;
}
