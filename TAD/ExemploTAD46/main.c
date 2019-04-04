#include <stdio.h>
#include <stdlib.h>
#include "Cubo.h"

int main()
{
    float area1, area2, area3;
    Cubo c;
    printf("Digite o valor da area 1: ");
    scanf("%f", &area1);
    printf("Digite o valor da area 2: ");
    scanf("%f", &area2);
    printf("Digite o valor da area 3: ");
    scanf("%f", &area3);

    c = criaCubo(area1,area2,area3);

    printf("O volume do cubo e %.2f: ", volumeCubo(c));
    printf("\nA area total do cubo e %.2f: ", areaCubo(c));
    return 0;
}
