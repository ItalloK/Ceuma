/* Questão: Faça uma função que faça a rotação de tres numeros. Tais numeros precisam ser passados como parâmetros,
por referencia. Por exemplo, se a função receber os valores 5, 8 e 9, nesta ordem, os valores de saida nessas variaveis 
serão 8, 9 e 5, respectivamente. */

#include <stdio.h>

int main() {
    int valores[] = {1,2,3};
    Rotacao(valores);
    return 0;
}

void Rotacao(int n[]){
    printf("Antiga ordem: ");
    for(int i = 0; i<3; i++){
        printf("%d ", n[i]);
    }
    printf("\n");
    int temp;
    temp = n[0]; //n4 <> n1
    n[0] = n[2]; //n1 <> n3
    n[2] = temp; // n3 <> n1
    printf("Nova ordem: ");
    for(int i = 0; i<3; i++){
        printf("%d ", n[i]);
    }
}


/* Questao ficou inconclusiva na minha cabeça então até o momento ela ficará assim, pois não sei a resolução...
    Data atual: 10/08/2024 */