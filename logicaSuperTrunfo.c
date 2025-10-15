#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas


int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
   // Variáveis para armazenar os dados da primeira carta
    char estado1;
    char codigo1[4]; 
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidade1;
    float percapita1;

   // Variáveis para armazenar os dados da segunda carta
    char estado2;
    char codigo2[4]; 
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidade2;
    float percapita2;

    // Variáveis de comparação entre as cartas
    float vencpib;
  
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // --- Leitura dos Dados da Carta 1 ---
    printf("Carta 1 \n");

    printf("Digite uma letra para o Estado (A-H): ");
    scanf(" %c", &estado1); 

    printf("Digite a letra do Estado + código 01 a 04 (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);
    printf("\n"); 
    
   // --- Cálculos da densidade populacional e PIB per capita da Carta 1 ---
    densidade1 = (float) populacao1 / area1;
    percapita1 = (float) (pib1 * 1000000000) / populacao1;

   // --- Leitura dos Dados da Carta 2 ---
    printf("Carta 2 \n");

    printf("Digite uma letra para o Estado (A-H): ");
    scanf(" %c", &estado2); 

    printf("Digite a letra do Estado + código 01 a 04 (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);
    printf("\n"); 

   // --- Cálculos da densidade populacional e PIB per capita da Carta 2 ---
    densidade2 = (float) populacao2 / area2;
    percapita2 = (float) (pib2 * 1000000000) / populacao2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.

    if (pib1 > pib2) {
         vencpib = cidade1;
     } else {
         vencpib = cidade2;
     }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    printf("Comparação de Cartas:\n");
    printf("Atributo: PIB \n");
    printf("Carta 1: %s : %.2f bilhões de reais \n",cidade1,pib1);
    printf("Carta 2: %s : %.2f bilhões de reais \n",cidade2,pib2); 
    printf("A cidade vencedora é: %s\n", vencpib);

    return 0;
}
