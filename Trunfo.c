#include <stdio.h>
 
int main() {
    //variaveis carta1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
 
    //variaveis carta2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
 
    //cadastro carta1
    printf("Carta 1\n");
    printf("Digite o estado : ");
    scanf(" %c", &estado1);
 
    printf("Digite o codigo da carta : ");
    scanf("%s", codigo1);
 
    printf("Digite o nome da cidade : ");
    scanf(" %s", nomeCidade1);
 
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
 
    printf("Digite a area : ");
    scanf("%f", &area1);
 
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
 
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);
 
    printf("\n");

    //cadastro carta2
    printf("Carta 2\n");
    printf("Digite o estado : ");
    scanf(" %c", &estado2);
 
    printf("Digite o codigo da carta : ");
    scanf("%s", codigo2);
 
    printf("Digite o nome da cidade : ");
    scanf(" %s", nomeCidade2);
 
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
 
    printf("Digite a area : ");
    scanf("%f", &area2);
 
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
 
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);
 
    printf("\n");

    //calculo para verificar densidade e pibpercapita
    densidade1 = populacao1/area1;
    pibPerCapita1 = pib1/populacao1;
 
    densidade2 = populacao2/area2;
    pibPerCapita2 = pib2/populacao2;
 
    //calculo de dados para mostrar o vencedor
    printf("Calculando Dados\n");
    printf("\n");
    printf("Carta 1 - %s: %c\n", nomeCidade1, estado1);
    printf("Densidade: %f\n", densidade1);
    printf("PIB per capita: %f\n", pibPerCapita1);
    printf("\n");
    printf("Carta 2 - %s: %c\n", nomeCidade2, estado2);
    printf("Densidade: %f\n", densidade2);
    printf("PIB per capita: %f\n", pibPerCapita2);

    printf("\n");

    printf("Comparando cartas (Vencedor por Populacao)");

    printf("\n");

    printf("Carta 1 - %s- %c : %d\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s- %c : %d\n", nomeCidade2, estado2, populacao2);
 
    printf("\n");

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } 
      else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } 
      else {
        printf("Resultado: Empate!");
    }
 
    return 0;
}
