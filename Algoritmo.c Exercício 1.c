#include <stdio.h>

int main() {
    int numero;
    printf("Digite um n�mero: ");
    scanf("%d", &numero);
    printf("O antecessor de %d � %d\n", numero, numero - 1);
    return 0;
}

