#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED


typedef struct data{
    int dia, mes, ano;

}Data;

    Data criaData(int dia, int mes, int ano);

    void imprimeData(Data data);

    void eBissexto(Data data);



#endif // DATA_H_INCLUDED
