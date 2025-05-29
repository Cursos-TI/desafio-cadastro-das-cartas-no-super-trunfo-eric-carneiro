#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
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

    //Exibição dos dados da primeira carta

    printf("\n Atributos da primeira carta: \n");

    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);

    //Exibição dos dados da segunda carta

    printf("\n Atributos da segunda carta: \n");

    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);

    return 0;
}
