#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "math.h"

// S polom
int main()
{
	int n, cisla[100], sum = 0;
	float curr, odch = 0;

	//scanf("%d", &n);
	n = 6;

	for (int i = 0; i < n; i++)
	{
		//scanf("%d", &cisla[i]);
		cisla[i] = i + 1;
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