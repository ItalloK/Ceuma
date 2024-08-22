/* Questão: Escreva um programa para ler duas matrizes com valores informados pelo usuario e:
a) Verificar se são iguais
b) Subtrair uma matriz na outra
c) Ordenar as duas matrizes em ordem crescente */

#include <stdio.h>

int main() {
    int matrizA[3][3];// = {{5,78,32},{14,35,6},{7,84,9}};
    int matrizB[3][3];// = {{14,2,3},{3,15,6},{711,85,97}};

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("Digite um valor para as posicoes %d - %d da matriz A\n", i, j);
            scanf("%d", &matrizA[i][j]);
            printf("Digite um valor para as posicoes %d - %d da matriz B\n", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    int iguaisOuNao = -1;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            if(matrizA[i][j] != matrizB[i][j]){
                iguaisOuNao = 0;
                break;
            }
        }
    }
    if(iguaisOuNao == 0){
        printf("As matrizes nao sao iguais...\n");
    }else{
        printf("As matrizes sao iguais...\n");
    }

    int valorFinal[9];
    int index = 0;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            valorFinal[index++] = (matrizA[i][j] -= matrizB[i][j]);
        }
    }
    int matrizSub[3][3], indiceMatrizSub = 0;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            matrizSub[i][j] = valorFinal[indiceMatrizSub];
            indiceMatrizSub++;
        }
    }
    printf("Subtracao das Matrizes: \n");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d ", matrizSub[i][j]);
        }
        printf("\n");
    }
    printf("----------------------------------------\n");

    int vetorA[9];
    int vetorB[9];
    int indiceA = 0, indiceB = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            vetorA[indiceA++] = matrizA[i][j];  // Transferindo os valores para um vetor
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            vetorB[indiceB++] = matrizB[i][j];
        }
    }

    Organizador(vetorA, 9);
    Organizador(vetorB, 9);

    int indiceMatA = 0, indiceMatB = 0;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            matrizA[i][j] = vetorA[indiceMatA];
            indiceMatA++;
        }
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            matrizB[i][j] = vetorB[indiceMatB];
            indiceMatB++;
        }
    }
    printf("Matriz A: \n");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("Matriz B: \n");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d ", matrizB[i][j]);
        }
        printf("\n");
    }

    return 0;
}


void Organizador(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}