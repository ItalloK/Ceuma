#include <stdio.h>
#include <stdlib.h>

/* Quest: 1 - Usuario deve selecionar o tamanho da matriz e alocar ela dinamicamente
    2 - Deve ser calculado e exibido a media e o somatorio de todos os valores da matriz*/

int main(){

    int linhas, colunas, **matriz, somatorio;
    float media = 0;
    
    printf("Digite a quantidade de linhas que deseja para a matriz: \n");
    scanf("%d", &linhas);
    printf("Digite a quantidade de colunas que deseja para a matriz: \n");
    scanf("%d", &colunas);

    matriz = malloc(linhas * sizeof(int));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = malloc(colunas * sizeof(int));
    }
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o valor para o indice [%d] [%d]:\n", i,j);
            scanf("%d", &matriz[i][j]);
            media += (float)matriz[i][j] / (linhas*colunas);
            somatorio += matriz[i][j];
        }
    }
    printf("Media: %.2f, Somatorio: %d\n", media, somatorio);
    printf("Printando:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d - ", matriz[i][j]);
        }
    }

    return 0;
}