#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"

int gcd(int a, int b) {
    int c;
    while (a != b) {
        if (a > b) a -= b;
        else b -= a;
    }
    return a;
}

int main()
{
    int cislo1, cislo2;
    printf("Vlozte dva cisla: ");
    scanf("%d %d", &cislo1, &cislo2);
    if (cislo1 < 0) cislo1 = (-1) * cislo1;
    if (cislo2 < 0) cislo2 = (-1) * cislo2;
    printf("%d", gcd(cislo1, cislo2));
	return 0;
}