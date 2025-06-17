#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura da carta
struct Carta {
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    // Declaração de duas variáveis do tipo Carta
    struct Carta carta1;
    struct Carta carta2;

    // --- Cadastro da Primeira Carta ---
    printf("--- Cadastro da Primeira Carta ---\n");

    printf("Digite a populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a area (em km2): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &carta1.pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // --- Cadastro da Segunda Carta ---
    printf("\n--- Cadastro da Segunda Carta ---\n");

    printf("Digite a populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a area (em km2): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &carta2.pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Limpa a tela antes de exibir os resultados (opcional)
    // system("cls"); // Para Windows
    // system("clear"); // Para Linux/Mac

    // --- Exibição dos Dados Cadastrados ---
    printf("\n\n--- DADOS DAS CARTAS CADASTRADAS ---\n");

    printf("\n--- Carta 1 ---\n");
    printf("Populacao: %d habitantes\n", carta1.populacao);
    printf("Area: %.2f km2\n", carta1.area);
    printf("PIB: U$S %.2f bilhoes\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontos_turisticos);

    printf("\n--- Carta 2 ---\n");
    printf("Populacao: %d habitantes\n", carta2.populacao);
    printf("Area: %.2f km2\n", carta2.area);
    printf("PIB: U$S %.2f bilhoes\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontos_turisticos);

    
    return 0;
}
