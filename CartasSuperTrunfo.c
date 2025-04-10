#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Variáveis para armazenar os dados das duas cartas
    char estado1, estado2;                // Estado de cada carta (letra de A a H)
    char codigo1[5], codigo2[5];          // Código completo (ex: "A01", "B03")
    char nomeCidade1[100], nomeCidade2[100]; // Nome das cidades
    int populacao1, populacao2;           // População das cidades
    float area1, area2;                   // Área das cidades em km²
    float pib1, pib2;                     // PIB das cidades em bilhões
    int pontosTuristicos1, pontosTuristicos2; // Número de pontos turísticos

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // ===== Entrada dos dados da primeira carta =====
    printf("Insira os dados da Carta 1:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);  // Lê um caractere (estado)

    printf("Código da Carta (apenas o número, ex: 01): ");
    scanf("%s", codigo1);  // Lê string com o número do código

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade1);  // Lê uma string com espaços

    printf("População: ");
    scanf("%d", &populacao1);  // Lê um inteiro

    printf("Área (em km²): ");
    scanf("%f", &area1);       // Lê um float

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);        // Lê um float

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1); // Lê um inteiro

    printf("\n");

    // ===== Entrada dos dados da segunda carta =====
    printf("Insira os dados da Carta 2:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (apenas o número, ex: 01): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // ===== Impressão dos dados da primeira carta =====
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n");

    // ===== Impressão dos dados da segunda carta =====
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    
    return 0;
}
