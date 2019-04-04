#include <stdio.h>
#include <stdlib.h>
#include "Data.h"

int main()
{
    Data c;
    int day, month, year;

    printf("Digite o dia: ");
    scanf("%d", &day);
    printf("Digite o mes: ");
    scanf("%d", &month);
    printf("Digite o ano: ");
    scanf("%d", &year);
    c = criaData(day,month,year);
    imprimeData(c);
    eBissexto(c);

    return 0;
}
