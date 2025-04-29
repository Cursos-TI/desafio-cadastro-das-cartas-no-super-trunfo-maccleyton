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

    // Solicitando os dados da primeira cidade
    printf("Digite o estado da primeira cidade: ");
    scanf("%c", &estado1);
    printf("\n");

    printf("Digite o código da carta da primeira cidade: ");
    scanf("%s", codCarta1);
    printf("\n");

    printf("Digite o nome da primeira cidade: ");
    scanf("%s", cidade1);
    printf("\n");

    printf("Digite o número de habitantes da primeira cidade: ");
    scanf("%d", &populacao1);
    printf("\n");

    printf("Digite a área da primeira cidade: ");
    scanf("%f", &area1);
    printf("\n");

    printf("Digite o PIB (em milhares) da primeira cidade: ");
    scanf("%f", &pib1);
    printf("\n");

    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    // Calculando Densidade Populacional e PIB per Capita
    densidade1 = (float) populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000.0f) / (float) populacao1;

    // Repetindo o processo para a segunda cidade
    printf("Digite o estado da segunda cidade: ");
    scanf(" %c", &estado2);
    printf("\n");

    printf("Digite o código da carta da segunda cidade: ");
    scanf("%s", codCarta2);
    printf("\n");

    printf("Digite o nome da segunda cidade: ");
    scanf("%s", cidade2);
    printf("\n");

    printf("Digite o número de habitantes da segunda cidade: ");
    scanf("%d", &populacao2);
    printf("\n");

    printf("Digite a área da segunda cidade: ");
    scanf("%f", &area2);
    printf("\n");

    printf("Digite o PIB (em milhares) da segunda cidade: ");
    scanf("%f", &pib2);
    printf("\n");

    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // Calculando Densidade Populacional e PIB per Capita
    densidade2 = (float) populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000.0f) / (float) populacao2;

    superPoder1 = (float) populacao1 + area1 + pib1 + (float) pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);
    superPoder2 = (float) populacao2 + area2 + pib2 + (float) pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    /*
    Realizei uma pequena adequação no comando de exibição do código da carta
    O usuário precisará apenas digitar o sequencial da cidade (01, 02 etc)
    O código está configurado para buscar e exibir a letra do Estado + o código da carta (ex: A01)
    Abaixo a demonstração de como ficou o comando de exibição
    printf("Código: %c%s\n", estado1, codCarta1);
    O PIB solicita a entrada em milhares devido a precisão, e como é solicitado que usamos float
    Ajustei a formula do PIB per Capita para ficar próximo ao real
    */

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
    printf("\n");

    // Comparação entre os atributos das duas cartas
    printf("Comparação de Cartas. (1 = Carta 1 venceu. 0 = Carta 2 venceu)\n");

    printf("População: (%d)\n", populacao1 > populacao2);
    printf("Área: (%d)\n", area1 > area2);
    printf("PIB: (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: (%d)\n", densidade1 < densidade2);  // Menor densidade vence
    printf("PIB per Capita: (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: (%d)\n", superPoder1 > superPoder2);
    printf("\n");

    return 0;
}