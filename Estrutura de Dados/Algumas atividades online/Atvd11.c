#include <stdio.h>

/* Questão: Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array do teclado e imprima 
o endereco das posicoes contendo valores pares. */

int main(){
    int vet[5], cont = 0;
    for(int i = 0; i<5; i++){
        printf("Digite um valor para a posicao [%d]: \n", i);
        scanf("%d", &vet[i]);
    }
    printf("Enderecos e posicoes dos numeros pares: \n");
    for(int i = 0; i<5; i++){
        if(vet[i] % 2 == 0){
            printf("Posicao: [%d], endereco: [%p]\n", i, &vet[i]);
            cont++;
        }
    }
    if(cont == 0){
        printf("Nao ha nenhum numero par\n");
    }
    return 0;
}