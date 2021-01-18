#include "Slalom.h"

Slalom::Slalom()
{
}

Slalom::Slalom(char* nazovSuboru)
{
	if (nazovSuboru != nullptr)
	{
		ifstream input;
		input.open(nazovSuboru);
		if (input.is_open())
		{
			//zistim pocet riadkov aby som vedel aky velky zoznam vytvorit
			int pocetRiadkov = 0;
			string riadok;
			while (getline(input, riadok)) pocetRiadkov++;

			//nastavim kurzor opat na zaciatok suboru
			input.clear();
			input.seekg(0);

			//vytvorim si novy zoznam podla poctu studentov
			pocetSporotvcov = pocetRiadkov;
			zoznam = new Sportovec * [pocetRiadkov];

			//pomocne premenne na nacitanie zo suboru
			string meno;
			string priezvisko;
			int i = 0;


			//nacitanie zo suboru a naplnenie zoznamu studentami
			while (!input.eof())
			{
				input >> priezvisko >> meno;
				//random generovanie casov
				int randCas = rand() % 21 + 60;
				zoznam[i] = new Sportovec((char*)meno.c_str(), (char*)priezvisko.c_str(), randCas);
				i++;
			}
		}
		input.close();
	}
}

void Slalom::zorad()
{
	for (int i = 0; i < pocetSporotvcov - 1; i++)
	{
		for (int j = 0; j < pocetSporotvcov - i - 1; j++)
		{
			//zoradenie vzostupne
			if (this->zoznam[j]->getCas() > this->zoznam[j + 1]->getCas())
			{
				vymen(*this->zoznam[j], *this->zoznam[j + 1]);
			}
		}
	}
}

void Slalom::vymen(Sportovec& a, Sportovec& b)
{
	Sportovec c = a;
	a = b;
	b = c;
}

void Slalom::vypis()
{
	for (int i = 0; i < this->pocetSporotvcov; i++)
	{
		this->zoznam[i]->vypis();
	}
}

Slalom::~Slalom()
{
	for (int i = 0; i < this->pocetSporotvcov; i++)
	{
		delete this->zoznam[i];
	}
	delete[] this->zoznam;
}
