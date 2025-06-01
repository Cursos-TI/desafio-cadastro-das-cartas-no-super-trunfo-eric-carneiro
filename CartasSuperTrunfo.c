#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){
    //Variáveis da primeira carta
    char estado1[8];
    char codigo1[4];
    char cidade1[50];
    int populacao1; 
    float area1;
    float pib1;
    int pontos1;

    //Variáveis da segunda carta
    char estado2[8];
    char codigo2[4];
    char cidade2[50];
    int populacao2; 
    float area2;
    float pib2;
    int pontos2;

    //Variáveis de armazenamento do resultado
    float densidade1, pibPerCapita1, superPoder1;
    float densidade2, pibPerCapita2, superPoder2;



    //Introdução e leitura variáveis primeira carta
    printf("Cadastro da primeira carta:\n");

    printf("Digite uma letra de A a H para o estado=\n");
    scanf("%s", &estado1);

    printf("Digite a letra do estado seguida de um numero de 01 a 04 = \n");
    scanf("%s", &codigo1);

    printf("Digite uma cidade = \n");
    scanf("%s", &cidade1);

    printf("Digite a população da cidade = \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade = \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade = \n");
    scanf("%f", &pib1);

    printf("Digite número de pontos turísticos = \n");
    scanf("%d", &pontos1);

    // Cálculos da Densidade Populacional e PIB per Capita para a primeira cidade
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 * 1000000000 / populacao1;

    // Cálculo do Super Poder
    superPoder1 = (float)populacao1 + area1 + pib1 * 1000000000 + pontos1 + pibPerCapita1 + (1 / densidade1);

    //Introdução e leitura variáveis segunda carta
    printf("Cadastro da segunda carta:\n");

    printf("Digite uma letra de A a H para o estado=\n");
    scanf("%s", &estado2);

    printf("Digite a letra do estado seguida de um numero de 01 a 04 = \n");
    scanf("%s", &codigo2);

    printf("Digite uma cidade = \n");
    scanf("%s", &cidade2);

    printf("Digite a população da cidade = \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade = \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade = \n");
    scanf("%f", &pib2);

    printf("Digite número de pontos turísticos = \n");
    scanf("%d", &pontos2);
    

    // Cálculos da Densidade Populacional e PIB per Capita para a segunda cidade
    densidade1 = populacao2 / area2;
    pibPerCapita2 = pib2 * 1000000000 / populacao2;

    // Cálculo do Super Poder
    superPoder2 = (float)populacao2 + area2 + pib2 * 1000000000 + pontos2 + pibPerCapita2 + (1 / densidade2);

    //Exibição dos dados da primeira carta

    printf("\n Atributos da primeira carta: \n");

    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais \n", pibPerCapita1);

    //Exibição dos dados da segunda carta

    printf("\n Atributos da segunda carta: \n");

    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais \n", pibPerCapita2);

    // Comparação dos atributos e exibição dos resultados
    printf("\nComparação de Cartas:\n");

    // Comparando População
    printf("População: Carta 1 venceu (%d)\n", (populacao1 > populacao2));

    // Comparando Área
    printf("Área: Carta 1 venceu (%d)\n", (area1 > area2));

    // Comparando PIB
    printf("PIB: Carta 1 venceu (%d)\n", (pib1 > pib2));

    // Comparando Pontos Turísticos
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", (pontos1 > pontos2));

    // Comparando Densidade Populacional (menor é melhor)
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", (densidade1 > densidade2));

    // Comparando PIB per Capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", (pibPerCapita1 > pibPerCapita2));

    // Comparando Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", (superPoder1 > superPoder2));
    
    return 0;
}
