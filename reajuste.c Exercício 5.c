#include <stdio.h>

int main() {
    float salarioAtual, percentualReajuste, novoSalario;
    printf("Digite o salário atual: ");
    scanf("%f", &salarioAtual);
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentualReajuste);
    novoSalario = salarioAtual + (salarioAtual * percentualReajuste / 100);
    printf("O novo salário é: %.2f\n", novoSalario);
    return 0;
}
