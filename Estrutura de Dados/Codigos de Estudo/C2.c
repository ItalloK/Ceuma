#include <stdio.h>
#include <stdlib.h>

typedef struct dma{
    int dia;
    int mes;
    int ano;
};



void main(){
    struct dma *p;
    struct dma x;
    p = &x;

    p -> dia = 10;
    (*p).mes = 03;

    printf("Dia: %d\n", p->dia);
    printf("Mês: %d", (*p).mes);

}