#include <stdio.h>
#include <stdlib.h>

/* Pagina 21 */
/* Questão: Implemente dinamicamente o vetor para as situações, abaixo:
1º : Criar um vetor cujo tamanho será informado pelo usuário em tempo de execução;
2º : Inicializar o vetor com valores fornecidos pelo usuário;
3º : Exibir todos valores da última até a 1ª posição;
4º : Calcular e exibir a quantidade de números pares;
5º : Calcular e exibir a média de todos os valores. */

int main(){

    int tamanho, i, *vetor, qntPares = 0;
    float media = 0;
    
    printf("Digite a quantidade de numeros que deseja digitar: \n");
    scanf("%d", &tamanho);

    vetor = malloc(tamanho * sizeof(int));
    if(vetor == NULL){
        printf("Não tem espaço");
        return;
    }

    for(i = 0; i<tamanho; i++){
        printf("Digite o %dº numero: \n", i+1);
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0){
            qntPares++;
        }
        media += (float)vetor[i]/tamanho;
    }

    printf("\nMedia: %.2f\n", media);
    printf("\nQuantidade de Pares: %d\n", qntPares);
    printf("\n\nTamanho dos vetores: \n");
    for(i = tamanho-1; i>=0; i--){
        printf("Valor: %d \n", vetor[i]);
    }
    

    free(vetor);
    vetor = NULL;
    return 0;
}