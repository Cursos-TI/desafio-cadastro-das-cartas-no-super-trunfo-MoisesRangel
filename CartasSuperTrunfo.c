#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Declaração das variaveis.
    int pontos_turisticos, pontos_turisticos02;
    long int populacao, populacao02;
    float area, area02, densidade_populacional, densidade_populacional02, super_poder, super_poder02;
    char estado, estado02, nome_cidade[20], nome_cidade02[20], codigo_cidade[10], codigo_cidade02[10]; 
    double pib, pib02, pib_per_capita, pib_per_capita02;
 
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

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

    //Solicitando os dados e atribuindo os valores dos dados às variaveis da primeira carta
    printf("informe os dados da segunda carta:\n");
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

    //Atribuindo os valores de densidade populacional e pib per capita
    densidade_populacional = (float) pib / populacao;
    pib_per_capita = (float) populacao / area;
    densidade_populacional02 = (float) pib02 / populacao02;
    pib_per_capita02 = (float) populacao02 / area02;

    //Somando todos os valores da carta
    super_poder = populacao + area + pib + pontos_turisticos;
    super_poder02 = populacao02 + area02 + pib02 + pontos_turisticos02;
    
    //Exibindo os dados da carta
    printf("Primeira Carta:\n");
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

    printf("Segunda Carta:\n");
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

    printf("Carta 1:\t\t\t\t\tCarta2:\n");
    printf("Densidade populacional: %.2f\t\tDensidade populacional:%.2f\n", densidade_populacional, densidade_populacional02);
    printf("Super poder:%.2f\t\t\tSuper poder:%.2f\n", super_poder, super_poder02);
    printf("Sendo 0 falso e 1 verdadeiro:\n");
    printf("Densidade Populacional da Carta 1 é maior que a carta 2? %d\n", densidade_populacional > densidade_populacional02);
    printf("O super poder da carta 1 é maior que o superpoder da carta 2? %d\n", super_poder>super_poder02);


    return 0;
}


/*Estado: A
Código da Carta: A01
Nome da Cidade: São Paulo
População: 12,325,000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50

Novas Propriedades Calculadas:
Densidade Populacional: População dividida pela área da cidade.
PIB per Capita: PIB total dividido pela população.
*/