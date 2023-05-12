#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// 4.3
// V jazyku C vytvorte program, ktorý bude postupne zo vstupu načítavať hodnoty do celočíselného poľa cisla dovtedy, pokiaľ nenačíta 0. Maximálny počet načítaných hodnôt môže byť 100. Program nájde v poli cisla prvok s maximálnou a minimálnou hodnotou a vypočíta priemer prvkov tohto poľa. Výsledky výpočtov program vypíše na konzolu.

// Príklad vstupu do programu:
// 7 1 4 3 13 10 12 8 0
// Príklad výstupu z programu:

// min. : 1

// max. : 13

// priemer : 7.25

int main()
{
	int cisla[100], max, min, j, i = 0;
	double priemer, suma = 0;
	do //nacitanie hodnot z konzoly do jednotlivych prvkov pola 'cisla'
	{
		scanf("%d", &cisla[i]);
	} while (cisla[i++] != 0);
	i--; //pocet nacitanych cisiel je i-1, pretoze do pola nacitanu 0 chapeme ako ukoncovaci znak, nie ako
	//sucast prvkov pola 'cisla'
	max = min = cisla[0];
	for (j = 0; j < i; j++)
	{
		if (max < cisla[j])
			max = cisla[j];
		if (min > cisla[j])
			min = cisla[j];
		suma += cisla[j];
	}
	priemer = suma / i;
	printf("\nmin. :%d\nmax. :%d\npriemer:%.2f\n", min, max, priemer);
	return 0;
}