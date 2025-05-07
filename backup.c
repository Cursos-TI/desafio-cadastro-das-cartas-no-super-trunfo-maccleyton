// Código do Super Trunfo antes do projeto final

#include <stdio.h>

int main() {

    // Definindo as variáveis para armazenar os dados das cidades
    char estado1, estado2;
    char codCarta1[4], codCarta2[4];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    //unsigned long int populacao1, populacao2; //Não consegui tratar o erro que gera no calculo da Densidade e PIB per Capita
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;
    int opcao, atributo; // Implementação de menu com o uso de switch

    // Solicitando os dados da primeira cidade
    printf("Digite o estado da primeira cidade: ");
    scanf("%c", &estado1);

    printf("Digite o código da carta da primeira cidade: ");
    scanf("%s", codCarta1);

    printf("Digite o nome da primeira cidade: ");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da primeira cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da primeira cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em milhares) da primeira cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    // Calculando Densidade Populacional e PIB per Capita
    densidade1 = (float) populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000.0f) / (float) populacao1;

    // Repetindo o processo para a segunda cidade
    printf("Digite o estado da segunda cidade: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta da segunda cidade: ");
    scanf("%s", codCarta2);

    printf("Digite o nome da segunda cidade: ");
    scanf("%s", cidade2);
    // printf("\n");

    printf("Digite o número de habitantes da segunda cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da segunda cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em milhares) da segunda cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &pontosTuristicos2);
    // printf("\n");

    // Calculando Densidade Populacional e PIB per Capita
    densidade2 = (float) populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000.0f) / (float) populacao2;

    superPoder1 = (float) populacao1 + area1 + pib1 + (float) pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);
    superPoder2 = (float) populacao2 + area2 + pib2 + (float) pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    /* Ocultação devido a implementação do menu de seleção de atributo
    // Exibindo as informações da primeira cidade
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codCarta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f (milhares) reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f reais\n", superPoder1);
    printf("\n");

    // Exibindo as informações da segunda cidade
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codCarta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f (milhares) reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f reais\n", superPoder2);
    printf("\n");
    */

    // Comparação entre os atributos das duas cartas
    printf("Comparação dos atributos:\n");
    printf("1. Iniciar jogo...\n");
    printf("2. Ver regras.\n");
    printf("3. Sair.\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    printf("\n");

    switch (opcao) {
        case 1:
            printf("Iniciando o jogo...\n");
            printf("Atributos para comparação\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Demográfica\n");
            printf("6. PIB per Capita\n");
            printf("7. Super Poder\n");
            printf("Escolha uma atributo: ");
            scanf("%d", &atributo);
            printf("\n");

            switch (atributo) {
                case 1:
                    printf("\nComparando População entre %s e %s\n", cidade1, cidade2);
                    printf("Atributo: População\n");
                    printf("%s: %d habitantes\n", cidade1, populacao1);
                    printf("%s: %d habitantes\n", cidade2, populacao2);
                                
                    if (populacao1 > populacao2) {
                        printf("Vencedor: Carta 1 (%s)\n", cidade1);
                    } else if (populacao1 < populacao2) {
                        printf("Vencedor: Carta 2 (%s)\n", cidade2);
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 2:
                    printf("\nComparando Área Territorial entre %s e %s\n", cidade1, cidade2);
                    printf("Atributo: Área Territorial\n");
                    printf("%s: %.2f km²\n", cidade1, area1);
                    printf("%s: %.2f km²\n", cidade2, area2);
                                
                    if (area1 > area2) {
                        printf("Vencedor: Carta 1 (%s)\n", cidade1);
                    } else if (area1 < area2) {
                        printf("Vencedor: Carta 2 (%s)\n", cidade2);
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 3:
                    printf("\nComparando PIB entre %s e %s\n", cidade1, cidade2);
                    printf("Atributo: PIB\n");
                    printf("%s: %.2f (milhares) reais\n", cidade1, pib1);
                    printf("%s: %.2f (milhares) reais\n", cidade2, pib2);
                                
                    if (pib1 > pib2) {
                        printf("Vencedor: Carta 1 (%s)\n", cidade1);
                    } else if (pib1 < pib2) {
                        printf("Vencedor: Carta 2 (%s)\n", cidade2);
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 4:
                    printf("\nComparando Pontos Turísticos entre %s e %s\n", cidade1, cidade2);
                    printf("Atributo: Pontos Turísticos\n");
                    printf("%s: %d pontos turísticos\n", cidade1, pontosTuristicos1);
                    printf("%s: %d pontos turísticos\n", cidade2, pontosTuristicos2);
                                
                    if (pontosTuristicos1 > pontosTuristicos2) {
                        printf("Vencedor: Carta 1 (%s)\n", cidade1);
                    } else if (pontosTuristicos1 < pontosTuristicos2) {
                        printf("Vencedor: Carta 2 (%s)\n", cidade2);
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 5:
                    printf("\nComparando Densidade Demográfica entre %s e %s\n", cidade1, cidade2);
                    printf("Atributo: Densidade Demográfica\n");
                    printf("%s: %.2f hab/km²\n", cidade1, densidade1);
                    printf("%s: %.2f hab/km²\n", cidade2, densidade2);
                                
                    if (densidade1 < densidade2) {
                        printf("Vencedor: Carta 1 (%s)\n", cidade1);
                    } else if (densidade1 > densidade2) {
                        printf("Vencedor: Carta 2 (%s)\n", cidade2);
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 6:
                    printf("\nComparando PIB per Capita entre %s e %s\n", cidade1, cidade2);
                    printf("Atributo: PIB per Capita\n");
                    printf("%s: %.2f \n", cidade1, pibPerCapita1);
                    printf("%s: %.2f \n", cidade2, pibPerCapita2);
                                
                    if (pibPerCapita1 > pibPerCapita2) {
                        printf("Vencedor: Carta 1 (%s)\n", cidade1);
                    } else if (pibPerCapita1 < pibPerCapita2) {
                        printf("Vencedor: Carta 2 (%s)\n", cidade2);
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 7:
                    printf("\nComparando Super Poder entre %s e %s\n", cidade1, cidade2);
                    printf("Atributo: Super Poder\n");
                    printf("%s: %.2f \n", cidade1, superPoder1);
                    printf("%s: %.2f \n", cidade2, superPoder2);
                                
                    if (superPoder1 > superPoder2) {
                        printf("Vencedor: Carta 1 (%s)\n", cidade1);
                    } else if (superPoder1 < superPoder2) {
                        printf("Vencedor: Carta 2 (%s)\n", cidade2);
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                default: {
                    printf("Opção inválida!\n");
                    break;
                }
            }
            break;
        case 2:
            printf("1. Regra geral: vence a carta com o maior valor no atributo escolhido.\n");
            printf("2. Densidade demográfica: vence a carta com o menor valor.\n");
            break;
        case 3:
            printf("Saindo do jogo...\n");
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
