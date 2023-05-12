#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 4.5
// V jazyku C vytvorte program, 
// ktorý bude postupne zo vstupu načítavať hodnoty 
// do celočíselného poľa celecisla dovtedy, pokiaľ nenačíta 0. 
// Potom program vyberie z načítaných prvkov poľa celecisla nepárne čísla a
// vypočíta z nich sumu a priemer. 
// Vybrané prvky poľa celecisla s nepárnou hodnotou, 
// ich sumu a priemer program vypíše na konzolu. 
// Pri práci s nepárnymi prvkami poľa vstup použite ďalšie celočíselného pole.
// 
// 
// Príklad vstupu do programu:
// 9 1 4 3 13 10 12 8 0
// 
// Príklad výstupu z programu:
// neparne prvky pola 'celecisla' : 9 1 3 13
// suma neparnych prvkov pola 'celecisla' : 26
// priemer neparnych prvkov pola 'celecisla' : 4.33


int main()
{
    int celecisla[100];
    int curr, sum = 0, k = 0, p = 0, n = 0;
    float priemer = 0;
    do {
        scanf("%d", &curr);
        celecisla[k] = curr;
        k++;
    } while (curr != 0); 

    printf("neparne prvky pola 'celecisla' : ");

    for (int i = 0; i < k; i++)
    {
        if (celecisla[i] % 2)
        {
            printf("%d ", celecisla[i]);
            sum += celecisla[i];
            p++;
        }
    }
    
    priemer = (float)sum / p;

    printf("\nsuma neparnych prvkov pola 'celecisla' : %d", sum);
    printf("\npriemer neparnych prvkov pola 'celecisla' : %.2f", priemer);

    return 0;
}
