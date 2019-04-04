#include "Cubo.h"
#include <stdio.h>
#include <stdlib.h>

    Cubo criaCubo(float a1, float a2, float a3){
        Cubo c;
        c.a1 = a1;
        c.a2 = a2;
        c.a3 = a3;
        return c;
    }

    float volumeCubo(Cubo c){
        return c.a1 * c.a2 * c.a3;
    }

    float areaCubo(Cubo c){
        return 6*(c.a1*c.a2);
    }
