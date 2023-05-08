#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int prva_uloha(int a, int b, int c)
{
	if (a > b)
		if (a > c) return a;
		else return c;
	else if (b > c) return b;
	else return c;
}

int sesta_uloha(int a, int b, int c)
{
	if (a == b && a == c) printf("Vlozili ste TRI ROVNAKE cisla, nie je mozne zistit maximalne z 3 cisiel !!!\n");
	else if ((a == b || a == c || b == c)) printf("Vlozili ste DVE ROVNAKE cisla, nie je mozne zistit maximalne z 3 cisiel !!!\n");
	else
	{
		prva_uloha(a, b, c);
	}

}

int siedma_uloha(int a, int b)
{
	a > b ? printf("%d\n", a) : printf("%d\n", b);
}

int main()
{
	sesta_uloha(5, 5, 9);
	sesta_uloha(5, 5, 5);
	siedma_uloha(5, 5);
	siedma_uloha(5, 9);
}