#include <stdio.h>

int main() {
    int carrosVendidos;
    float valorTotalVendas, salarioFixo, valorPorCarro, salarioFinal;

    printf("Digite o número de carros vendidos: ");
    scanf("%d", &carrosVendidos);
    printf("Digite o valor total das vendas: ");
    scanf("%f", &valorTotalVendas);
    printf("Digite o salário fixo: ");
    scanf("%f", &salarioFixo);
    printf("Digite o valor que recebe por carro vendido: ");
    scanf("%f", &valorPorCarro);

    salarioFinal = salarioFixo + (carrosVendidos * valorPorCarro) + (0.05 * valorTotalVendas);
    printf("O salário final do vendedor é: %.2f\n", salarioFinal);

    return 0;
}
