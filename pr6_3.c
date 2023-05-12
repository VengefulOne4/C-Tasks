#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAX 20

// V jazyku C vytvorte program, 
// ktorý načíta prvky dvoch matíc A a B rozmeru r x s od používateľa z klávesnice. 
// Následne program vytvorí transponované matice TA a TB matíc A a B, 
// vypočíta sumu a aritmetický priemer prvkov matíc A, B, TA a TB. 
// Ďalej program vypíše matice A, B, TA, TB a 
// sumy a aritmetické priemery prvkov týchto matíc na konzolu. 
// Pre načítanie, výpis prvkov matíc, vytvorenie transponovaných matíc, 
// výpočet sumy a aritmetického priemeru prvkov matíc vytvorte funkcie s nasledovnými deklaráciami:
// 
// void NacitajMaticu(int r, int s, int A[MAX][MAX]);
// void VypisMaticu(int r, int s, int A[MAX][MAX]);
// 
// funkcia vytvorí z matice C transponovanú maticu a uloží ju do matice T
// void TransponovanaMatica(int r, int s, int C[MAX][MAX], int T[MAX][MAX]);
// 
// funkcia vypočíta a vráti sumu prvkov matice A
// int SumaPrvkovMatice(int r, int s, int A[MAX][MAX]);
// 
// funkcia vypočíta a vráti aritmetický priemer prvkov matice A
// double PriemerPrvkovMatice(int r, int s, int A[MAX][MAX]);
// 
// ktoré použite vo funkcii main.
// 
// Spôsob zadávania matíc do programu je nasledovný: 
// najskôr sa zadajú rozmery oboch matíc (r x s) a následne hodnoty ich prvkov. 
// Uvažujme r < 20, s < 20.
// 
// Čiže program načíta z klávesnice čísla r a s. 
// Potom načíta hodnoty prvkov matice A[r][s] a B[r][s]. 
// Na záver program vypíše na konzolu 
// prvky matíc A, B, TA, TB usporiadané do riadkov a stĺpcov a sumy a priemery ich prvkov.
// 
// Vstup programu :
// r s A[0][0] … A[r-1][s-1] B[0][0] …B[r-1][s-1]
// 
// Výstup programu:
// matica A 
// suma A 
// priemer A
//  
// matica B 
// suma B 
// priemer B
//  
// matica TA 
// suma TA 
// priemer TA 
// matica TB 
// suma TB 
// priemer TB
// 
// Príklad vstupu do programu:
// 4 3 1 2 3 4 5 6 7 8 9 10 11 12 12 11 10 9 8 7 6 5 4 3 2 1
// 
// 
// Príklad výstupu z programu:
// 
// A
// 1 2 3
// 4 5 6
// 7 8 9
// 10 11 12
// 
// suma A: 78
// priemer A: 6.50
// 
// B
// 12 11 10
// 9 8 7
// 6 5 4
// 3 2 1
// 
// suma B: 78
// priemer B: 6.50
// 
// TA
// 1 4 7 10
// 2 5 8 11
// 3 6 9 12
// 
// suma TA: 78
// priemer TA: 6.50
// 
// TB
// 12 9 6 3
// 11 8 5 2
// 10 7 4 1
// 
// suma TB: 78
// priemer TB: 6.50

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
        suma_A = 0, suma_B = 0,
        suma_TA = 0, suma_TB = 0,
        A[MAX][MAX], B[MAX][MAX],
        TA[MAX][MAX], TB[MAX][MAX];
    double priemer_A = 0,
        priemer_B = 0,
        priemer_TA = 0,
        priemer_TB = 0;

    scanf("%d %d", &riadok, &stlpec);
    NacitajMaticu(riadok, stlpec, A);
    NacitajMaticu(riadok, stlpec, B);

    printf("A\n");
    VypisMaticu(riadok, stlpec, A);
    suma_A = SumaPrvkovMatice(riadok, stlpec, A);
    priemer_A = PriemerPrvkovMatice(riadok, stlpec, A);
    // for(i = 0; i < riadok; i++)
    //     for(j = 0; j < stlpec; j++)
    //         suma_A += A[i][j];

    printf("suma A: %d\n", suma_A);
    printf("priemer A: %f\n", priemer_A);

    printf("B\n");
    VypisMaticu(riadok, stlpec, B);
    suma_B = SumaPrvkovMatice(riadok, stlpec, B);
    priemer_B = PriemerPrvkovMatice(riadok, stlpec, B);
    // for(i=0; i<riadok; i++)
    //     for(j=0; j<stlpec; j++)
    //         suma_B += B[i][j];

    printf("suma B: %d\n", suma_B);
    printf("priemer B: %f\n", priemer_B);

    TransponovanaMatica(riadok, stlpec, A, TA);
    TransponovanaMatica(riadok, stlpec, B, TB);
    printf("TA\n");

    VypisMaticu(stlpec, riadok, TA); //pocet riadkov transponovanej matice TA = poctu stlpcov povodnej
    //matice A; pocet stlpcov TA = poctu riadkov A
    suma_TA = SumaPrvkovMatice(stlpec, riadok, TA);
    priemer_TA = PriemerPrvkovMatice(stlpec, riadok, TA);

    printf("suma TA: %d\n", suma_TA);
    printf("priemer TA: %f\n", priemer_TA);


    printf("TB\n");

    VypisMaticu(stlpec, riadok, TB);
    suma_TB = SumaPrvkovMatice(stlpec, riadok, TB);
    priemer_TB = PriemerPrvkovMatice(stlpec, riadok, TB);

    printf("suma TB: %d\n", suma_TB);
    printf("priemer TB: %f\n", priemer_TB);

    return 0;

}