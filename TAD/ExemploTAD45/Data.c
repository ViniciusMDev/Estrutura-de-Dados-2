#include "Data.h"
#include <stdio.h>
#include <stdlib.h>

    Data criaData(int dia, int mes, int ano){
        Data d;
        d.dia = dia;
        d.mes = mes;
        d.ano = ano;
        return d;
    }

    void imprimeData(Data data){
        printf("Data: %d/%d/%d \n", data.dia, data.mes, data.ano);

    }

    void eBissexto(Data data){
        if(data.ano % 4 == 0 || (data.ano % 100 !=0 && data.ano % 400 == 0)){
            printf("O ano e bissexto");
        }
        else{
            printf("O ano nao e bissexto");
        }
    }
