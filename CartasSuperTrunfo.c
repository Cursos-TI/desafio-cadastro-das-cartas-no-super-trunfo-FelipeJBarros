#include <stdio.h>

int main(void)
{
    char estado;
    char codigo[5];
    char nome[50];
    int populacao;
    int num_pontos_turisticos;
    float area;
    float pib;

    // Título: Cadastro carta 1
    printf("Cadastrando carta 1:\n\n");

    // Carta 1
    printf("Digite o estado (A / H): ");
    scanf("%c", &estado);

    printf("Digite o codigo da carta (ESTADO + 01/04): ");
    scanf("%4s", codigo);

    printf("Digite o nome da carta: ");
    scanf("%49s", nome);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a area da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &num_pontos_turisticos);

    // Exibindo carta 1
    printf("\n\nCarta 1\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", num_pontos_turisticos);

    // Título: Cadastro carta 2
    printf("\n\nCadastrando carta 2:\n\n");

    // Carta 2
    printf("Digite o estado (A / H): ");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta (ESTADO + 01/04): ");
    scanf("%4s", codigo);

    printf("Digite o nome da carta: ");
    scanf("%49s", nome);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a area da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &num_pontos_turisticos);

    // Exibindo carta 2
    printf("\n\nCarta 2\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", num_pontos_turisticos);

    return 0;
}

