#include <stdio.h>
#include <stdlib.h>
#include "Cubo.h"

int main()
{
    float area;
    Cubo c;
    printf("Digite o valor da area: ");
    scanf("%f", &area);

    c = criaCubo(area);

    printf("O volume do cubo e %.2f: ", volumeCubo(c));
    printf("\nA area total do cubo e %.2f: ", areaCubo(c));
    return 0;
}
