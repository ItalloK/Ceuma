/* Questão: Escreva um programa que leia uma matriz quadrada ( Maximo 50x50 ) e escreva a média dos elementos da diagonal
principal. Escreva tambem quais os elementos são maiores do que um valor informado pelo usuario */

#include <stdio.h>

int main() {

    int matriz[3][3];
    int soma = 0, valorDigitado;
    float media = 0.0;

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("Digite um valor para a posicao: %d %d\n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < 3; i++) {
        soma += matriz[i][i];
    }
    media = soma/3;

    printf("A media dos elementos da diagonal e: %.2f\n", media);

    printf("Digite um numero para buscar valores maiores que ele: \n");
    scanf("%d", &valorDigitado);

    printf("Valores maiores que o informado pelo usuario: ");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            if(matriz[i][j] > valorDigitado){
                printf("%d ", matriz[i][j]);
            }            
        }
    }
    return 0;
}