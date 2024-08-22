/* Questao: Fazer um programa que crie um menu para cadastrar carro, pesquisar, imprimir todos os carros e sair.
Armazena 10 carros ( Marca, Cor, Chassi, Preço e Ano ) de uma revendedora. Imprima-os na tela, busque quais são os carros
que sejam menor ou igual o valor do carro que o cliente está procurando */

#include <stdio.h>

typedef struct{
    char marca[20];
    char cor[20];
    char Chassi[20];
    float preco;
    int ano;
} Carros;

int indiceCarrosCadastrados = 0, maxCarrosCadastrados = 10; //Criado no escopo pois não será zerado o valor o voltar pro main
Carros car[10]; // teve de ser criado fora do main para abrangir todos os metodos

int main() {
    
    int opcao = 0;
    float valorDesejado = 0;

    do{
        printf("1 - Cadastrar Carro\n");
        printf("2 - Buscar carro por Valor\n");
        printf("3 - Mostrar todos os Carros\n");
        printf("4 - Sair do Programa\n");
        printf("Escolha uma opcao: \n");
        scanf("%d", &opcao);
    }while(opcao <= 0 || opcao > 4);
    switch(opcao){
        case 1:{
            CadastrarCarro();
            break;
        }
        case 2:{
            PesquisarCarro();
            break;
        }
        case 3:{
            MostrarCarros();
            break;
        }
        case 4:{
            system("cls");
            printf("Fim do programa...\n");
            return;
        }
    }

    return 0;
}

void CadastrarCarro(){
    if(indiceCarrosCadastrados >= maxCarrosCadastrados){
        printf("Maximo de Veiculos Cadastrados...\n\n");
        printf("Voltando ao menu principal.\n");
        return main();
    }
    printf("Digite a marca do Carro: \n");
    scanf("%s", &car[indiceCarrosCadastrados].marca);
    printf("Digite a cor do Carro: \n");
    scanf("%s", &car[indiceCarrosCadastrados].cor);
    printf("Digite o chassi do Carro: \n");
    scanf("%s", &car[indiceCarrosCadastrados].Chassi);
    do{
        printf("Digite o valor do Carro: \n");
        scanf("%f", &car[indiceCarrosCadastrados].preco);
    }while(car[indiceCarrosCadastrados].preco < 0);
    do{
        printf("Digite o ano do Carro: \n");
        scanf("%d", &car[indiceCarrosCadastrados].ano);
    }while(car[indiceCarrosCadastrados].ano < 1886 || car[indiceCarrosCadastrados].ano > 2025);
    indiceCarrosCadastrados++;
    printf("Carro cadastrado com sucesso!!\n");
    printf("Voltando pro menu principal.\n");
    return main();
}

void PesquisarCarro(){
    float valorCarro = 0;
    do{
        printf("Digite o preco do veiculo que voce deseja buscar: \n");
        scanf("%f", &valorCarro);
    }while(valorCarro <= 0);
    printf("Veiculos com valor menor ou igual o desejado: \n\n\n");
    for(int i = 0; i<maxCarrosCadastrados; i++){
        if(car[i].preco <= valorCarro){
            printf("---------------- [ Carro %d ] ----------------\n", i+1);
            printf("Marca carro: %s\n", car[i].marca);
            printf("Cor carro: %s\n", car[i].cor);
            printf("Chassi do carro: %s\n", car[i].Chassi);
            printf("Preco do carro: %.2f\n",car[i].preco);
            printf("Ano do carro: %d\n", car[i].ano);
            printf("----------------------------------------------\n");
        }
    }
    
}

void MostrarCarros(){
    for(int i = 0; i<indiceCarrosCadastrados; i++){
        printf("---------------- [ Carro %d ] ----------------\n", i+1);
        printf("Marca carro: %s\n", car[i].marca);
        printf("Cor carro: %s\n", car[i].cor);
        printf("Chassi do carro: %s\n", car[i].Chassi);
        printf("Preco do carro: %.2f\n",car[i].preco);
        printf("Ano do carro: %d\n", car[i].ano);
        printf("----------------------------------------------\n");
    }
    char opcao[1];
    printf("Deseja voltar ao menu principal? [S/N]: \n");
    scanf(" %c", opcao);
    if(opcao == "S" || opcao == "s"){
        return main();
    }else{
        printf("Fechando programa...");
        return;
    }
}