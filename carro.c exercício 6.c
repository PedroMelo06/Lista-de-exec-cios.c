#include <stdio.h>

int main() {
    float custoFabrica, custoFinal;
    const float percentualDistribuidor = 0.28;
    const float impostos = 0.45;

    printf("Digite o custo de f�brica do carro: ");
    scanf("%f", &custoFabrica);

    custoFinal = custoFabrica + (custoFabrica * percentualDistribuidor) + (custoFabrica * impostos);
    printf("O custo final ao consumidor �: %.2f\n", custoFinal);

    return 0;
}
