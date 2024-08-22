/* Questão:  Faça um programa que receba dois numeros e descubra seu MMC. A identificação do MMC deve ser feita dentro de uma
função que retorne tal valor. A leitura e a escrita dos dados, alem da ativação do modulo do MMC devem ficar na função
principal. */

#include <stdio.h>

int main() {
    int num[2];
    printf("Digite o primeiro número: \n");
    scanf("%d", &num[0]);
    printf("Digite o segundo número: \n");
    scanf("%d", &num[1]);
    int result = Mmc(num[0], num[1]);
    printf("Resultado do MMC de %d e %d, e %d", num[0],num[1], result);
    return 0;
}

int Mmc(int n1, int n2) {
    return (n1 * n2) / Mdc(n1, n2);
}

int Mdc(int n1, int n2) {
    if (n2 == 0)
        return n1;
    return Mdc(n2, n1 % n2);
}