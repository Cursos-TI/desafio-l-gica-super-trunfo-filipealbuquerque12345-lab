#include <stdio.h>

int main() {


    // Nomes das países fixos
    char cidade1[] = "Brasil";
    char cidade2[] = "canada";

    int populacao1, populacao2;

    // Cadastro dos atributos
    printf("Populacao de %d: ", cidade1);
    scanf("%d", &populacao1);

    printf("Populacao de %d: ", cidade2);
    scanf("%d", &populacao2);

    // Mostrar cartas
    printf("\n--- Cartas ---\n");
    printf("%s - Populacao: %d\n", cidade1, populacao1);
    printf("%s - Populacao: %d\n", cidade2, populacao2);

    // Comparação
    if (populacao1 > populacao2) {
        printf("\nVencedor: %s\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("\nVencedor: %s\n", cidade2);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
