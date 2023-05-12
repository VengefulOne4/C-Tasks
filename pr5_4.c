#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "math.h"

// 5.4
// V jazyku C vytvorte program, 
// ktorý najskôr načíta číslo n a 
// potom načíta n prirodzených čísiel do celočíselného poľa cisla. 
// Maximálny počet načítaných hodnôt môže byť 100. 
// Program vypočíta aritmetický priemer 
// odchýľok jednotlivých prvkov poľa cisla od 
// aritmetického priemeru hodnôt prvkov tohto poľa. 
// Program následne vypíše tento vypočítaný aritmetický priemer odchýľok s 
// presnosťou na 5 desatinných miest na konzolu.
// 
// Príklad vstupu do programu: 6 1 2 3 4 5 6
// Príklad výstupu z programu: 1.50000


// S polom
int main()
{
	int n, cisla[100], sum = 0;
	float curr, odch = 0;

	scanf("%d", &n);
	// n = 6;

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &cisla[i]);
		//cisla[i] = i + 1;
		sum += cisla[i];
	}

	float priemer = (float)sum / n;
	
	for (int i = 0; i < n; i++)
	{
		curr = (float)cisla[i] - priemer;
		if (curr > 0) odch += (float)cisla[i] - priemer;
		else odch -= (float)cisla[i] - priemer;
	}

	odch /= n;

	printf("%0.5f", odch);

	return 0;
}