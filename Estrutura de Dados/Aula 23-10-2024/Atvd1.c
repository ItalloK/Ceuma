#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int satisfacao;
    struct No* proximo;
} No;

void push(No** topo, int satisfacao) {
    No* novoNo = (No*)malloc(sizeof(No));
    if (novoNo == NULL) {
        printf("Erro de alocação de memória.\n");
        exit(1);
    }
    novoNo->satisfacao = satisfacao;
    novoNo->proximo = *topo;
    *topo = novoNo;
}

int pop(No** topo) {
    if (*topo == NULL) {
        printf("A pilha está vazia.\n");
        return -1;
    }
    int satisfacao = (*topo)->satisfacao;
    No* temp = *topo;
    *topo = (*topo)->proximo;
    free(temp);
    return satisfacao;
}

int isEmpty(No* topo) {
    return topo == NULL;
}

void main() {
    No* topo = NULL;
    int satisfacao, votos[5] = {0};

    printf("Pesquisa de Satisfação (1 a 5, onde 1 é totalmente insatisfeito e 5 é totalmente satisfeito).\n");
    printf("Digite uma nota ou 0 para encerrar:\n");

    while (1) {
        printf("Informe o índice de satisfação (1 a 5) ou 0 para encerrar: ");
        scanf("%d", &satisfacao);

        if (satisfacao == 0) { 
            break;
        }
        
        if (satisfacao < 1 || satisfacao > 5) {
            printf("Índice inválido! Insira um valor entre 1 e 5.\n");
            continue;
        }

        push(&topo, satisfacao);
        int voto = pop(&topo); 
        votos[voto - 1]++; 
    }

    int maiorVoto = 0, opiniaoVencedora = 1;
    for (int i = 0; i < 5; i++) {
        if (votos[i] > maiorVoto) {
            maiorVoto = votos[i];
            opiniaoVencedora = i + 1;
        }
    }

    printf("Opinião vencedora: %d com %d votos.\n", opiniaoVencedora, maiorVoto);
}
