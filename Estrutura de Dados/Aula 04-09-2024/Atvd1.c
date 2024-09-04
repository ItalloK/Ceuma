#include <stdio.h>

/* Questão: Faça um programa que utiliza ponteiros para acessar e manipular indiretamente os valores 
contidos nos mesmos. O programa deve:
1º : ler um vetor de 100 números reais fornecidos pelos usuário ;
2º : ler um outro valor real, fornecido pelo usuário;
3º : verifique se este outro valor real existe ou não no vetor de 100 elementos. Caso exista, exiba a quantidade 
de vezes que este número se repete. Caso contrário, exiba uma mensagem ao usuário.
4º : imprimir na tela todos os números maiores que o valor real fornecido pelo usuário. */

#define TAM 100

int main(){
    float vet[TAM], valorInformado;
    int cont = 0;
    float *p;

    for(int i = 0; i<TAM; i++){
        p = &vet[i];
        printf("Digite um valor para a posicao [%d]: \n",i);
        scanf("%f", p);
    }
    p = &valorInformado;
    printf("Agora digite um valor para procurar no vetor: \n");
    scanf("%f", p);

    for(int i = 0; i<TAM; i++){
        p = &vet[i];
        if(*p == valorInformado){
            cont++;
        }
    }
    if(cont == 0){
        printf("Nenhum valor igual ao digitado foi encontrado.\n");
    }else{
        printf("Existem [%d] valores iguais ao digitado.\n", cont);
    }
    cont = 0;
    printf("Valores maiores que o digitado: \n");
    for(int i = 0; i<TAM; i++){
        p = &vet[i];
        if(*p > valorInformado){
            cont++;
            printf("%f \n", vet[i]);
        }
    }
    if(cont  == 0){
        printf("Nenhum valor encontrado\n");
    }
    return 0;
}