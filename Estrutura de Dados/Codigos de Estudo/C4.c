#include <stdio.h>
#include <stdlib.h>

int Soma(int a, int b){
    int res = a+b;
    return res;
}

int VerificarTamanho(int a, int b, int (*p)(int, int)){
    int res = p(a,b);
    return res;
}

void main(){
    int val[2];
    for(int i = 0; i<2; i++){
        printf("Digite o %dº valor:\n", i+1);
        scanf("%d", &val[i]);
    }
    int resultado = VerificarTamanho(val[0], val[1], &Soma);
    printf("Resultado: %d", resultado);
}