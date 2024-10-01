#include <stdio.h>
#include <stdlib.h>

typedef struct Jogador{
    int numCamisa;
    int tempoContrato;
};

void CadastrarJogador(int linhas, int colunas, struct Jogador **jog){
    int cont = 0;
    for(int i = 0; i<linhas; i++){
        for(int j = 0; j<colunas; j++){
            printf("Digite o numero da camisa do %dº jogador: \n", cont+1);
            scanf("%d", &jog[i][j].numCamisa);
            printf("Digite o tempo de contrato ( em anos ) para o jogador camisa %d: \n", jog[i][j].numCamisa);
            scanf("%d", &jog[i][j].tempoContrato);
            cont++;
        }
    }
    ExibirJogadores(linhas, colunas, jog);
}

void ExibirJogadores(int linhas, int colunas, struct Jogador **jog){
    for(int i = 0; i<linhas; i++){
        for(int j = 0; j<colunas; j++){
            printf("Numero camisa: %d, tempo de contrato: %d anos.\n", jog[i][j].numCamisa, jog[i][j].tempoContrato);
        }
    }
}

void main(){
    int linhas = 0, colunas = 0;
    struct Jogador **mat;
    do{
        printf("Digite a quantidade de linhas para a matriz: \n");
        scanf("%d", &linhas);
    }while(linhas < 0);
    do{
        printf("Digite a quantidade de colunas para a matriz: \n");
        scanf("%d", &colunas);
    }while(colunas < 0);

    mat = malloc(linhas * sizeof(struct Jogador *));
    if(mat == NULL){
        printf("Erro ao alocar memoria \n");
        exit(1);
    }
    for(int i = 0; i<colunas; i++){
        mat[i] = malloc(colunas * sizeof(struct Jogador));
        if(mat[i] == NULL){
            printf("Erro ao alocar memoria \n");
            exit(1);
        }
    }

    CadastrarJogador(linhas, colunas, mat);

    free(mat);
    mat == NULL;
}