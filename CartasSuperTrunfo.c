#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

float calcularDensidade(unsigned long int populacao, float area) {
  return (float)populacao / area;
}

float calcularPibPerCapita(float pib, unsigned long int populacao) {
  return (pib * 1000000000) / (float)populacao;
}

void exibirCarta(int numero, char estado, char codigo[4], char nome[50], unsigned long int populacao, float area, float pib, int pontos, float densidade, float pib_per_capita) {

  printf("\nEstado: %c", estado);
  printf("\nCodigo: %s", codigo);
  printf("\nNome da Cidade: %s", nome);
  printf("Populacao: %lu", populacao);
  printf("\nArea: %.2f km²", area);
  printf("\nPIB: %.2f bilhões de reais", pib);
  printf("\nNúmero de Pontos Turísticos: %d", pontos);
  printf("\nDensidade Populacional: %.2f hab/km²", densidade);
  printf("\nPIB per Capita: %.2f reais", pib_per_capita);
}

void lerCarta(int numero, char *estado, char codigo[4], char nome[50], unsigned long int *populacao, float *area, float *pib, int *pontos, float *densidade, float *pib_per_capita) {
  printf("----------Carta %d----------", numero);

  printf("\n\nDigite o estado da cidade(A-H): ");
  scanf(" %c", estado);

  printf("Digite o codigo da cidade: ");
  scanf("%3s", codigo);

  getchar(); // Limpa buffer do teclado

  printf("Digite o nome da cidade: ");
  fgets(nome, 50, stdin);

  printf("Digite a populacao da cidade: ");
  scanf("%lu", populacao);

  printf("Digite a area da cidade: ");
  scanf("%f", area);

  printf("Digite o PIB da cidade: ");
  scanf("%f", pib);

  printf("Digite a quantidade de pontos turisticos: ");
  scanf("%d", pontos);

  *densidade = calcularDensidade(*populacao, *area);
  *pib_per_capita = calcularPibPerCapita(*pib, *populacao);
}

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char carta1_estado, carta1_codigo[4], carta1_nome_cidade[50];
  char carta2_estado, carta2_codigo[4], carta2_nome_cidade[50];
  unsigned long int carta1_populacao, carta2_populacao;
  int carta1_qtd_pontos_turisticos, carta2_qtd_pontos_turisticos;
  float carta1_area, carta1_pib, carta1_densidade, carta1_pib_per_capita;
  float carta2_area, carta2_pib, carta2_densidade, carta2_pib_per_capita;

  // Área para entrada de dados
  lerCarta(1, &carta1_estado, carta1_codigo, carta1_nome_cidade,
           &carta1_populacao, &carta1_area, &carta1_pib,
           &carta1_qtd_pontos_turisticos, &carta1_densidade,
           &carta1_pib_per_capita);
  printf("\n");
  lerCarta(2, &carta2_estado, carta2_codigo, carta2_nome_cidade,
           &carta2_populacao, &carta2_area, &carta2_pib,
           &carta2_qtd_pontos_turisticos, &carta2_densidade,
           &carta2_pib_per_capita);

   // Área para exibição dos dados da cidade
  exibirCarta(1, carta1_estado, carta1_codigo, carta1_nome_cidade,
              carta1_populacao, carta1_area, carta1_pib,
              carta1_qtd_pontos_turisticos, carta1_densidade,
              carta1_pib_per_capita);
  printf("\n");
  exibirCarta(2, carta2_estado, carta2_codigo, carta2_nome_cidade,
              carta2_populacao, carta2_area, carta2_pib,
              carta2_qtd_pontos_turisticos, carta2_densidade,
              carta2_pib_per_capita);

  return 0;
}
