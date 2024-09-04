#include <stdio.h>

/* Questão: Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada 
posiçao desse array. */

int main(){
    float vet[10];
    for(int i = 0; i<10; i++){
        printf("Pos: [%d] endereco: [%p]\n", i, &vet[i]);
    }
    return 0;
}