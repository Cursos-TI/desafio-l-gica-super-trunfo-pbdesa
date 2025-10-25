#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas - Pablo Francisco de Sa


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

    // Variáveis do menu interativo
    int opcao1;
    int opcao2;
    
    // Início do Programa
    
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

    //--- Menu Interativo de Comparação ---
    printf("Menu:\n");
    printf("Escolha o atributo para comparar entre as duas cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha uma opção para comparar: ");
    scanf("%d", &opcao1);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.

    switch (opcao1) {
        case 1:
            // Comparação por População
            printf("Comparação de Cartas:\n");
            printf("Atributo: População \n");
            printf("Carta 1 - %s: %lu habitantes \n",cidade1,populacao1);
            printf("Carta 2 - %s: %lu habitantes \n",cidade2,populacao2);
            if (populacao1 > populacao2) {
                printf("Carta 1 vence!\n");
            } else if (populacao1 < populacao2) {
                printf("Carta 2 vence!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 2:
            // Comparação por Área
            printf("Comparação de Cartas:\n");
            printf("Atributo: Área \n");
            printf("Carta 1 - %s: %.2f km2 \n",cidade1,area1);
            printf("Carta 2 - %s: %.2f km2 \n",cidade2,area2);
            if (area1 > area2) {
                printf("Carta 1 vence!\n");
            } else if (area1 < area2) {
                printf("Carta 2 vence!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 3:
            // Comparação por PIB
            printf("Comparação de Cartas:\n");
            printf("Atributo: PIB \n");
            printf("Carta 1 - %s: %.2f bilhões de reais \n",cidade1,pib1);
            printf("Carta 2 - %s: %.2f bilhões de reais \n",cidade2,pib2);
            if (pib1 > pib2) {
                printf("Carta 1 vence!\n");
            } else if (pib1 < pib2) {
                printf("Carta 2 vence!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 4:
            // Comparação por Número de Pontos Turísticos
            printf("Comparação de Cartas:\n");
            printf("Atributo: Número de Pontos Turísticos \n");
            printf("Carta 1 - %s: %d pontos \n",cidade1,pontosturisticos1);
            printf("Carta 2 - %s: %d pontos \n",cidade2,pontosturisticos2);
            if (pontosturisticos1 > pontosturisticos2) {
                printf("Carta 1 vence!\n");
            } else if (pontosturisticos1 < pontosturisticos2) {
                printf("Carta 2 vence!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 5:
            // Comparação por Densidade Demográfica
            printf("Comparação de Cartas:\n");
            printf("Atributo: Densidade Demográfica \n");
            printf("Carta 1 - %s: %.2f habitantes/km2 \n",cidade1,densidade1);
            printf("Carta 2 - %s: %.2f habitantes/km2 \n",cidade2,densidade2);
            if (densidade1 < densidade2) {
                printf("Carta 1 vence!\n");
            } else if (densidade1 > densidade2) {
                printf("Carta 2 vence!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
        }   

    return 0;
}   
