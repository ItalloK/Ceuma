#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno{
    int id;
    float notas[4];
};

void PreencherDados(int linhas, int colunas, struct Aluno **a){
    for(int i = 0; i<linhas; i++){
        for(int j = 0; j<colunas; j++){
            printf("Digite o ID do aluno: \n");
            scanf("%d", &(a[i][j]).id);
            for(int k = 0; k<4; k++){
                printf("Digite a %dº nota: ", k+1);
                scanf("%f", &(a[i][j]).notas[k]);
            }
        }
    }
}

void ExibirDados(int linhas, int colunas, struct Aluno **a){
    for(int i = 0; i<linhas; i++){
        for(int j = 0; j<colunas; j++){
            printf("ID do aluno: %d\n", (a[i][j]).id);
            printf("Notas do aluno: \n");
            for(int k = 0; k<4; k++){
                printf("%dº nota: %.2f\n", k+1, a[i][j].notas[k]);
            }
        }
    }
}

void main(){
    int linhas, colunas, **mat;
    
    printf("Digite a quantidade de linhas:\n");
    scanf("%d", &linhas);
    printf("Digite a quantidade de colunas:\n");
    scanf("%d", &colunas);

    mat = malloc(linhas * sizeof(struct Aluno));
    for(int i = 0; i<colunas; i++){
        mat[i] = malloc(colunas * sizeof(struct Aluno));
    }
    for(int i = 0; i<linhas; i++){
        for(int j = 0; j<colunas; j++){
            if(mat[i][j] == NULL){
                printf("Não foi possivel alocar a memoria\n");
                exit(1);
            }
        }
    }

    PreencherDados(linhas, colunas, mat);
    ExibirDados(linhas, colunas, mat);
}