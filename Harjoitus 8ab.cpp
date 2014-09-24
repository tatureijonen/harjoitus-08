/*
TATU REIJONEN - IIO14S2

Harjoitus 8 (palautus vko 41)
Tee ohjelma, joka tulostaa annetut kolme lukua suuruus-
järjestyksessä (pienimmästä suurimpaan) näytölle
(katso harj. 1 suunnitelma)
a) käytä kokonaislukuja
b) käytä liukulukuja
*/


#include <iostream>
using namespace std;
void main(void)

{

	//int luku1, luku2, luku3; //a
	float luku1, luku2, luku3; //b

	cout << "Syota luku1: ";
	cin >> luku1;

	cout << "Syota luku2: ";
	cin >> luku2;

	cout << "Syota luku3: ";
	cin >> luku3;

	if (luku1 <= luku2 && luku2 <= luku3)
		cout << luku1 << " , " << luku2 << " , " << luku3 << "  ";

	if (luku1 <= luku3 && luku3 <= luku2)
		cout << luku1 << " , " << luku3 << " , " << luku2 << "  ";

	if (luku3 <= luku2 && luku2 <= luku1)
		cout << luku3 << " , " << luku2 << " , " << luku1 << "  ";

	if (luku3 <= luku1 && luku1 <= luku2)
		cout << luku3 << " , " << luku1 << " , " << luku2 << "  ";

	if (luku2 <= luku1 && luku1 <= luku3)
		cout << luku2 << " , " << luku1 << " , " << luku3 << "  ";

	if (luku2 <= luku3 && luku3 <= luku1)
		cout << luku2 << " , " << luku3 << " , " << luku1 << "  ";

}