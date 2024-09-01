#include <stdio.h>

/* Questão: Faca um programa que leia dois valores inteiros e chame uma funcao que receba estes 2 valores de entrada e 
retorne o maior valor na primeira variavel e o menor valor na segunda variavel. Escreva o conteudo das 2 variaveis na tela.*/

int main(){
    int a,b, *pa, *pb;
    printf("Digite o primeiro valor: \n");
    scanf("%d", &a);
    printf("Digite o segundo valor: \n");
    scanf("%d", &b);
    pa = &a;
    pb = &b;
    TrocarValores(pa, pb);
    printf("Valor de A [%d] e valor de B [%d]", a, b);
    return 0;
}

void TrocarValores(int *pa, int *pb){
    int tmp;
    if(*pa < *pb){
        tmp = *pa;
        *pa = *pb;
        *pb = tmp;
    }
}