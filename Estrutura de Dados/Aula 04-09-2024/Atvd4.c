#include <stdio.h>
/*Para todas os programas, abaixo, utilize ponteiros para acessar e manipular indiretamente os valores contidos nos
mesmos.*/
/* Questão: Crie uma matriz quadrada e a inicialize de forma que seja atribuído o valor 2 quando os índices forem iguais e -3
quando os índices forem diferentes. Calcule e imprima na tela apenas o somatório da diagonal principal. */

int main(){

    int mat[3][3], total = 0, *p;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            p = &mat[i][j];
            if(i == j){
                *p = 2;
            }
            if(i != j){
                *p = -3;
            }
        }
    }    
    for (int i = 0; i < 3; i++) {
        p = &mat[i][i];
        total += *p;
    }
    printf("Somatorio da diagonal principal: [%d]\n", total);
    return 0;
}