#include <stdio.h>
#include <stdlib.h>

/* Pagina 42 */
/* Questão: Faça um programa que solicite o tamanho inicial de um vetor de números reais. Este vetor deve ser informado 
pelo usuário. Após esta inicialização, o programa deve imprimir os valores que são positivos. Após isso, o programa deve 
perguntar se o usuário deseja aumentar o tamanho do vetor, caso sim, o vetor deve ser aumentado em tempo de execução e apenas 
os novos valores devem ser informados para completar. Imprima todos os valores positivos. */

int main(){

    int tamanho, oldTamanho, opc;
    float *vetor;

    printf("Qual tamanho do vetor que deseja? \n");
    scanf("%d", &tamanho);

    vetor = malloc(tamanho * sizeof(float));
    if(vetor == NULL){
        printf("Erro ao alocar espaco\n");
        exit(1);
    }

    for(int i = 0; i<tamanho; i++){
        printf("Digite o %dº valor:\n", i+1);
        scanf("%f", &vetor[i]);
    }
    printf("valores positivos: \n");
    for(int i = 0; i<tamanho; i++){
        if(vetor[i] >= 0){
            printf("%f\n", vetor[i]);
        }
    }

    printf("Deseja aumentar o tamanho do vetor? [1 para sim | 0 para nao]\n");
    scanf("%d", &opc);

    if(opc == 0){
        printf("fim do programa.\n");
        exit(0);
    }

    if(opc == 1){
        oldTamanho = tamanho;
        printf("Qual tamanho do vetor que deseja? \n");
        scanf("%d", &tamanho);
        vetor = realloc(vetor, tamanho*sizeof(float));
        if(vetor == NULL){
            printf("Erro ao alocar espaco\n");
            exit(1);
        }
    }

    if(tamanho < oldTamanho){
        printf("Voce escolheu um valor menor... valores positivos:\n");
        for(int i = 0; i<tamanho; i++){
            if(vetor[i] >= 0){
                printf("%f\n", vetor[i]);
            }
        }
    }

    if(tamanho > oldTamanho){
        for(int i = oldTamanho; i<tamanho; i++){
            printf("Digite o %dº valor:\n", i+1);
            scanf("%f", &vetor[i]);
        }
    }   

    printf("valores positivos: \n");
    for(int i = 0; i<tamanho; i++){
        if(vetor[i] >= 0){
            printf("%f\n", vetor[i]);
        }
    }

    return 0;
}