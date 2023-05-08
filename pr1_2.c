#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int prva_uloha(int a, int b, int c)
{
	if (a > b)
		if (a > c) return a;
		else return c;
	else if (b > c) return b;
	else return c;
}

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
	//druha_uloha(5 /*, 2, 5, 4, 9, 8*/);
	//tretia_uloha(5);
	//stvrta_uloha(5, 3);
	//piata_uloha(5, 2);
	//sesta_uloha(5, 5, 8);
	//sesta_uloha(5, 5, 5);
	siedma_uloha(5, 9);

	return 0;

}