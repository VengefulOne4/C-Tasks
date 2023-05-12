#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 1.1
// V predajni skrípt majú 3 skriptá, o ktoré mám záujem. 
// Cena skrípt je a, b, c Sk. 
// Navrhnite algoritmus, ktorý nájde najdrahšie skriptá; teda skriptá s maximálnou cenou.

int najdrahsi(int a, int b, int c)
{
	if (a > b)
		if (a > c) return a;
		else return c;
	else if (b > c) return b;
	else return c;
}

int main() {

    najdrahsi(8, 15, 11);
    return 0;
}