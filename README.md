<div align="center">
	<a href="https://www.uniza.sk/index.php/en/" target="_blank">
		<img src="https://img.shields.io/badge/university-University%20of%20Žilina-2B3A65.svg" alt="university">
	</a>
	<a href="https://www.fri.uniza.sk/en/" target="_blank">
		<img src="https://img.shields.io/badge/faculty-Faculty%20of%20Management%20Science%20and%20Informatics-FECE50.svg" alt="faculty">
	</a>
  <a href="https://vzdelavanie.uniza.sk/vzdelavanie/plany.php" target="_blank">
		<img src="https://img.shields.io/badge/program-Informatics-00a9e0.svg" alt="faculty">
	</a>
</div>

<h2 align="center">
	University of Žilina<br>Faculty of Management Science and Informatics
</h2>

# INF3 skúška 14.1.2021 8:00
## A. Trieda
V nasledujúcom kóde:
```cpp
class Pole
{
private:
	unsigned aPocet = 0;
	int* aPole = nullptr;
public:
	Pole(unsigned pocet = 0) : aPocet(pocet), aPole(aPocet != 0 ? new int[aPocet] : nullptr) {}
};
```
doplňte metódu alebo operátor, ktorý ku každému prvku poľa s hodnotou 0 pripočíta zadanú konštantnú hodnotu.

## B. Aplikácia
Vytvorte projekt pre konzolovú aplikáciu (1b), ktorá:

- (3 b) vytvorí triedu **Sportovec** a

- (4 b) z textového súboru načíta zoznam mien lyžiarov a vytvorí ich zoznam. Každý riadok obsahuje nasledujúce údaje (jednotlivé údaje v riadku sú oddelené medzerou):

      Priezvisko
      
      Meno

- (2 b) Meno vstupného súboru sa bude zadávať z klávesnice.

- (4 b) Každému lyžiarovi vygenerujte dosiahnutý čas v sekundách, z intervalu <60,80>

- (6 b) Na konzolu vypíšte zoznam lyžiarov, usporiadaný podľa dosiahnutého času rastúco:

	  Priezvisko

	  Meno

	  Dosiahnutý čas v tvare MM:SS (MM - minúty, SS - sekundy)

## Inštrukcie
Program vytvorte vo vývojovom prostredí Visual .net. Po vypracovaní riešenia do ZIP súboru spakujte súbory:

- všetky súbory s príponou .h (hlavičkové súbory)

- všetky súbory s príponou .cpp (zdrojové súbory)

- súbor s príponou .sln

- súbor s príponou .vcxproj

Ako meno ZIP súboru použite svoje *PriezviskoMeno*. Implementované metódy musia byť otestované.
Neotestovanie metódy znižuje počet bodov o 10%. Vytvorená aplikácia musí byť syntakticky správna 
(t.j. preložiteľná, bez Error chýb). Nepreložiteľná aplikácia znižuje počet dosiahnutých bodov o 50%.