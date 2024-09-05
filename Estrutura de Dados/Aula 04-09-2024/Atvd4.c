#include <stdio.h>
/*Para todas os programas, abaixo, utilize ponteiros para acessar e manipular indiretamente os valores contidos nos
mesmos.*/
/* Questão: Crie uma matriz quadrada e a inicialize de forma que seja atribuído o valor 2 quando os índices forem iguais e -3
quando os índices forem diferentes. Calcule e imprima na tela apenas o somatório da diagonal principal. */

int main(){

    int mat[3][3], total = 0;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            if(i == j){
                mat[i][j] = 2;
            }
            if(i != j){
                mat[i][j] = -3;
            }
        }
    }    
    for (int i = 0; i < 3; i++) {
        total += mat[i][i];
    }
    printf("Somatorio da diagonal principal: [%d]\n", total);
    return 0;
}