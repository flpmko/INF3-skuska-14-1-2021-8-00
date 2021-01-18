#include "Sportovec.h"
#include "Slalom.h"
#include <time.h>

#define _CRT_SECURE_NO_DEPRECATE


int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF); //na kontrolu memory leakov
	srand(time(NULL)); //inicializacia random generatora

	Slalom grandprix((char*)"data.txt");
	grandprix.zorad();
	grandprix.vypis();

	return 0;
}