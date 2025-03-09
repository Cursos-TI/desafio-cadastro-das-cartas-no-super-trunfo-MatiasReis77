#include <stdio.h>

int main(){


    char estado1, estado2;
    char codDaCarta1[30], codDaCarta2[30];
    char nomeDaCidade1[30], nomeDaCidade2[30];
    unsigned long int populacao1, populacao2;
    float areakm1, areakm2;
    float pib1, pib2;
    int numeroPontosTuristicos1, numeroPontosTuristicos2;
    double densidade1, densidade2;
    double pibpercapita1, pibpercapita2;
    float superPoder1, superPoder2;

    
    //CARTA1


    printf("Digite uma letra de A a H para representar o estado da carta 1: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta 1: \n");
    scanf(" %s", codDaCarta1);

    printf("Digite nome da cidade da carta 1: \n");
    scanf(" %s", nomeDaCidade1);

    printf("Digite a população da carta 1: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área em km² da carta 1: \n");
    scanf("%f", &areakm1);

    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turísticos da carta 1: \n");
    scanf("%d", &numeroPontosTuristicos1);

    pibpercapita1 = pib1 * (float) 1000000000 / (float) populacao1;

    densidade1 = (float) populacao1 / areakm1;

    // SUPER PODER 1

    superPoder1 = (float) populacao1 + areakm1 + pib1 + numeroPontosTuristicos1 + pibpercapita1 + (areakm1 / (float)populacao1);


    //CARTA2

    printf("\nDigite uma letra de A a H para representar o estado da carta 2: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta 2: \n");
    scanf(" %s", codDaCarta2);

    printf("Digite nome da cidade da carta 2: \n");
    scanf(" %s", nomeDaCidade2);

    printf("Digite a população da carta 2: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área em km² da carta 2: \n");
    scanf("%f", &areakm2);

    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turísticos da carta 2: \n");
    scanf("%d", &numeroPontosTuristicos2);

    pibpercapita2 = pib2 * (float) 1000000000 / (float) populacao2;

    densidade2 = (float) populacao2 / areakm2;

    // SUPER PODER 2

    superPoder2 = (float) populacao2 + areakm2 + pib2 + numeroPontosTuristicos2 + pibpercapita2 + (areakm2 / (float)populacao2);

    // Dados de exibição das cartas

    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codDaCarta1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %lu\n", populacao1);
    printf("Area em km²: %.2f\n", areakm1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", pibpercapita1);

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codDaCarta2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %lu\n", populacao2);
    printf("Area em km²: %.2f\n", areakm2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n\n", pibpercapita2);

    // Comparação e exibição da comparação das cartas

    printf("População: %d\n", populacao1 > populacao2);
    printf("Area em km²: %d\n", areakm1 > areakm2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos1 > numeroPontosTuristicos2);
    printf("Densidade Populacional: %d\n", densidade1 < densidade2);
    printf("PIB per Capita: %d\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: %d\n\n", superPoder1 > superPoder2);

    return 0;

}
