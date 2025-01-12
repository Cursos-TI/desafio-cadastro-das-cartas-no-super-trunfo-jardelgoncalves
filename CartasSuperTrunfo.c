#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
  // Definição das variáveis
  char codigo_carta[4];
  char cidade[50];
  char estado[3];
  int populacao;
  float area; // em km²
  float pib;
  int qtd_pontos_turisticos;

  // Capturar informação de estado
  printf("-----------  CADASTRO DE CARTA  -----------\n\n");
  printf("\nInforme o nome da cidade (ex: São Paulo): ");
  scanf("%49[^\n]", &cidade);

  printf("Informe o estado (ex: SP): ");
  scanf(" %2[^\n]", &estado);

  printf("Informe o código da carta (ex: A01): ");
  scanf(" %3[^\n]", &codigo_carta);

  printf("Informe a população de %s: ", cidade);
  scanf("%d", &populacao);

  printf("Informe a área total em km² de %s: ", cidade);
  scanf("%f", &area);

  printf("Informe o PIB de %s: ", cidade);
  scanf("%f", &pib);

  printf("Informe a quantidade de pontos turísticos de %s: ", cidade);
  scanf("%d", &qtd_pontos_turisticos);

// Exibição dos Dados das Cartas

  printf("\n\n-------  DADOS DA CARTA CADASTRADA  -------\n\n");
  printf("CÓDIGO DA CARTA: %s\nCIDADE: %s\nESTADO: %s\n", codigo_carta, cidade, estado);
  printf("POPULAÇÃO: %d\nÁREA: %.2f\nPIB: %.2f\nQUANTIDADE DE PONTOS TURÍSTICOS: %d\n", populacao, area, pib, qtd_pontos_turisticos);

  
  return 0;
}
