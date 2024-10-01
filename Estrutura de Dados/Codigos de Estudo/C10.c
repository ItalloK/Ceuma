#include <stdio.h>
#include <stdlib.h>

typedef struct Times{
    int camisas[2][2];
};

void CadTimes(int linhas, int colunas, struct Times **mat){
    for(int i = 0; i<linhas; i++){
        for(int j = 0; j<colunas; j++){
            for(int k = 0; k<2; k++){
                for(int l = 0; l<2; l++){
                    printf("Digite o numero da camisa para a posicao [%d][%d]: \n", k, l);
                    scanf("%d", &mat[i][j].camisas[k][l]);
                }
            }
        }
    }
}


void ExibirCamisas(int linhas, int colunas, struct Times **mat){
    for(int i = 0; i<linhas; i++){
        for(int j = 0; j<colunas; j++){
            for(int k = 0; k<2; k++){
                for(int l = 0; l<2; l++){
                    printf("Camisa: %d, posicao: [%d][%d]\n", mat[i][j].camisas[k][l], k, l);
                }
            }
        }
    }
}


void main(){
    struct Times **mat;
    int linhas = 0, colunas = 0;

    printf("Digite a quantidade de linhas para a matriz:\n");
    scanf("%d", &linhas);
    printf("Digite a quantidade de colunas para a matriz:\n");
    scanf("%d", &colunas);

    mat = malloc(linhas * sizeof(struct Times));
    if(mat == NULL){
        printf("Erro ao alocar\n");
        exit(1);
    }
    for(int i = 0; i<colunas; i++){
        mat[i] = malloc(colunas * sizeof(struct Times));
        if(mat[i] == NULL){
            printf("Erro ao alocar\n");
            exit(1);
        }
    }

    CadTimes(linhas, colunas, mat);
    ExibirCamisas(linhas, colunas, mat);

    free(mat);
    mat == NULL;
}