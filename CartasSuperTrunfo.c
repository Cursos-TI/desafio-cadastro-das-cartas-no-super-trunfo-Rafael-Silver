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
    unsigned long int populacao1, populacao2;           // População das cidades
    float area1, area2;                   // Área das cidades em km²
    float pib1, pibpc1, pib2, pibpc2;     // PIB e PIB per capita das cidades
    int pontosTuristicos1, pontosTuristicos2; // Número de pontos turísticos
    float densidade1, densidade2;           // Densidade Populacional
    float superpoder1, superpoder2;         // somatorio de todos os valores de uma carta
    int resultado, opcao;                          // Armazena resultado de compraçaõ de dados

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
    scanf("%lu", &populacao1);  // Lê um inteiro

    printf("Área (em km²): ");
    scanf("%f", &area1);       // Lê um float

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);        // Lê um float

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1); // Lê um inteiro

    printf("\n");

    densidade1 = populacao1/area1;  // Calcula a Densidade Populacional dividindo a população da cidade pela sua área
    pibpc1 = pib1/populacao1;       // Calcula PIB per Capita Dividindo o PIB da cidade pela sua população
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibpc1 - densidade1; // calcule o "Super Poder" 
                        //somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, 
                      //PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")

    // ===== Entrada dos dados da segunda carta =====
    printf("Insira os dados da Carta 2:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (apenas o número, ex: 01): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2/area2;
    pibpc2 = pib1/populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibpc2 - densidade2;

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
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpc1);
    printf("Super Poder: %.2f\n", superpoder1);

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
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);
    printf("Super Poder: %.2f\n", superpoder2);

    printf("\n");

        // ===== Comparação entre as cartas =====
    printf("*** Comparação entre as cartas ***\n\n");

    printf("Escolha o atributo para comparar:\n\n");

    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - Super Poder\n\n");

    printf("Opção: ");
    scanf("%d",&opcao);

    switch (opcao)
    {
    case 1:
        printf("Comparação de cartas (Atributo: População):\n\n");
        printf("Carta 1 - %s: %d\n", nomeCidade1, populacao1);
        printf("Carta 2 - %s: %d\n", nomeCidade2, populacao2);
        
        printf("\n");

        if (populacao1 > populacao2)
        {
            printf("Resultado: Carta 1 (%s) venceu!", nomeCidade1);
        }
        else if (populacao1 < populacao2)
        {
            printf("Resultado: Carta 2 (%s) venceu!", nomeCidade2);
        }
        else
        {
            printf("Resultado: Empate!");
        }    
        break;
    case 2:
        printf("Comparação de cartas (Atributo: Área):\n\n");
        printf("Carta 1 - %s: %.2f\n", nomeCidade1, area1);
        printf("Carta 2 - %s: %.2f\n", nomeCidade2, area2);
        
        printf("\n");

        if (area1 > area2)
        {
            printf("Resultado: Carta 1 (%s) venceu!", nomeCidade1);
        }
        else if (area1 < area2)
        {
            printf("Resultado: Carta 2 (%s) venceu!", nomeCidade2);
        }
        else
        {
            printf("Resultado: Empate!");
        }
        break;
    case 3:
                printf("Comparação de cartas (Atributo: PIB):\n\n");
        printf("Carta 1 - %s: %.2f\n", nomeCidade1, pib1);
        printf("Carta 2 - %s: %.2f\n", nomeCidade2, pib2);
        
        printf("\n");

        if (pib1 > pib2)
        {
            printf("Resultado: Carta 1 (%s) venceu!", nomeCidade1);
        }
        else if (pib1 < pib2)
        {
            printf("Resultado: Carta 2 (%s) venceu!", nomeCidade2);
        }
        else
        {
            printf("Resultado: Empate!");
        }
        break;            
    case 4:
                printf("Comparação de cartas (Atributo: Número de Pontos Turísticos):\n\n");
        printf("Carta 1 - %s: %d\n", nomeCidade1, pontosTuristicos1);
        printf("Carta 2 - %s: %d\n", nomeCidade2, pontosTuristicos2);
        
        printf("\n");

        if (pontosTuristicos1 > pontosTuristicos2)
        {
            printf("Resultado: Carta 1 (%s) venceu!", nomeCidade1);
        }
        else if (pontosTuristicos1 < pontosTuristicos2)
        {
            printf("Resultado: Carta 2 (%s) venceu!", nomeCidade2);
        }
        else
        {
            printf("Resultado: Empate!");
        }
        break;
    case 5:
                printf("Comparação de cartas (Atributo: Densidade Populacional):\n\n");
        printf("Carta 1 - %s: %.2f\n", nomeCidade1, densidade1);
        printf("Carta 2 - %s: %.2f\n", nomeCidade2, densidade2);
        
        printf("\n");

        if (densidade1 > densidade2)
        {
            printf("Resultado: Carta 1 (%s) venceu!", nomeCidade1);
        }
        else if (densidade1 < densidade2)
        {
            printf("Resultado: Carta 2 (%s) venceu!", nomeCidade2);
        }
        else
        {
            printf("Resultado: Empate!");
        }
        break;
    case 6:
                printf("Comparação de cartas (Atributo: Super Poder):\n\n");
        printf("Carta 1 - %s: %.2f\n", nomeCidade1, superpoder1);
        printf("Carta 2 - %s: %.3f\n", nomeCidade2, superpoder2);
        
        printf("\n");

        if (superpoder1 > superpoder2)
        {
            printf("Resultado: Carta 1 (%s) venceu!", nomeCidade1);
        }
        else if (superpoder1 < superpoder2)
        {
            printf("Resultado: Carta 2 (%s) venceu!", nomeCidade2);
        }
        else
        {
            printf("Resultado: Empate!");
        }
        break;
    default:
        printf("Opção inválida!");
        break;
    }

    return 0;
}