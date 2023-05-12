#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 1.2
// Vytvorte program v jazyku C, 
// ktorý po vytvorení, zostavení a spustení vypíše do konzoly text 
// "Ahoj, ake je cislo Tvojho kruzku? ". 
// Číslo krúžku XXX, ktoré vloží do konzoly ako odpoveď programu jeho používateľ, 
// si program uloží do premennej, na nový riadok vypíše text "Kruzok XXX je dobry v programovani." a skončí.

void cislo_kruzku()
{
	char ckruzku[10]; //premenna, znakove pole, pre ulozenia c. kruzku
	printf("Ahoj, ake je cislo Tvojho kruzku? ");
	scanf("%s", ckruzku); //nacitanie cisla kruzku od pouzivatela
	printf("\nKruzok %s je dobry v programovani.\n", ckruzku); //vypisanie odpovede programu
}

int main() {
	cislo_kruzku();

	return 0;
}

/*
int druha_uloha(int n)
{
	int sum = 0;
	int curr = 0;
	for (int i = 0; i < n; i++) 
	{
		scanf(&curr);
		sum += curr;
	}
	return sum;
}

int tretia_uloha(int n) 
{
	int sum = 0;
	int curr;
	for (int i = 0; i < n; i++)
	{
		scanf(&curr);
		sum += curr;
	}
	return sum;
}

int stvrta_uloha(int a, int b)
{
	int res = a;
	for (int i = 0; i < b; i++)
	{
		res *= a;
	}
	return res;
}

int piata_uloha(int a, int b)
{
	int res = a;
	for (int i = 0; i < b; i++)
	{
		res += a;
	}
	return res;
}

int sesta_uloha(int a, int b, int c)
{
	if (a == b && a == c) printf("Vlozili ste TRI ROVNAKE cisla, nie je mozne zistit maximalne z 3 cisiel !!!");
	else if ((a == b || a == c || b == c) ) printf("Vlozili ste DVE ROVNAKE cisla, nie je mozne zistit maximalne z 3 cisiel !!!");
	else
	{
		prva_uloha(a, b, c);
	}
	
}

int siedma_uloha(int a, int b)
{
	a > b ? printf("%d", b) : printf("%d", a);
}

int main()
{
	//prva_uloha(8, 15, 11);
	//druha_uloha(5, 2, 5, 4, 9, 8);
	//tretia_uloha(5);
	//stvrta_uloha(5, 3);
	//piata_uloha(5, 2);
	//sesta_uloha(5, 5, 8);
	//sesta_uloha(5, 5, 5);
	siedma_uloha(5, 9);

	return 0;

}
*/