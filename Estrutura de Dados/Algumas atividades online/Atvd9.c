#include <stdio.h>

/* Questão: Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas. Imprima o endereço de cada 
posiçao dessa matriz */

int main(){
    float mat[3][3];
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("Posicao: [%d][%d], endereco: [%p]\n", i, j, &mat[i][j]);
        }
    }
    return 0;
}