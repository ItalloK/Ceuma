#include <stdio.h>
/*Para todas os programas, abaixo, utilize ponteiros para acessar e manipular indiretamente os valores contidos nos
mesmos.*/
/* Questão: Escreva um programa que tenha uma matriz de 12 elementos quaisquer informados pelo usuário e imprima
quantos elementos são pares e quantos são ímpares, bem como a soma dos números pares e a soma dos números ímpares. */

int main(){
    int mat[3][4], sumPar = 0, sumImpar = 0, *p, contPar = 0, contImpar = 0;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            p = &mat[i][j];
            printf("Digite um valor para a posicao [%d][%d]: \n", i, j);
            scanf("%d", p);
            if(*p % 2 == 0){
                sumPar+= *p;
                contPar++;
            }else{
                sumImpar += *p;
                contImpar++;
            }
        }
    }
    printf("Quantidade de pares: [%d], somatorio dos pares: [%d]\n",contPar, sumPar);
    printf("Quantidade de impares: [%d], somatorio dos impares: [%d]\n",contImpar, sumImpar);
    return 0;
}