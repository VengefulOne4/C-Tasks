#define _CRT_SECURE_NO_WARNINGS
#define MAX 20

#include <stdio.h>

//funkcia nacita cisla zo vstupu (z konzoly) do prvkov matice A reprezentovanej 2-rozmernym polom //A[MAX][MAX]

void NacitajMaticu(int r, int s, int A[MAX][MAX])
{
	int i, j; //'i' je riadkovy a 'j' stlpcovy index prvkov matice A ukladanych do pola A[MAX][MAX]
	for (i = 0; i < r; i++)
		for (j = 0; j < s; j++)
			scanf("%d", &A[i][j]);
}

//funkcia vypise prvky matice A (2-rozmerneho pola A[MAX][MAX]) na konzolu

void VypisMaticu(int r, int s, int A[MAX][MAX])
{
	int i, j;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < s; j++)
			printf("%5d", A[i][j]);
		printf("\n");
	}
}

//funkcia vytvori z matice C transponovanu maticu a ulozi ju do matice T

void TransponovanaMatica(int r, int s, int C[MAX][MAX], int T[MAX][MAX])
{
	int i, j;
	for (i = 0; i < s; i++)
	{
		for (j = 0; j < r; j++)
			T[i][j] = C[j][i];
	}
}

int SumaPrvkovMatice(int r, int s, int A[MAX][MAX]) 
{
	int sum = 0;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < s; j++)
			sum += A[i][j];

	return sum;
}

double PriemerPrvkovMatice(int r, int s, int** A)
{
	double priemer = (double)SumaPrvkovMatice(r, s, A) / (double)(r * s);
	return priemer;
}

int main()
{
	//'i' je riadkovy a 'j' stlpcovy index prvkov matice ulozenych v 2-rozmernych poliach A, B, TA, TB
	int riadok,
		stlpec, 
		i, j, 
		suma_A = 0, 
		suma_B = 0, 
		A[MAX][MAX], 
		B[MAX][MAX], 
		TA[MAX][MAX], 
		TB[MAX][MAX];

	printf("Nacitajte maticu nasledujucim sposobom: zadajte cislo riadkov, stlpcov matic, a dalej zadajte prvky matic\n");

	scanf("%d %d", &riadok, &stlpec);

	NacitajMaticu(riadok, stlpec, A);

	NacitajMaticu(riadok, stlpec, B);

	printf("A\n");

	VypisMaticu(riadok, stlpec, A);

	suma_A = SumaPrvkovMatice(riadok, stlpec, A);

	printf("suma A: %d\n", suma_A);

	//printf("Priemer A: %f\n", PriemerPrvkovMatice(riadok, stlpec, A));

	printf("B\n");

	VypisMaticu(riadok, stlpec, B);

	for (i = 0; i < riadok; i++)
		for (j = 0; j < stlpec; j++)
			suma_B += B[i][j];

	suma_B = SumaPrvkovMatice(riadok, stlpec, B);

	printf("suma B: %d\n", suma_B);

	//printf("Priemer B: %f\n", PriemerPrvkovMatice(riadok, stlpec, B));

	TransponovanaMatica(riadok, stlpec, A, TA);

	TransponovanaMatica(riadok, stlpec, B, TB);

	printf("TA\n");

	VypisMaticu(stlpec, riadok, TA); //pocet riadkov transponovanej matice TA = poctu stlpcov povodnej
	
	//matice A; pocet stlpcov TA = poctu riadkov A
	printf("suma TA: %d\n", suma_A);

	//printf("Priemer TA: %f\n", PriemerPrvkovMatice(riadok, stlpec, TA));

	printf("TB\n");

	VypisMaticu(stlpec, riadok, TB);

	printf("suma TB: %d\n", suma_B);

	//printf("Priemer TB: %f\n", PriemerPrvkovMatice(riadok, stlpec, TB));

	return 0;

}