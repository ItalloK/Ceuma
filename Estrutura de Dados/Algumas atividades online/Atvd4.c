#include <stdio.h>

/* Questão: Faça um programa que leia 2 valores inteiros e chame uma funçao que receba estas 2 variaveis e troque o 
seu conteudo, ou seja, esta função é chamada passando duas variaveis A e B por exemplo e, após a execução da função, 
A contera o valor de B e B tera o valor de A.*/

int main(){

    int A, B, *pA, *pB;

    printf("Digite o primeiro valor: \n");
    scanf("%d", &A);
    printf("Digite o segundo valor: \n");
    scanf("%d", &B);

    pA = &A;
    pB = &B;

    FuncTrocarValores(pA, pB);

    printf("Valor de A: [%d] e valor de B: [%d]", A, B);

    return 0;
}


void FuncTrocarValores(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}