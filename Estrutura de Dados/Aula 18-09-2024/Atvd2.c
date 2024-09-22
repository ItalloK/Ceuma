#include <stdio.h>
#include <stdlib.h>

/* Pagina 40 */
/* Questão: Implemente dinamicamente o vetor para as situações, abaixo:
1º : Criar um vetor cujo tamanho será informado pelo usuário em tempo de execução;
2º : Inicializar o vetor com valores fornecidos pelo usuário;
3º : Exibir todos valores da última até a 1ª posição;
4º : Perguntar ao usuário se ele deseje alterar o tamanho do vetor. Caso sim, altere o tamanho do vetor em tempo de execução.
*/

int main(){

    int tamanho, *vetor, opc;

    printf("Digite o tamanho do vetor que deseja criar: \n");
    scanf("%d", &tamanho);

    vetor = malloc(tamanho * sizeof(int));
    if(vetor == NULL){
        return printf("Não há espaco para criar o vetor");
    }

    for(int i = 0; i<tamanho; i++){
        printf("Digite o %dº valor: \n", i+1);
        scanf("%d", &vetor[i]);
    }

    for(int i = (tamanho-1); i>=0; i--){
        printf("%d \n", vetor[i]);
    }

    printf("Deseja alterar o tamanho dos vetores? [1 - para sim | 0 para não] \n");
    scanf("%d", &opc);

    if(opc == 0) return printf("Fim do Programa");
    if(opc == 1){
        vetor = realloc(vetor, tamanho * sizeof(int));
    }
    if(vetor == NULL){
        return printf("Não há espaco para criar o vetor");
    }
    printf("Digite o novo tamanho do vetor que deseja criar: \n");
    scanf("%d", &tamanho);

    for(int i = 0; i<tamanho; i++){
        printf("Digite o %dº valor: \n", i+1);
        scanf("%d", &vetor[i]);
    }

    for(int i = (tamanho-1); i>=0; i--){
        printf("%d \n", vetor[i]);
    }

    free(vetor);
    vetor = NULL;
    printf("Fim do programa.");
    
    return 0;
}
