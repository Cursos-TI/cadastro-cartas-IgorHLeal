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

  // Carta 2
  int carta2;
  char estado2;
  char codigo2[10];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;



  // Área para entrada de dados
printf("Digite as informações da carta 1");
printf("Estado (A-H): ");
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

  // Área para exibição dos dados da cidade
  printf("\nCarta 1:");
  printf("\nEstado: %c", estado1);
  printf("\nCódigo: %s", codigo1);
  printf("\nNome da cidade: %s", cidade1);
  printf("\nPopulação: %d", populacao1);
  printf("\nÁrea: %fkm²", area1);
  printf("\nPIB %f bilhões de reais", pib1);
  printf("\nNúmero de Pontos Turísticos: %d", pontosTuristicos1);

return 0;
}