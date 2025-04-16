#include <stdio.h>

// Estrutura para armazenar os dados de uma carta
typedef struct {
    char estado[3];
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

// Função para calcular a densidade populacional
float calcularDensidadePopulacional(Carta c) {
    return c.populacao / c.area;
}

// Função para calcular o PIB per capita
float calcularPIBPerCapita(Carta c) {
    return c.pib / c.populacao;
}

// Função para obter os dados de uma carta
void obterCarta(Carta *c) {
    printf("Digite o estado da carta (A-H): ");
    scanf(" %2s", c->estado);
    getchar();

    printf("Digite o Código da carta (ex: A01 Carta1 ou B01 Carta2): ");
    scanf(" %3s", c->codigo);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(c->nomeCidade, sizeof(c->nomeCidade), stdin);

    printf("Digite a população da cidade: ");
    scanf("%d", &c->populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &c->area);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &c->pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &c->pontosTuristicos);
    getchar();
}

int main() {
    Carta carta1, carta2;
    
    printf("\n======= Cadastro da Carta 1 =======\n");
    obterCarta(&carta1);
    
    printf("\n======= Cadastro da Carta 2 =======\n");
    obterCarta(&carta2);
    
    // Cálculo dos atributos derivados
    float densidade1 = calcularDensidadePopulacional(carta1);
    float densidade2 = calcularDensidadePopulacional(carta2);
    float pibPerCapita1 = calcularPIBPerCapita(carta1);
    float pibPerCapita2 = calcularPIBPerCapita(carta2);
    
    // Escolha do atributo para comparação (exemplo: População)
    int atributoEscolhido = 1; // 1 - População, 2 - Área, 3 - PIB, 4 - Densidade Populacional, 5 - PIB per capita
    
    printf("\nComparação de cartas\n");
    switch (atributoEscolhido) {
        case 1:
            printf("Atributo: População\n");
            printf("%s (%s): %d\n", carta1.nomeCidade, carta1.estado, carta1.populacao);
            printf("%s (%s): %d\n", carta2.nomeCidade, carta2.estado, carta2.populacao);
            printf("Resultado: %s venceu!\n", carta1.populacao > carta2.populacao ? carta1.nomeCidade : carta2.nomeCidade);
            break;
        case 2:
            printf("Atributo: Área\n");
            printf("%s (%s): %.2f km²\n", carta1.nomeCidade, carta1.estado, carta1.area);
            printf("%s (%s): %.2f km²\n", carta2.nomeCidade, carta2.estado, carta2.area);
            printf("Resultado: %s venceu!\n", carta1.area > carta2.area ? carta1.nomeCidade : carta2.nomeCidade);
            break;
        case 3:
            printf("Atributo: PIB\n");
            printf("%s (%s): %.2f\n", carta1.nomeCidade, carta1.estado, carta1.pib);
            printf("%s (%s): %.2f\n", carta2.nomeCidade, carta2.estado, carta2.pib);
            printf("Resultado: %s venceu!\n", carta1.pib > carta2.pib ? carta1.nomeCidade : carta2.nomeCidade);
            break;
        case 4:
            printf("Atributo: Densidade Populacional\n");
            printf("%s (%s): %.2f hab/km²\n", carta1.nomeCidade, carta1.estado, densidade1);
            printf("%s (%s): %.2f hab/km²\n", carta2.nomeCidade, carta2.estado, densidade2);
            printf("Resultado: %s venceu!\n", densidade1 < densidade2 ? carta1.nomeCidade : carta2.nomeCidade);
            break;
        case 5:
            printf("Atributo: PIB per capita\n");
            printf("%s (%s): %.2f\n", carta1.nomeCidade, carta1.estado, pibPerCapita1);
            printf("%s (%s): %.2f\n", carta2.nomeCidade, carta2.estado, pibPerCapita2);
            printf("Resultado: %s venceu!\n", pibPerCapita1 > pibPerCapita2 ? carta1.nomeCidade : carta2.nomeCidade);
            break;
        default:
            printf("Atributo inválido!\n");
    }
    
    return 0;
}
