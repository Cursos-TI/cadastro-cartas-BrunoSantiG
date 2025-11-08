#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

float calcularDensidade(int populacao, float area) {
  return populacao / area;
}

float calcularPibPerCapita(float pib, int populacao) {
  return (pib * 1000000000) / populacao;
}

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char carta1_estado, carta1_codigo[4], carta1_nome_cidade[50];
  char carta2_estado, carta2_codigo[4], carta2_nome_cidade[50];
  int carta1_populacao, carta1_qtd_pontos_turisticos;
  int carta2_populacao, carta2_qtd_pontos_turisticos;
  float carta1_area, carta1_pib, carta1_densidade, carta1_pib_per_capita;
  float carta2_area, carta2_pib, carta2_densidade, carta2_pib_per_capita;

  // Área para entrada de dados

  printf("----------Carta 1----------");

  printf("\nDigite o estado da cidade(A-H): ");
  scanf("%c", &carta1_estado);

  printf("\nDigite o codigo da cidade: ");
  scanf("%3s", carta1_codigo);

  getchar(); // Limpa buffer do teclado

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

  carta1_densidade = calcularDensidade(carta1_populacao, carta1_area);
  carta1_pib_per_capita = calcularPibPerCapita(carta1_pib, carta1_populacao);

  printf("\n----------Carta 2----------");

  getchar(); // Limpa buffer do teclado

  printf("\nDigite o estado da cidade(A-H): ");
  scanf("%c", &carta2_estado);

  printf("\nDigite o codigo da cidade: ");
  scanf("%3s", carta2_codigo);

  getchar(); // Limpa buffer do teclado

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

  carta2_densidade = calcularDensidade(carta2_populacao, carta2_area);
  carta2_pib_per_capita = calcularPibPerCapita(carta2_pib, carta2_populacao);

  // Área para exibição dos dados da cidade
  printf("\nCarta 1:");
  printf("\nEstado: %c", carta1_estado);
  printf("\nCodigo: %s", carta1_codigo);
  printf("\nNome da Cidade: %s", carta1_nome_cidade);
  printf("Populacao: %d", carta1_populacao);
  printf("\nArea: %.2f km²", carta1_area);
  printf("\nPIB: %.2f bilhões de reais", carta1_pib);
  printf("\nNúmero de Pontos Turísticos: %d", carta1_qtd_pontos_turisticos);
  printf("\nDensidade Populacional: %.2f hab/km²", carta1_densidade);
  printf("\nPIB per Capita: %.2f reais", carta1_pib_per_capita);

  printf("\n\nCarta 2:");
  printf("\nEstado: %c", carta2_estado);
  printf("\nCodigo: %s", carta2_codigo);
  printf("\nNome da Cidade: %s", carta2_nome_cidade);
  printf("Populacao: %d", carta2_populacao);
  printf("\nArea: %.2f km²", carta2_area);
  printf("\nPIB: %.2f bilhões de reais", carta2_pib);
  printf("\nNúmero de Pontos Turísticos: %d", carta2_qtd_pontos_turisticos);
  printf("\nDensidade Populacional: %.2f hab/km²", carta2_densidade);
  printf("\nPIB per Capita: %.2f reais", carta2_pib_per_capita);

return 0;
} 
