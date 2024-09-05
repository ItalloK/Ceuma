#include <stdio.h>

/*Para todas os programas, abaixo, utilize ponteiros para acessar e manipular indiretamente os valores contidos nos
mesmos.*/
/* Questão: Faça um programa para ler 20 números inteiros, calcular a média dos mesmos e exibir todos os números que
estiverem acima da média. Considere a média como sendo 7.0.*/

#define TAM 20
#define MEDIA 7.0

int main(){
    int vet[20], *p;
    float somatorio = 0;
    for(int i = 0; i<TAM; i++){
        p = &vet[i];
        printf("Digite um valor para a posicao [%d]: \n", i);
        scanf("%d", p);
        somatorio += *p;
    }
    float mediaFinal = somatorio/TAM;
    for(int i = 0; i<TAM; i++){
        p = &vet[i];
        if(*p > MEDIA){
            printf("Valor: [%.2f] posicao: [%d]\n", (float)*p, i);
        }
    }
    return 0;
}
