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

    if( populacao1 > populacao2){
        printf("Atributo: População - Carta 1 venceu!\n");
    } else {
        printf("Atributo: População - Carta 2 venceu!\n");
    }    
    if( areakm1 > areakm2){
        printf("Atributo: Área - Carta 1 venceu!\n");
    } else {
        printf("Atributo: Área - Carta 2 venceu!\n");
    }    
    if( pib1 > pib2){
        printf("Atributo: PIB - Carta 1 venceu!\n");
    } else {
        printf("Atributo: PIB - Carta 2 venceu!\n");
    }
    if( numeroPontosTuristicos1 > numeroPontosTuristicos2){
        printf("Atributo: Nº de pontos turísticos - Carta 1 venceu!\n");
    } else {
        printf("Atributo: Nº de pontos turísticos - Carta 2 venceu!\n");
    }
    if( densidade1 < densidade2){
        printf("Atributo: Densidade Populacional - Carta 1 venceu!\n");
    } else {
        printf("Atributo: Densidade Populacional - Carta 2 venceu!\n");
    }
    if( pibpercapita1 > pibpercapita2){
        printf("Atributo: PIB per Capita - Carta 1 venceu!\n");
    } else {
        printf("Atributo: PIB per Capita - Carta 2 venceu!\n");
    }
    if( superPoder1 > superPoder2){
        printf("Atributo: Super Poder - Carta 1 venceu!\n");
    } else {
        printf("Atributo: Super Poder - Carta 2 venceu!\n");
    }

    //Menu interativo pra escolha dos atributos;
int opcao, opcao2;

printf("\nEscolha o atributo para comparação:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Números de pontos turísticos\n");
printf("5. Densidade Populacional\n");

printf("Digite a opção desejada: ");
scanf("%d", &opcao);


//Comparação do primiro atributo escolhido;////////////////

double atributo1_carta1 = 0, atributo1_carta2 = 0;
double atributo2_carta1 = 0, atributo2_carta2 = 0;

switch(opcao){

    case 1:

    atributo1_carta1 = (double) populacao1;
    atributo1_carta2 = (double) populacao2;
    printf("Comparação da População:\n");
    printf("Carta 1 -  %s (%s): %lu habitantes\n", nomeDaCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu habitantes\n", nomeDaCidade2, estado2, populacao2);
    if(populacao1 > populacao2){
        printf("Carta 1 venceu!! A cidade com maior população é %s.\n", nomeDaCidade1);
    }else if(populacao1 < populacao2){
        printf("Carta 2 venceu!! A cidade com maior população é %s.\n", nomeDaCidade2);
    }else{
        printf("Empate! Ambas as cartas têm a quantidade de população. ");
    }
    break;

    case 2: 

    atributo1_carta1 = (double) areakm1;
    atributo1_carta2 = (double) areakm2;
    printf("Comparação da Área:\n");
    printf("Carta 1 - %s (%s): %.2f km\n", nomeDaCidade1, estado1, areakm1);
    printf("Carta 2 - %s (%s): %.2f km\n", nomeDaCidade2, estado2, areakm2);
    if(areakm1 > areakm2){
        printf("Carta 1 venceu!!A cidade com maior área é %s.\n", nomeDaCidade1);
    }else if(areakm1 < areakm2){
        printf("Carta 2 venceu!!A cidade com maior área é %s\n", nomeDaCidade2);
    }else{
        printf("Empate! Ambas têm a mesma área.\n");
    }
    break;


    case 3:

    atributo1_carta1 = (double) pib1;
    atributo1_carta2 = (double) pib2;
    printf("Comparação do PIB:\n");
    printf("Carta 1 - %s (%s): %.2f bilhões\n", nomeDaCidade1, estado1, pib1);
    printf("Carta 2 - %s (%s): %.2f bilhões\n", nomeDaCidade2, estado2, pib2);
    if(pib1 > pib2){
        printf("Carta 1 venceu!!A cidade com maior PIB é %s.\n", nomeDaCidade1);
    }else if(pib1 < pib2){
        printf("Carta 2 venceu!!A cidade com maior PIB é %s.\n", nomeDaCidade2);
    }else{
        printf("Empate!! Ambas têm o mesmo PIB.\n");
    }
    break;

    case 4:
    atributo1_carta1 = (double) numeroPontosTuristicos1;
    atributo1_carta2 = (double) numeroPontosTuristicos2;
    printf("Comparação dos Números de pontos turísticos:\n");
    printf("Carta 1 - %s (%s): %d pontos turísticos\n", nomeDaCidade1, estado1, numeroPontosTuristicos1);
    printf("Carta 2 - %s (%s): %d pontos turísticos\n", nomeDaCidade2, estado2, numeroPontosTuristicos2);
    if(numeroPontosTuristicos1 > numeroPontosTuristicos2){
        printf("Carta 1 venceu!!A cidade com maior ponto turísto é %s.\n", nomeDaCidade1);
    }else if(numeroPontosTuristicos1 < numeroPontosTuristicos2){
        printf("Carta 2 venceu!!A cidade com maior ponto turístico é %s.\n", nomeDaCidade2);
    }else{
        printf("Empate!!Ambas as têm a mesma quantidade de pontos turísticos.\n");
    }
    break;

    case 5:
    atributo1_carta1 = (double) densidade1;
    atributo1_carta2 = (double) densidade2;
    printf("Comparação da Densidade Populacional:\n");
    printf("Carta 1 - %s : %.2f habitantes/km\n", nomeDaCidade1, densidade1);
    printf("Carta 2 - %s : %.2f habitantes/km\n", nomeDaCidade2, densidade2);
    if(densidade1 < densidade2){
        printf("Carta 1 venceu!!A cidade com menor densidade populacional é %s.\n", nomeDaCidade1);
    }else if(densidade1 > densidade2){
        printf("Carta 2 venceu!!A cidade com menor densidade populacional é %s.\n", nomeDaCidade2);
    }else{
        printf("Empate!! Ambas as cidades têm a mesma densidade populacional.\n");
    }
    break;
    default:
    printf("Opção inválida.!");

}

    return 0;

}
