#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Carta 1
  int carta1;
  char estado1;
  char codigo1[10];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;
  double densidade1;
  double perCapita1;

  // Carta 2
  int carta2;
  char estado2;
  char codigo2[10];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;
  double densidade2;
  double perCapita2;

  // Área para entrada de dados Carta 1
printf("Digite as informações da carta 1");
printf("\nEstado (A-H): ");
scanf("%c", &estado1);

printf("Código: ");
scanf("%s", &codigo1);

printf("Nome da Cidade: ");
scanf("%s", &cidade1);

printf("População: ");
scanf("%d", &populacao1);

printf("Área: ");
scanf("%f", &area1);

printf("PIB: ");
scanf("%f", &pib1);

printf("Número de pontos turísticos: ");
scanf("%d", &pontosTuristicos1);


 // Área para entrada de dados Carta 2
printf("\nDigite as informações da carta 2");
printf("\nEstado (A-H): ");
scanf("%c", &estado2);

printf("Código: ");
scanf("%s", &codigo1);

printf("Nome da Cidade: ");
scanf("%s", &cidade2);

printf("População: ");
scanf("%d", &populacao2);

printf("Área: ");
scanf("%f", &area2);

printf("PIB: ");
scanf("%f", &pib2);

printf("Número de pontos turísticos: ");
scanf("%d", &pontosTuristicos2);

  // Densidade e pib per capta carta 1
  densidade1 = populacao1 / area1;
  perCapita1 = pib1 / populacao1;


  // Área para exibição dos dados da cidade Carta 1
  printf("\nCarta 1: \n");
  printf("\nEstado: %c", estado1);
  printf("\nCódigo: %s", codigo1);
  printf("\nNome da cidade: %s", cidade1);
  printf("\nPopulação: %d", populacao1);
  printf("\nÁrea: %.2fkm²", area1);
  printf("\nPIB %.2f bilhões de reais", pib1);
  printf("\nNúmero de Pontos Turísticos: %d", pontosTuristicos1);
  printf("\nDensidade Populacional: %.2f hab/km²", densidade1);
  printf("\nPIB per Capita: %.2f reais", perCapita1);


  // Densidade e pib per capta carta 2
  densidade2 = populacao2 / area2;
  perCapita2 = pib2 / populacao2;


  // Área para exibição dos dados da cidade Carta 2
  printf("\nCarta 2:");
  printf("\nEstado: %c", estado2);
  printf("\nCódigo: %s", codigo2);
  printf("\nNome da cidade: %s", cidade2);
  printf("\nPopulação: %d", populacao2);
  printf("\nÁrea: %.2fkm²", area2);
  printf("\nPIB %.2f bilhões de reais", pib2);
  printf("\nNúmero de Pontos Turísticos: %d", pontosTuristicos2);
  printf("\nDensidade Populacional: %.2f hab/km²", densidade2);
  printf("\nPIB per Capita: %.2f reais", perCapita2);

return 0;
}