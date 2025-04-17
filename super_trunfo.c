#include <stdio.h>

int main() {

    // Definindo as variáveis para armazenar os dados das cidades
    char estado1, estado2;
    char codCarta1[4], codCarta2[4];
    char cidade1[20], cidade2[20];
    int habitantes1, habitantes2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

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
    scanf("%d", &habitantes1);
    printf("\n");

    printf("Digite a área da primeira cidade: ");
    scanf("%f", &area1);
    printf("\n");

    printf("Digite o PIB da primeira cidade: ");
    scanf("%f", &pib1);
    printf("\n");

    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

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
    scanf("%d", &habitantes2);
    printf("\n");

    printf("Digite a área da segunda cidade: ");
    scanf("%f", &area2);
    printf("\n");

    printf("Digite o PIB da segunda cidade: ");
    scanf("%f", &pib2);
    printf("\n");

    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    /*
    Realizei uma pequena adequação no comando de exibição do código da carta
    O usuário precisará apenas digitar o sequencial da cidade (01, 02 etc)
    O código está configurado para buscar e exibir a letra do Estado + o código da carta (ex: A01)
    Abaixo a demonstração de como ficou o comando de exibição
    printf("Código: %c%s\n", estado1, codCarta1);
    */

    // Exibindo as informações da primeira cidade
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codCarta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", habitantes1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("\n");

    // Exibindo as informações da segunda cidade
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codCarta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", habitantes2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}