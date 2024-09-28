#include <stdio.h>
#include <stdlib.h>

typedef struct Alunos{
    int idAluno;
    float notas[2], media;
}Alunos;

int main(){

    struct Alunos **a;
    int qnt = 5;
    
    a = malloc(qnt * sizeof(Alunos));
    if (a == NULL) {
        printf("Erro ao alocar memória");
        exit(1);
    }

    for(int i = 0; i<qnt; i++){
        a[i] = malloc(sizeof(Alunos));
        if (a[i] == NULL) {
            printf("Erro ao alocar memória");
            exit(1);
        }
        printf("Digite o ID do %dº aluno: \n", i+1);
        scanf("%d", &(*a[i]).idAluno);
        (*a[i]).media = 0;
        for(int j = 0; j<2; j++){
            printf("Digite a %dº nota do %dº aluno: \n", j+1, i+1);
            scanf("%f", &(*a[i]).notas[j]);
            (*a[i]).media += (*a[i]).notas[j] / 2;
        }   
        printf("Media do %dº aluno: %.2f\n", i+1, (*a[i]).media);
    }

    printf("\n\n\nMedia dos Alunos:\n");
    for(int i = 0; i<qnt; i++){
        printf("Media do aluno ID: [%d] e: %.2f\n", i, (*a[i]).media);
    }

    return 0;
}