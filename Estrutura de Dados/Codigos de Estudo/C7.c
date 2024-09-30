#include <stdio.h>
#include <stdlib.h>

int Somar(int a, int b){
    return a+b;
}
int Subtrair(int a, int b){
    return a-b;
}
int Multiplicar(int a, int b){
    return a*b;
}
int Dividir(int a, int b){
    return a/b;
}

int Funcao(int a, int b, int (*funcao)(int, int)){
    int res = funcao(a, b);
    return res;
}

void main(){
    int val1 = 10, val2 = 20;
    int resultado = Funcao(val1, val2, &Multiplicar);
    printf("Resultado: %d", resultado);
}