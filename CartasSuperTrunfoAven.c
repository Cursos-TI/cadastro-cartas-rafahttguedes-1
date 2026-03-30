#include <stdio.h>

int main() {
    // carta 01
    char estado01;
    char codigo01[4];
    char nomedaCidade01[40];
    int populacao01;
    float area01;
    float pib01;
    int pontosTuristicos01;
    float densidadepopulacional01;
    float pibpercapita01;

    // carta 02
    char estado02;
    char codigo02[4];
    char nomedaCidade02[40];
    int populacao02;
    float area02;
    float pib02;
    int pontosTuristicos02;
    float densidadepopulacional02;
    float pibpercapita02;

    // dados da carta 01
    printf("Informe os dados para a Carta 01: \n");

    printf("Estado (A-H): ");
    scanf("%c", &estado01);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo01);

    printf("Nome da Cidade: ");
    scanf("%s", nomedaCidade01);

    printf("População: ");
    scanf("%d", &populacao01);

    printf("Área (em km²): ");
    scanf("%f", &area01);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib01);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos01);

    printf("Densidade Populacional: ");
    scanf("%f", &densidadepopulacional01);

    printf("PIB per capita: ");
    scanf("%f", &pibpercapita01);

    // Cálculo Carta 01
    densidadepopulacional01 = populacao01 / area01;
    pibpercapita01 = pib01 / populacao01;


    // dados da carta 02
    printf("Informe os dados para a Carta 02: \n");

    printf("Estado (A-H): ");
    scanf("%c", &estado02);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo02);

    printf("Nome da Cidade: ");
    scanf("%s", nomedaCidade02);

    printf("População: ");
    scanf("%d", &populacao02);

    printf("Área (em km²): ");
    scanf("%f", &area02);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib02);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos02);

    printf("Densidade Populacional: ");
    scanf("%f", &densidadepopulacional02);

    printf("PIB per capita: ");
    scanf("%f", &pibpercapita02);

    // Cálculo Carta 01
    densidadepopulacional02 = populacao02 / area02;
    pibpercapita01 = pib02 / populacao02;

    // Print Carta 01
    printf("Carta 01: \n");
    printf("Estado: %c\n", estado01);
    printf("Código: %s\n", codigo01);
    printf("Nome da Cidade: %s\n", nomedaCidade01);
    printf("População: %d\n", populacao01);
    printf("Área: %.2f km²\n", area01);
    printf("PIB: %.2f bilhões de reais\n", pib01);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos01);

    // Print Carta 02
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado02);
    printf("Código: %s\n", codigo02);
    printf("Nome da Cidade: %s\n", nomedaCidade02);
    printf("População: %d\n", populacao02);
    printf("Área: %.2f km²\n", area02);
    printf("PIB: %.2f bilhões de reais\n", pib02);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos02);

    return 0;
}
