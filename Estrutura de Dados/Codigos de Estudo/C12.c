#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int valor;
    struct No *prox;
}TNo;

void InserirNo(TNo **topo, int valor) {
    TNo *novo = malloc(sizeof(TNo));
    if (novo == NULL) {
        printf("Erro ao alocar memória\n");
        return;
    }
    novo->valor = valor;
    novo->prox = *topo;
    *topo = novo;
    printf("Valor inserido: %d\n", valor);
}

void RemoverNo(TNo **topo) {
    if (*topo == NULL) {
        printf("A pilha está vazia\n");
        return; 
    }
    TNo *aux = *topo;   
    int valor = aux->valor; 
    *topo = aux->prox;  
    free(aux);          
    printf("Valor removido: %d\n", valor);
}

void main(){
    TNo *topo = NULL;

    InserirNo(&topo, 10);
    InserirNo(&topo, 20);
    InserirNo(&topo, 30);
    InserirNo(&topo, 40);

    RemoverNo(&topo);
    
    while (topo != NULL) { 
        RemoverNo(&topo);
    }
}