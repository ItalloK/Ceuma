#include <stdio.h>
/*Para todas os programas, abaixo, utilize ponteiros para acessar e manipular indiretamente os valores contidos nos
mesmos.*/
/* Questão: Dado um conjunto de 20 valores reais armazenados em um vetor, faça um algoritmo que:
a) Imprima os valores que não são negativos.
b) Calcule e imprima a média dos valores negativos.*/

int main(){

    float vet[] = {-15.7, 12.4, -8.9, 5.1, -3.6, 18.3, -19.5, 7.8, -13.2, 2.5, 
    10.9, -17.4, 0.0, -6.1, 9.7, -11.8, 14.6, -2.9, 16.3, -20.0};
    float *p, mediaNegativa = 0;
    int cont = 0;
    for(int i = 0; i<20; i++){
        p = &vet[i];
        if(*p >= 0){
            printf("Valor: [%.2f], posicao: [%d] \n", *p, i);
        }
        if(*p < 0){
            mediaNegativa += *p;
            cont++;
        }
    }
    if(cont > 0){
        printf("Media dos negativos: [%.2f]", mediaNegativa/cont);
    }
    
    return 0;
}