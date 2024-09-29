#include <stdio.h>
#include <stdlib.h>

/* Questão: Faça um programa que leia um valor n e crie dinamicamente um vetor de n elementos e passe esse vetor para 
uma função que vai ler os elementos desse vetor. Depois, no programa principal, o vetor preenchido deve ser impresso. 
Além disso, antes de finalizar o programa, deve-se liberar a área de memória alocada. */

void LerElementos(int tam, int *vet){
    for(int i = 0; i<tam; i++){
        printf("Digite o %dº elemento: \n", i+1);
        scanf("%d", &vet[i]);
    }
}

void main(){
    int qntElementos, *vetor;
    printf("Digite o tamanho do vetor que deseja criar: \n");
    scanf("%d", &qntElementos);
    vetor = malloc(qntElementos * sizeof(int));
    if(vetor == NULL){
        printf("Erro ao alocar memoria\n");
        exit(1);
    }
    LerElementos(qntElementos, vetor);
    printf("Valores lidos:\n");
    for(int i = 0; i<qntElementos; i++){
        printf("%dº val: %d\n", i+1, vetor[i]);
    }
    free(vetor);
    vetor = NULL;
}
