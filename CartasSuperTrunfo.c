#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Cadastro da Carta 1 
  char estado1;
  char codigo1[4];
  char cidade1[50]; 
  int populacao1; 
  float area1; 
  float pib1; 
  int pontos1;
  
  // Cadastro da Carta 2
   char estado2;
  char codigo2[4];
  char cidade2[50]; 
  int populacao2; 
  float area2; 
  float pib2; 
  int pontos2;

  // Área para entrada de dados
  // CARTA 1

  printf("Cadastro da Carta 1\n ");
  printf("Digite o estado:\n ");
  scanf(" %c", &estado1);
  
  printf("Digite o código da carta:\n ");
  scanf("%s", codigo1);                   

  printf("Digite o nome da cidade:\n ");
  scanf("%s", cidade1);

  printf("Digite a população da cidade:\n ");
  scanf("%d", &populacao1);

  printf("Digite a área em Km² da cidade:\n ");
  scanf("%f", &area1);

  printf("Digite o PIB da cidade:\n ");
  scanf("%f", &pib1);

  printf("Digite o total de pontos turísticos:\n ");
  scanf("%d", &pontos1);

  //CARTA 2
  
  printf("Cadastro da Carta 2\n ");
  printf("Digite o estado:\n ");
  scanf(" %c", &estado2);
  
  printf("Digite o código da carta:\n ");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade:\n ");
  scanf("%s", cidade2);

  printf("Digite a população da cidade:\n ");
  scanf("%d", &populacao2);

  printf("Digite a área em Km² da cidade:\n ");
  scanf("%f", &area2);

  printf("Digite o PIB da cidade:\n ");
  scanf("%f", &pib2);

  printf("Digite o total de pontos turísticos:\n ");
  scanf("%d", &pontos2);

  // Área para exibição dos dados da cidade
  // Exibição da Carta 1
  
  printf("CARTA 1\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f Km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de pontos turísticos: %d\n", pontos1);
  printf("----------------------------------\n");

  // Exibição da Carta 2

  printf("CARTA 2\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f Km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de pontos turísticos: %d\n", pontos2);

return 0;
} 
