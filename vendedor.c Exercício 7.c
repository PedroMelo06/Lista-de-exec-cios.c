#include <stdio.h>

int main() {
    int carrosVendidos;
    float valorTotalVendas, salarioFixo, valorPorCarro, salarioFinal;

    printf("Digite o n�mero de carros vendidos: ");
    scanf("%d", &carrosVendidos);
    printf("Digite o valor total das vendas: ");
    scanf("%f", &valorTotalVendas);
    printf("Digite o sal�rio fixo: ");
    scanf("%f", &salarioFixo);
    printf("Digite o valor que recebe por carro vendido: ");
    scanf("%f", &valorPorCarro);

    salarioFinal = salarioFixo + (carrosVendidos * valorPorCarro) + (0.05 * valorTotalVendas);
    printf("O sal�rio final do vendedor �: %.2f\n", salarioFinal);

    return 0;
}
