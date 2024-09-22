#include <stdio.h>
#include <stdlib.h>

/* Pagina 42 */
/* Questão: Faça um programa para solicite em tempo de execução uma quantidade de números que o usuário deve informar. 
Após isso, o usuário informa estes números, calcula a média dos mesmos e exibe todos os números que estiverem acima da média. 
Considere a média como sendo 7.0 */

int main(){

    int tam, *vetor;
    float media = 0;

    printf("Digite a quantidade de numeros que deseja:\n");
    scanf("%d", &tam);

    vetor = malloc(tam * sizeof(int));
    if(vetor == NULL){
        printf("Sem espaco.\n");
        exit(1);
    }

    for(int i = 0; i<tam; i++){
        printf("Digite o %dº numero: \n", i+1);
        scanf("%d", &vetor[i]);
        media += ((float)vetor[i])/tam;
    }
    printf("Media: %.2f, valores acima da media:\n", media);
    for(int i = 0; i<tam; i++){
        if(vetor[i] > media){
            printf("%d\n", vetor[i]);
        }
    }

    return 0;
}