#include <stdio.h>

int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    printf("O antecessor de %d é %d\n", numero, numero - 1);
    return 0;
}

