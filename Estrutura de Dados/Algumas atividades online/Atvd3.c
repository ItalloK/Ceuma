#include <stdio.h>

/* Questão: Escreva um programa que contenha duas variaveis inteiras. Leia essas variaveis do teclado. 
Em seguida, compare seus endereços e exiba o conteudo do maior endereço. */

int main(){
    
    int p, s, *ps, *pp;

    printf("Digite o [1º] valor inteiro: \n");
    scanf("%d", &p);
    printf("Digite o [2º] valor inteiro: \n");
    scanf("%d", &s);

    pp = &p;
    ps = &s;

    if(pp > ps){
        printf("O endereco do primeiro e maior... -> %p, segundo -> %p", pp, ps);
    }else{
        printf("O endereco do segundo e maior... -> %p, primeiro -> %p", ps, pp);
    }

    return 0;
}