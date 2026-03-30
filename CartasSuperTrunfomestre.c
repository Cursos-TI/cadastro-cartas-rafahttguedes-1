#include <stdio.h>
//Desafio Aventureiro
int main() {
    // Dados da carta 1
    char estado1;
    char codigo1[4];
    char nomedaCidade1[40];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibperCapita1;

    // Dados da carta 2
    char estado2;
    char codigo2[4];
    char nomedaCidade2[40];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibperCapita2;

    // Valores da carta 1
    printf("Informe os dados para a Carta 1: \n");

    printf("Estado (A-H): ");
    scanf("%c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", nomedaCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%lf", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("Densidade Populacional: ");
    scanf("%lf", &densidadePopulacional1);

    printf("PIB per capita: ");
    scanf("%lf", &pibperCapita1);

    // Calculos Carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibperCapita1 = pib1 / populacao1;


    // Valores da carta 2
    printf("Informe os dados para a Carta 2: \n");

    printf("Estado (A-H): ");
    scanf("%c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", nomedaCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%lf", &pib2);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("Densidade Populacional: ");
    scanf("%lf", &densidadePopulacional2);

    printf("PIB per capita: ");
    scanf("%lf", &pibperCapita2);

    // Calculo Carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibperCapita2 = pib2 / populacao2;

    // Print Carta 1
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomedaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("\nResultados:\n");
    printf("PIB per capita: %.2f\n", pibperCapita1);
    printf("Desnidade Populacional: %.2f\n", densidadePopulacional1);

    // Print Carta 2
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomedaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("\nResultados:\n");
    printf("PIB per capita: %.2f\n", pibperCapita2);
    printf("Sensidade Populacional: %.2f\n", densidadePopulacional2);
    
    return 0;
}