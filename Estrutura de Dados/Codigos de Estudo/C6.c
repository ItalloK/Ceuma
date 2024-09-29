#include <stdio.h>
#include <stdlib.h>

/* Questão: Criar um tipo abstrato de dados que represente uma pessoa, contendo nome, data de nascimento e CPF. 
Crie uma variável que é um ponteiro para este TAD (no programa principal). Depois crie uma função que receba este ponteiro 
e preencha os dados da estrutura e também uma uma função que receba este ponteiro e imprima os dados da estrutura. 
Finalmente, faça a chamada a esta função na função principal.*/

typedef struct Pessoa{
    char nome[20];
    char dataNascimento[10];
    char cpf[14];
}Pessoa;

void PreencherDados(struct Pessoa *p){
    printf("Digite o nome da pessoa: \n");
    scanf("%s", p->nome);
    printf("Digite a data de nascimento da pessoa: (Ex: 11/11/2011) \n");
    scanf("%s", p->dataNascimento);
    printf("Digite o CPF da pessoa: (Ex: 123.123.123-12)\n");
    scanf("%s", p->cpf);
}

void ExibirDados(struct Pessoa *p){
    printf("Nome da pessoa: %s\n", p->nome);
    printf("Data de nascimento da pessoa: %s\n", p->dataNascimento);
    printf("Cpf da pessoa: %s\n", p->cpf);
}

void main(){
    struct Pessoa *p;
    p = malloc(sizeof(struct Pessoa));
    if(p == NULL){
        printf("Não foi possivel alocar memoria\n");
        exit(1);
    }
    PreencherDados(p);
    ExibirDados(p);

    free(p);
    p = NULL;
}