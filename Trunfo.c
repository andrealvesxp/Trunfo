#include <stdio.h>
 
int main() {
    // Variaveis Carta 1
    char estado1[3];
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
 
    // Variaveis Carta 2
    char estado2[3];
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
 
    // Cadastro para carta 1
    printf("Carta 1");
    printf("Digite o estado : ");
    scanf("%s", estado1);
 
    printf("Digite o codigo da carta : ");
    scanf("%s", codigo1);
 
    printf("Digite o nome da cidade : ");
    scanf("%s", nomeCidade1);
 
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
 
    printf("Digite a area : ");
    scanf("%f", &area1);
 
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
 
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);
 
    // Cadastro para carta 2
    printf("Carta 2");
    printf("Digite o estado : ");
    scanf("%s", estado2);
 
    printf("Digite o codigo da carta : ");
    scanf("%s", codigo2);
 
    printf("Digite o nome da cidade : ");
    scanf("%s", nomeCidade2);
 
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
 
    printf("Digite a area : ");
    scanf("%f", &area2);
 
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
 
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);
 
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
 
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
 
    // Calculo de Dados para mostrar o vencedor
    printf("Calculando Dados");
    printf("Carta 1 - %s (%s)", nomeCidade1, estado1);
    printf("Densidade: %f", densidade1);
    printf("PIB per capita: %f", pibPerCapita1);
 
    printf("Carta 2 - %s (%s)", nomeCidade2, estado2);
    printf("Densidade: %f", densidade2);
    printf("PIB per capita: %f", pibPerCapita2);
 
    printf("Comparando cartas (Vencedor por Populacao)");
 
    printf("Carta 1 - %s (%s): %d", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d", nomeCidade2, estado2, populacao2);
 
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!", nomeCidade1);
    } 
      else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!", nomeCidade2);
    } 
      else {
        printf("Resultado: Empate!");
    }
 
    return 0;
}
