#include "Cubo.h"
#include <stdio.h>
#include <stdlib.h>

    Cubo criaCubo(float a){
        Cubo c;
        c.a = a;
        return c;
    }

    float volumeCubo(Cubo c){
        return pow(c.a, 3));
    }

    float areaCubo(Cubo c){
        return 6 * (pow(c.a, 2));
    }
