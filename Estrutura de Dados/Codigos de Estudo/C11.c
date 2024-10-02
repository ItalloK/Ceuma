#include <stdio.h>
#include <stdlib.h>

void main(){
    int tam, oldTam, *vet;
    printf("Digite o tamanho do vetor que deseja: \n");
    scanf("%d", &tam);
    oldTam = tam;

    vet = malloc(tam * sizeof(int));
    if(vet == NULL){
        printf("Não foi possivel alocar a memoria\n");
        exit(1);
    }

    for(int i = 0; i<tam; i++){
        printf("Digite o %dº valor: \n", i+1);
        scanf("%d", &vet[i]);
    }

    printf("Valores digitados: \n");
    for(int i = 0; i<tam; i++){
        printf("[%d] ", vet[i]);
    }
    printf("\n");
    printf("Deseja alterar o tamanho do vetor? se sim, digite o valor, se não, digite -1...:\n");
    scanf("%d", &tam);
    if(tam <= 0){
        printf("Não sera realocado.");
        exit(1);
    }else{
        vet = realloc(vet, tam * sizeof(int));
    }

    for(int i = 0; i<tam; i++){
        printf("Digite o %dº valor: \n", i+1);
        scanf("%d", &vet[i]);
    }
    printf("Valores digitados: \n");
    for(int i = 0; i<tam; i++){
        printf("[%d] ", vet[i]);
    }

    free(vet);
    vet = NULL;
}