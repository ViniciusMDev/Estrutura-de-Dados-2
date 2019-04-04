#ifndef CUBO_H_INCLUDED
#define CUBO_H_INCLUDED


    typedef struct cubo{
    float a1, a2, a3;

    }Cubo;

    Cubo criaCubo(float a1, float a2, float a3);

    float volumeCubo (Cubo cubo);

    float areaCubo (Cubo cubo);


#endif // CUBO_H_INCLUDED
