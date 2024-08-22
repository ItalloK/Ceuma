/* Questão: Faça um programa que armazene as informações de 15 jogadores de futebol. Cada jogador é identificado pelo
numero da sua camisa, pelo seu peso, altura e pela inicial do seu nome. O programa deve ler todas as informações e imprimir
a inicial do jogador mais baixo e o numero do jogador mais pesado. Use Structs para resolver esse exercicio.*/

#include <stdio.h>

typedef struct{
    int numCamisa;
    float peso;
    float altura;
    char inicialNome[1];
} Jogadores;

int main() {
    
    float menorAltura, maiorPeso;
    int indiceJogadorBaixo, numeroJogadorPesado;

    Jogadores j[15];

    for(int i = 0; i<15; i++){
        printf("Digite a inicial do nome do jogador[%d]: ", i+1);
        scanf(" %c", &j[i].inicialNome);
        printf("Digite o numero da camisa do jogador[%d]: ", i+1);
        scanf("%d", &j[i].numCamisa);
        printf("Digite o peso do jogador[%d]: ", i+1);
        scanf("%f", &j[i].peso);
        printf("Digite a altura do jogador[%d]: ", i+1);
        scanf("%f", &j[i].altura);
    }
    for(int i = 0; i<15; i++){
        if(i == 0){
            menorAltura = j[i].altura;
            indiceJogadorBaixo = i;
            numeroJogadorPesado = j[i].numCamisa;
            maiorPeso = j[i].peso;
            continue;
        }
        if(j[i].altura < menorAltura){
            menorAltura = j[i].altura;
            indiceJogadorBaixo = i;
        }
        if(j[i].peso > maiorPeso){
            numeroJogadorPesado = j[i].numCamisa;
            maiorPeso = j[i].peso;
        }
    }
    printf("Numero do jogador mais pesado: %d, Peso: %.2f\n", numeroJogadorPesado, maiorPeso);
    printf("Inicial do jogador mais baixo: %s", j[indiceJogadorBaixo].inicialNome);

    return 0;
}