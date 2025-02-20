
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main(){


    char estado1, estado2;
    char codigoDaCarta1[30], codigoDaCarta2[30];
    char nomeDaCidade1[30], nomeDaCidade2[30];
    int populacao1, populacao2;
    float areakm1, areakm2;
    float pib1, pib2;
    int numeroPontosTuristicos1, numeroPontosTuristicos2;


// Cadastro das Cartas:
 
    //CARTA1


    printf("Digite uma letra de A a H para representar o estado da carta 1: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta 1: \n");
    scanf(" %s", codigoDaCarta1);

    printf("Digite nome da cidade da carta 1: \n");
    scanf(" %s", nomeDaCidade1);

    printf("Digite a população da carta 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em km² da carta 1: \n");
    scanf("%f", &areakm1);

    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turísticos da carta 1: \n");
    scanf("%d", &numeroPontosTuristicos1);

    //CARTA2

    printf("\nDigite uma letra de A a H para representar o estado da carta 2: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta 2: \n");
    scanf(" %s", codigoDaCarta2);

    printf("Digite nome da cidade da carta 2: \n");
    scanf(" %s", nomeDaCidade2);

    printf("Digite a população da carta 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km² da carta 2: \n");
    scanf("%f", &areakm2);

    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turísticos da carta 2: \n");
    scanf("%d", &numeroPontosTuristicos2);

        // Exibição dos Dados das Cartas:

    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigoDaCarta1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f\n", areakm1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", numeroPontosTuristicos1);


    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f\n", areakm2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos2);

    return 0;

}