#include <stdio.h>

/* Questão: Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmetica de ponteiros, 
leia esse array do teclado e imprima o dobro de cada valor lido.*/

int main(){
    int vet[5];
    void *p;
    for(int i = 0; i<5; i++){
        p = &vet[i];
        printf("Digite um valor para a posicao [%d]: \n", i);
        scanf("%d", &*p);
        ImprimeValor(&*p);
    }
    return 0;
}

void ImprimeValor(int *p){
    int dobro = (*p * 2);
    printf("Valor: %d\n", dobro);
}