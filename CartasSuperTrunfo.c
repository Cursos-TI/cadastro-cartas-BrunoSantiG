#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int compararAtributos(float valor1, float valor2, int menor_vence) {
  if (menor_vence) {
    return valor1 < valor2;
  } else {
    return valor1 > valor2;
  }
}

int recuperarCartaGanhadora(int resultado) {
  return resultado? 1 : 2;
}

void compararCartas(unsigned long int carta1_populacao, unsigned long int carta2_populacao, float carta1_area, float carta2_area, float carta1_pib, float carta2_pib, int carta1_pontos, int carta2_pontos, float carta1_densidade, float carta2_densidade, float carta1_pib_per_capita, float carta2_pib_per_capita, float carta1_super_poder, float carta2_super_poder) {
  printf("\n\nComparação de Cartas:\n");

  int resultado_populacao = compararAtributos(carta1_populacao, carta2_populacao, 0);
  printf("População: Carta %d venceu (%d)\n", recuperarCartaGanhadora(resultado_populacao), resultado_populacao);

  int resultado_area = compararAtributos(carta1_area, carta2_area, 0);
  printf("Área: Carta %d venceu (%d)\n", recuperarCartaGanhadora(resultado_area), resultado_area);

  int resultado_pib = compararAtributos(carta1_pib, carta2_pib, 0);
  printf("PIB: Carta %d venceu (%d)\n", recuperarCartaGanhadora(resultado_pib), resultado_pib);

  int resultado_pontos = compararAtributos(carta1_pontos, carta2_pontos, 0);
  printf("Pontos Turísticos: Carta %d venceu (%d)\n", recuperarCartaGanhadora(resultado_pontos), resultado_pontos);

  int resultado_densidade = compararAtributos(carta1_densidade, carta2_densidade, 1);
  printf("Densidade Populacional: Carta %d venceu (%d)\n", recuperarCartaGanhadora(resultado_densidade), resultado_densidade);

  int resultado_pib_per_capita = compararAtributos(carta1_pib_per_capita, carta2_pib_per_capita, 0);
  printf("PIB per Capita: Carta %d venceu (%d)\n", recuperarCartaGanhadora(resultado_pib_per_capita), resultado_pib_per_capita);

  int resultado_super_poder = compararAtributos(carta1_super_poder, carta2_super_poder, 0);
  printf("Super Poder: Carta %d venceu (%d)\n", recuperarCartaGanhadora(resultado_super_poder), resultado_super_poder);
}

float calcularDensidade(unsigned long int populacao, float area) {
  return (float)populacao / area;
}

float calcularPibPerCapita(float pib, unsigned long int populacao) {
  return (pib * 1000000000) / (float)populacao;
}

void lerCarta(int numero, char *estado, char codigo[4], char nome[50], unsigned long int *populacao, float *area, float *pib, int *pontos, float *densidade, float *pib_per_capita, float *super_poder) {
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
  *super_poder = (float)(*populacao) + *area + *pib + (float)(*pontos) + *pib_per_capita + (1 / *densidade);
}

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char carta1_estado, carta1_codigo[4], carta1_nome_cidade[50];
  char carta2_estado, carta2_codigo[4], carta2_nome_cidade[50];
  unsigned long int carta1_populacao, carta2_populacao;
  int carta1_qtd_pontos_turisticos, carta2_qtd_pontos_turisticos;
  float carta1_area, carta1_pib, carta1_densidade, carta1_pib_per_capita, carta1_super_poder;
  float carta2_area, carta2_pib, carta2_densidade, carta2_pib_per_capita, carta2_super_poder;

  // Área para entrada de dados
  lerCarta(1, &carta1_estado, carta1_codigo, carta1_nome_cidade,
           &carta1_populacao, &carta1_area, &carta1_pib,
           &carta1_qtd_pontos_turisticos, &carta1_densidade,
           &carta1_pib_per_capita, &carta1_super_poder);
  printf("\n");
  lerCarta(2, &carta2_estado, carta2_codigo, carta2_nome_cidade,
           &carta2_populacao, &carta2_area, &carta2_pib,
           &carta2_qtd_pontos_turisticos, &carta2_densidade,
           &carta2_pib_per_capita, &carta2_super_poder);

  // Área para exibição dos dados da cidade
  compararCartas(carta1_populacao, carta2_populacao,
    carta1_area, carta2_area,
    carta1_pib, carta2_pib,
    carta1_qtd_pontos_turisticos, carta2_qtd_pontos_turisticos,
    carta1_densidade, carta2_densidade,
    carta1_pib_per_capita, carta2_pib_per_capita,
    carta1_super_poder, carta2_super_poder
  );

  return 0;
}
