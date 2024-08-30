#include <stdio.h>

/*Questão: Escreva um programa que contenha duas variaveis inteiras. Compare seus endereços e exiba o maior endereço*/


int main(){

    int j,k, *pj, *pk;
    pj = &j, pk = &k;

    if(pj > pk){
        printf("PJ: %p\n", pj);
    }else{
        printf("PK: %p\n", pk);
    }

    return 0;
}