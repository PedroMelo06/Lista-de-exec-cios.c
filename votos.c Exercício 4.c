#include <stdio.h>

int main() {
    int totalEleitores, votosBrancos, votosNulos, votosValidos;
    float percBrancos, percNulos, percValidos;
    
    printf("Digite o número total de eleitores: ");
    scanf("%d", &totalEleitores);
    printf("Digite o número de votos brancos: ");
    scanf("%d", &votosBrancos);
    printf("Digite o número de votos nulos: ");
    scanf("%d", &votosNulos);
    printf("Digite o número de votos válidos: ");
    scanf("%d", &votosValidos);

    percBrancos = (float)votosBrancos / totalEleitores * 100;
    percNulos = (float)votosNulos / totalEleitores * 100;
    percValidos = (float)votosValidos / totalEleitores * 100;

    printf("Percentual de votos brancos: %.2f%%\n", percBrancos);
    printf("Percentual de votos nulos: %.2f%%\n", percNulos);
    printf("Percentual de votos válidos: %.2f%%\n", percValidos);

    return 0;
}
