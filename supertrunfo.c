#include <stdio.h>

int main() {
    // Declaração de variáveis para a primeira carta
    char estado1[3];  // 2 caracteres + '\0'
    char codigo1[4];  // 3 caracteres + '\0'
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração de variáveis para a segunda carta
    char estado2[3];
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados para a primeira carta
    printf("Digite o estado da primeira carta (A-H): ");
    scanf(" %2s", estado1);
    getchar(); // Captura o '\n' deixado no buffer

    printf("Digite o Código da primeira carta (ex: A01): ");
    scanf(" %3s", codigo1);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    getchar();

    // Entrada de dados para a segunda carta
    printf("\nDigite o estado da segunda carta (A-H): ");
    scanf(" %2s", estado2);
    getchar();

    printf("Digite o Código da segunda carta (ex: B02): ");
    scanf(" %3s", codigo2);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    getchar();

    // Exibição dos dados da primeira carta
    printf("\n======= Carta 1 =======\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da segunda carta
    printf("\n======= Carta 2 =======\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
