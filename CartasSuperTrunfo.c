#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char carta1_estado, carta1_codigo[4], carta1_nome_cidade[50], carta2_codigo[4], carta2_nome_cidade[50], carta2_estado;
  int carta1_populacao, carta1_qtd_pontos_turisticos, carta2_populacao, carta2_qtd_pontos_turisticos;
  float carta1_area, carta1_pib, carta2_area, carta2_pib;

  // Área para entrada de dados

  printf("----------Carta 1----------");

  printf("\nDigite o estado da cidade(A-H): ");
  scanf("%c", &carta1_estado);

  printf("\nDigite o codigo da cidade: ");
  scanf("%3s", carta1_codigo);

  getchar();

  printf("\nDigite o nome da cidade: ");
  fgets(carta1_nome_cidade, 50, stdin);

  printf("\nDigite a populacao da cidade: ");
  scanf("%i", &carta1_populacao);

  printf("\nDigite a area da cidade: ");
  scanf("%f", &carta1_area);

  printf("\nDigite o PIB da cidade: ");
  scanf("%f", &carta1_pib);

  printf("\nDigite a quantidade de pontos turisticos: ");
  scanf("%i", &carta1_qtd_pontos_turisticos);

  printf("\n----------Carta 2----------");

  getchar();

  printf("\nDigite o estado da cidade(A-H): ");
  scanf("%c", &carta2_estado);

  printf("\nDigite o codigo da cidade: ");
  scanf("%3s", carta2_codigo);

  getchar();

  printf("\nDigite o nome da cidade: ");
  fgets(carta2_nome_cidade, 50, stdin);

  printf("\nDigite a populacao da cidade: ");
  scanf("%i", &carta2_populacao);

  printf("\nDigite a area da cidade: ");
  scanf("%f", &carta2_area);

  printf("\nDigite o PIB da cidade: ");
  scanf("%f", &carta2_pib);

  printf("\nDigite a quantidade de pontos turisticos: ");
  scanf("%i", &carta2_qtd_pontos_turisticos);

  // Área para exibição dos dados da cidade
  printf("\n\nCarta 1:\n");
  printf("\nEstado: %c", carta1_estado);
  printf("\nCodigo: %s", carta1_codigo);
  printf("\nNome da Cidade: %s", carta1_nome_cidade);
  printf("Populacao: %d", carta1_populacao);
  printf("\nArea: %.2f km²", carta1_area);
  printf("\nPIB: %.2f bilhões de reais", carta1_pib);
  printf("\nNúmero de Pontos Turísticos: %d", carta1_qtd_pontos_turisticos);

  printf("\n\nCarta 2:\n");
  printf("\nEstado: %c", carta2_estado);
  printf("\nCodigo: %s", carta2_codigo);
  printf("\nNome da Cidade: %s", carta2_nome_cidade);
  printf("Populacao: %d", carta2_populacao);
  printf("\nArea: %.2f km²", carta2_area);
  printf("\nPIB: %.2f bilhões de reais", carta2_pib);
  printf("\nNúmero de Pontos Turísticos: %d\n", carta2_qtd_pontos_turisticos);

return 0;
} 
