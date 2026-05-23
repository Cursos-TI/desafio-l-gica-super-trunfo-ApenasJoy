#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    int populacao1, turisticos1;
    int populacao2, turisticos2;
    int escolha;

    float area1, pib1, densidade1, capita1, superpoder1;
    float area2,  pib2, densidade2, capita2, superpoder2;

    char estado1[20], codigo1[20], cidade1[20];
    char estado2[20], codigo2[20], cidade2[20];
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

      //Dados da Primeira Carta

    printf("Digite o estado da Primeira Carta: ");
    scanf("%s", estado1);

    printf("Digite o código da Primeira Carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da Primeira Carta: ");
    scanf("%s", cidade1);

    printf("Digite a população da Primeira Carta: ");
    scanf("%d", &populacao1);

    printf("Digite, em km², a área da Primeira Carta: ");
    scanf("%f", &area1);

    printf("Digite o PIB da Primeira Carta: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da Primeira Carta: ");
    scanf("%d", &turisticos1);

    //Dados da Segunda Carta

    printf("\nDigite o estado da Segunda Carta: ");
    scanf("%s", estado2);

    printf("Digite o código da Segunda Carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da Segunda Carta: ");
    scanf("%s", cidade2);

    printf("Digite a população da Segunda Carta: ");
    scanf("%d", &populacao2);

    printf("Digite, em km², a área da Segunda Carta: ");
    scanf("%f", &area2);

    printf("Digite o PIB da Segunda Carta: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da Segunda Carta: ");
    scanf("%d", &turisticos2);

  //Calculando a densidade populacional, o PIB per capita e o super poder
    
    densidade1 = populacao1/area1;
    densidade2 = populacao2/area2;

    pib1 *= 1000000000;
    pib2 *= 1000000000;
    capita1 = pib1/(float)populacao1;
    capita2 = pib2/(float)populacao2;

    pib1 /= 1000000000;
    pib2 /= 1000000000;
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)turisticos1 + capita1 + (1/densidade1);
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)turisticos2 + capita2 + (1/densidade2);

    //Exibindo os dados da Primeira Carta

    printf("\nCarta 1 \n");

    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turisticos: %d \n", turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", capita1);
    printf("Super Poder: %.2f \n", superpoder1);

    //Exibindo os dados da Segunda Carta

    printf("\nCarta 2 \n");

    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turisticos: %d \n", turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", capita2);
    printf("Super Poder: %.2f \n", superpoder2);
    
    //Escolha dos atributos para comparação

    printf("\nÉ hora do duelo!\n");
    printf("Escolha qual atributo você quer enfrentar.\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Pontos Turisticos.\n");
    printf("5. Densidade Populacional.\n");
    printf("6. PIB per Capita.\n");
    printf("7. Super Poder.\n");
    
    printf("\nDigite sua escolha: ");
    scanf("%d", &escolha);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

        switch (escolha)
        {
        case 1:
        printf ("\nPopulação vs População!\n");
        printf("\nCarta 1 - %s (%s): %d \n", cidade1, codigo1, populacao1);
        printf("Carta 2 - %s (%s): %d \n", cidade2, codigo2, populacao2);
        
        if (populacao1 > populacao2) {
            printf("\nA cidade vencedora é: %s\n", cidade1);
        } else if (populacao1 < populacao2) {
            printf("\nA cidade vencedora é: %s\n", cidade2);
        } else {
            printf("Deu empate! Ninguém venceu...");
        }
            break;
        
        case 2:
        printf ("\nÁrea vs Área!\n");
        printf("\nCarta 1 - %s (%s): %.2f \n", cidade1, codigo1, area1);
        printf("Carta 2 - %s (%s): %.2f \n", cidade2, codigo2, area2);

        if (area1 > area2) {
            printf("\nA cidade vencedora é: %s\n", cidade1);
        } else if (area1 < area2) {
            printf("\nA cidade vencedora é: %s\n", cidade2);
        } else {
            printf("Deu empate! Ninguém venceu...");
        }
            break;
        
        case 3:
        printf ("\nPIB vs PIB!\n");
        printf("\nCarta 1 - %s (%s): %.2f \n", cidade1, codigo1, pib1);
        printf("Carta 2 - %s (%s): %.2f \n", cidade2, codigo2, pib2);
        
        if (pib1 > pib2) {
            printf("\nA cidade vencedora é: %s\n", cidade1);
        } else if (pib1 < pib2) {
            printf("\nA cidade vencedora é: %s\n", cidade2);
        } else {
            printf("Deu empate! Ninguém venceu...");
        }
            break;
        
        case 4:
        printf ("\nPontos Turísticos vs Pontos Turísticos!\n");
        printf("\nCarta 1 - %s (%s): %d \n", cidade1, codigo1, turisticos1);
        printf("Carta 2 - %s (%s): %d \n", cidade2, codigo2, turisticos2);

        if (turisticos1 > turisticos2) {
            printf("\nA cidade vencedora é: %s\n", cidade1);
        } else if (turisticos1 < turisticos2) {
            printf("\nA cidade vencedora é: %s\n", cidade2);
        } else {
            printf("Deu empate! Ninguém venceu...");
        }
            break;
        
        case 5:
        printf ("\nDensidade vs Densidade!\n");
        printf("\nCarta 1 - %s (%s): %.2f \n", cidade1, codigo1, densidade1);
        printf("Carta 2 - %s (%s): %.2f \n", cidade2, codigo2, densidade2);

        if (densidade1 < densidade2) {
            printf("\nA cidade vencedora é: %s\n", cidade1);
        } else if (densidade1 > densidade2) {
            printf("\nA cidade vencedora é: %s\n", cidade2);
        } else {
            printf("Deu empate! Ninguém venceu...");
        }
            break;
        
        case 6:
        printf ("\nPIB per Capita vs PIB per Capita!\n");
        printf("\nCarta 1 - %s (%s): %.2f \n", cidade1, codigo1, capita1);
        printf("Carta 2 - %s (%s): %.2f \n", cidade2, codigo2, capita2);

        if (capita1 > capita2) {
            printf("\nA cidade vencedora é: %s\n", cidade1);
        } else if (capita1 < capita2) {
            printf("\nA cidade vencedora é: %s\n", cidade2);
        } else {
            printf("Deu empate! Ninguém venceu...");
        }
            break;
        
        case 7:
        printf ("\nSuper Poder vs Super Poder!\n");
        printf("\nCarta 1 - %s (%s): %.2f \n", cidade1, codigo1, superpoder1);
        printf("Carta 2 - %s (%s): %.2f \n", cidade2, codigo2, superpoder2);

        if (superpoder1 > superpoder2) {
            printf("\nA cidade vencedora é: %s\n", cidade1);
        } else if (superpoder1 < superpoder2) {
            printf("\nA cidade vencedora é: %s\n", cidade2);
        } else {
            printf("Deu empate! Ninguém venceu...");
        }
            break;
        
        default:
        printf ("Opa! Esta opção é inválida!");
            break;
        }

    return 0;
}
