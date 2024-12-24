#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Declaração das variaveis.
    int pontos_turisticos, pontos_turisticos02, menu;
    long int populacao, populacao02;
    float area, area02, densidade_populacional, densidade_populacional02, super_poder, super_poder02;
    char estado, estado02, nome_cidade[20], nome_cidade02[20], codigo_cidade[10], codigo_cidade02[10]; 
    double pib, pib02, pib_per_capita, pib_per_capita02;

 
    //Solicitando os dados e atribuindo os valores dos dados às variaveis da primeira carta
    printf("Informe os dados da primeira carta:\n");
    printf("Digite o estado: ");
    scanf(" %c", &estado);

    printf("Digite o código da cidade: ");
    scanf(" %s", &codigo_cidade);

    printf("Digite o nome da cidade: ");
    scanf(" %s", &nome_cidade);

    printf("Digite o número da população: ");
    scanf(" %ld", &populacao);

    printf("Digite o valor da area: ");
    scanf(" %f", &area);

    printf("Digite o PIB: ");
    scanf(" %lf", &pib);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);

    //Atribuindo os valores de densidade populacional e pib per capita da carta 1
    densidade_populacional = (float) pib / populacao;
    pib_per_capita = (float) populacao / area;

    //Somando todos os valores da carta 1
    super_poder = populacao + area + pib + pontos_turisticos;

    //Exibindo os dados da carta 1
    printf("\nPrimeira Carta:");
    printf("\nEstado: %c", estado);
    printf("\nCodigo da cidade: %s", codigo_cidade);
    printf("\nNome da cidade: %s", nome_cidade);
    printf("\nPopulação: %ld", populacao);
    printf("\nÁrea: %.2f km²", area);
    printf("\nPIB: %.2lf bilhões de reais", pib);
    printf("\nPontos turisticos: %d", pontos_turisticos);
    printf("\nPib per capita: %.2lf", pib_per_capita);
    printf("\nDensidade populacional: %.2f ", densidade_populacional);
    printf("\nSoma de todos os atributos da carta: %.2f\n", super_poder);

    //Solicitando os dados e atribuindo os valores dos dados às variaveis da segunda carta
    printf("\ninforme os dados da segunda carta:\n");
    printf("Digite o estado: ");
    scanf(" %c", &estado02);

    printf("Digite o código da cidade: ");
    scanf(" %s", &codigo_cidade02);

    printf("Digite o nome da cidade: ");
    scanf(" %s", &nome_cidade02);

    printf("Digite o número da população: ");
    scanf(" %ld", &populacao02);

    printf("Digite o valor da area: ");
    scanf(" %f", &area02);

    printf("Digite o PIB: ");
    scanf(" %lf", &pib02);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos02);

    //Atribuindo os valores de densidade populacional e pib per capita da carta 2
    densidade_populacional02 = (float) pib02 / populacao02;
    pib_per_capita02 = (float) populacao02 / area02;

    //Somando todos os valores da carta 2
    super_poder02 = populacao02 + area02 + pib02 + pontos_turisticos02;
    
    //Exibindo os dados da carta 2
    printf("\nSegunda Carta:");
    printf("\nEstado: %c", estado02);
    printf("\nCodigo da cidade: %s", codigo_cidade02);
    printf("\nNome da cidade: %s", nome_cidade02);
    printf("\nPopulação: %ld", populacao02);
    printf("\nÁrea: %.2f km²", area02);
    printf("\nPIB: %.2lf bilhões de reais", pib02);
    printf("\nPontos turisticos: %d", pontos_turisticos02);
    printf("\nPib per capita: %.2lf", pib_per_capita02);
    printf("\nDensidade populacional: %.2f ", densidade_populacional02);
    printf("\nSoma de todos os atributos da carta: %.2f\n", super_poder02);

    printf("Escolha qual atributo deseja comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade populacional\n");
    printf("5 - PIB per capita\n");
    printf("Digite um número:");
    scanf("%d", &menu);

    switch (menu) {
        case 1:
            printf("Comparação do atributo População:\n");
            if (populacao > populacao02) {
                printf("Carta 1 - Estado: %c, Código: %s, População: %ld \n", estado, codigo_cidade, populacao);
                printf("Carta 2 - Estado: %c, Código: %s, População: %ld \n", estado02, codigo_cidade02, populacao02);
                printf("Resultado: Carta 1 é a vencedora!\n");
            }else {
                printf("Carta 1 - Estado: %c, Código: %s, População: %ld \n", estado, codigo_cidade, populacao);
                printf("Carta 2 - Estado: %c, Código: %s, População: %ld \n", estado02, codigo_cidade02, populacao02);
                printf("Resultado: Carta 2 é a vencedora!\n");
            }
        break;
        case 2:
            printf("Comparação do atributo Área:\n");
            if (area > area02) {
                printf("Carta 1 - Estado: %c, Código: %s, Área: %.2f \n", estado, codigo_cidade, area);
                printf("Carta 2 - Estado: %c, Código: %s, Área: %.2f \n", estado02, codigo_cidade02, area02);
                printf("Resultado: Carta 1 é a vencedora!\n");
            }else {
                printf("Carta 1 - Estado: %c, Código: %s, Área: %.2f \n", estado, codigo_cidade, area);
                printf("Carta 2 - Estado: %c, Código: %s, Área: %.2f \n", estado02, codigo_cidade02, area02);
                printf("Resultado: Carta 2 é a vencedora!\n");
            }
        break;
        case 3:
            printf("Comparação do atributo PIB:\n");
            if (pib > pib02) {
                printf("Carta 1 - Estado: %c, Código: %s, PIB: %.2lf \n", estado, codigo_cidade, pib);
                printf("Carta 2 - Estado: %c, Código: %s, PIB: %.2lf \n", estado02, codigo_cidade02, pib02);
                printf("Resultado: Carta 1 é a vencedora!\n");
            }else {
                printf("Carta 1 - Estado: %c, Código: %s, PIB: %.2lf \n", estado, codigo_cidade, pib);
                printf("Carta 2 - Estado: %c, Código: %s, PIB: %.2lf \n", estado02, codigo_cidade02, pib02);
                printf("Resultado: Carta 2 é a vencedora!\n");
            }
        break;
        case 4:
            printf("Comparação do atributo Densidade Populacional:\n");
            if (densidade_populacional < densidade_populacional02) {
                printf("Carta 1 - Estado: %c, Código: %s, Densidade Populacional: %.2f \n", estado, codigo_cidade, densidade_populacional);
                printf("Carta 2 - Estado: %c, Código: %s, Densidade Populacional: %.2f \n", estado02, codigo_cidade02, densidade_populacional02);
                printf("Resultado: Carta 1 é a vencedora!\n"); 
            }else {
                printf("Carta 1 - Estado: %c, Código: %s, Densidade Populacional: %.2f \n", estado, codigo_cidade, densidade_populacional);
                printf("Carta 2 - Estado: %c, Código: %s, Densidade Populacional: %.2f \n", estado02, codigo_cidade02, densidade_populacional02);
                printf("Resultado: Carta 2 é a vencedora!\n");
            }
        break;
        case 5:
            printf("Comparação do atributo PIB per capita:\n");
            if (densidade_populacional > densidade_populacional02) {
                printf("Carta 1 - Estado: %c, Código: %s, PIB per capita: %.2lf \n", estado, codigo_cidade, pib_per_capita);
                printf("Carta 2 - Estado: %c, Código: %s, PIB per capita: %.2lf \n", estado02, codigo_cidade02, pib_per_capita02); 
                printf("Resultado: Carta 1 é a vencedora!\n");
            }else {
                printf("Carta 1 - Estado: %c, Código: %s, PIB per capita: %.2lf \n", estado, codigo_cidade, pib_per_capita);
                printf("Carta 2 - Estado: %c, Código: %s, PIB per capita: %.2lf \n", estado02, codigo_cidade02, pib_per_capita02);
                printf("Resultado: Carta 2 é a vencedora!\n");
            }
        break;
        default:
            printf("Número inválido...");
    }



    return 0;
}