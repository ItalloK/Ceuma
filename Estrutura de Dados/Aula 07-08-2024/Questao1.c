/* Questão: Escreva um programa que leia uma matriz de inteiros ( Maximo 30x30 ) e determine o menor elemento
de cada linha e a sua posição, e o maior elemento de toda a matriz. Caso haja repetições desse maior numero, considere
a linha com menor indice. Print os resultados na tela. */

#include <stdio.h>


int main() {

    int matriz[3][3] = {{64,6,3},{8,5,6},{15,199,9}};
    int posicaoElemento[2]; 
    int menor;

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            if(j == 0){
                menor = matriz[i][j];
                posicaoElemento[0] = i;
                posicaoElemento[1] = j;
            }
            if(matriz[i][j] < menor){
                menor = matriz[i][j];
                posicaoElemento[0] = i;
                posicaoElemento[1] = j;
            }
        }
        printf("O menor elemento da linha %d e: %d, posicao: %d-%d\n", i, menor, posicaoElemento[0],posicaoElemento[1]);
        posicaoElemento[0] = -1;
        posicaoElemento[1] = -1;
    }

    int maiorElemento; 

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            if(i == 0 && j == 0){
                maiorElemento = matriz[i][j];
            }
            if(matriz[i][j] > maiorElemento){
                maiorElemento = matriz[i][j];
            }
        }
    }

    printf("Maior elemento de toda a maitrz e: %d\n", maiorElemento);
    // ele ja considera o menor indice do maior valor pois ele verifica apenas se o ele é maior e não maior e igual.
    return 0;
}