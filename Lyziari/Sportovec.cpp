#include "Sportovec.h"

Sportovec::Sportovec()
{
}

Sportovec::Sportovec(char* paPriezvisko, char* paMeno, int paCas)
{
	if (paPriezvisko && *paPriezvisko && paMeno && *paMeno)
	{
		priezvisko = new char[strlen(paPriezvisko) + 1];
		strcpy(priezvisko, paPriezvisko);

		meno = new char[strlen(paMeno) + 1];
		strcpy(meno, paMeno);

		cas = paCas;
	}
}

Sportovec::Sportovec(const Sportovec& zdroj)
{
	if (this != &zdroj)
	{
		priezvisko = new char[strlen(zdroj.priezvisko) + 1];
		strcpy(priezvisko, zdroj.priezvisko);

		meno = new char[strlen(zdroj.meno) + 1];
		strcpy(meno, zdroj.meno);

		cas = zdroj.cas;
	}
}

Sportovec& Sportovec::operator=(const Sportovec& zdroj)
{
	if (this != &zdroj)
	{
		Sportovec::~Sportovec();

		priezvisko = new char[strlen(zdroj.priezvisko) + 1];
		strcpy(priezvisko, zdroj.priezvisko);

		meno = new char[strlen(zdroj.meno) + 1];
		strcpy(meno, zdroj.meno);

		cas = zdroj.cas;
	}
	return *this;
}

void Sportovec::vypis()
{
	printf("%s %s %d:%02d\n", this->priezvisko, this->meno, this->cas / 60, this->cas % 60);
}

Sportovec::~Sportovec()
{
	delete[] this->priezvisko;
	delete[] this->meno;
	this->cas = 0;
}
