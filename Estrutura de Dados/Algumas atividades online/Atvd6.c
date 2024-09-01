#include <stdio.h>

/* Questão: Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faca uma funcao que retorne a soma do 
dobro dos dois numeros lidos. A função deverá armazenar o dobro de A na propria variavel A e o dobro de B na 
propria variavel B. */

int main(){
    int a, b, *pA, *pB, res;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &a);
    printf("Digite o segundo numero: \n");
    scanf("%d", &b);
    pA = &a;
    pB = &b;
    res = CalcDobro(pA, pB);
    printf("Soma dos dobros e: [%d]\n", res);
    printf("Dobro de A [%d] e dobro de B [%d]\n", a, b);
    return 0;
}

int CalcDobro(int *pA, int *pB){
    int res;
    res = (*pA * 2) + (*pB * 2);
    *pA = (*pA * 2);
    *pB = (*pB * 2);
    return res;
}