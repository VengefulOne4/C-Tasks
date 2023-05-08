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

//funkcia vypocita sucet matic A + B a vysledok ich suctu ulozi do matice C, cize vykona operaciu

//C = A + B

void ScitajMatice(int r, int s, int C[MAX][MAX], int A[MAX][MAX], int B[MAX][MAX])
{
	int i, j;
	for (i = 0; i < r; i++)
		for (j = 0; j < s; j++)
			C[i][j] = A[i][j] + B[i][j];

}

//funkcia odcita matice nasledovne: A - B a vysledok ich odcitania ulozi do matice C, cize vykona //operaciu C = A - B

void OdcitajMatice(int r, int s, int C[MAX][MAX], int A[MAX][MAX], int B[MAX][MAX])
{
	int i, j;
	for (i = 0; i < r; i++)
		for (j = 0; j < s; j++)
			C[i][j] = A[i][j] - B[i][j];
}

double AritmPriemerPrvkovNaDiagonale(int r, int s, int A[MAX][MAX]) 
{
	int i, j, k = r > s ? s : r;
	double sum = 0;
	for (i = 0; i < k; i++)
		sum += A[i][i];

	return sum / k;

}

int main()
{
	//'i' je riadkovy a 'j' stlpcovy index prvkov matic ulozenych v 2-rozmernych poliach A, B, C, D
	int riadok, stlpec, A[MAX][MAX], B[MAX][MAX], C[MAX][MAX], D[MAX][MAX];

	scanf("%d %d", &riadok, &stlpec);

	NacitajMaticu(riadok, stlpec, A);

	NacitajMaticu(riadok, stlpec, B);

	printf("Matica A:\n");

	VypisMaticu(riadok, stlpec, A);

	printf("Matica B:\n");

	VypisMaticu(riadok, stlpec, B);

	ScitajMatice(riadok, stlpec, C, A, B);

	printf("\n\nSucet matic A + B:\n");

	VypisMaticu(riadok, stlpec, C);

	OdcitajMatice(riadok, stlpec, D, A, B);

	printf("\nRozdiel matic A - B:\n");

	VypisMaticu(riadok, stlpec, D);

	double priemerA = AritmPriemerPrvkovNaDiagonale(riadok, stlpec, A);
	printf("\nPriemer je %f\n", priemerA);

	double priemerB = AritmPriemerPrvkovNaDiagonale(riadok, stlpec, B);
	printf("\nPriemer je %f\n", priemerB);

	return 0;

}