#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int populacao, pontos_turisticos;
    float area, pib_per_capita;
    char estado, nome_cidade[20], codigo_cidade[3]; 
    double pib, densidade_populacional;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o estado: ");
    scanf(" %c", &estado);

    printf("Digite o código da cidade: ");
    scanf(" %s", codigo_cidade);

    printf("Digite o número da população: ");
    scanf(" %d", &populacao);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome_cidade);

    printf("Digite o valor da area: ");
    scanf(" %f", &area);

    printf("Digite o PIB: ");
    scanf(" %lf", &pib);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);

    densidade_populacional = (float) pib / populacao;
    pib_per_capita = (float) populacao / area;
    
    printf("\nCodigo da cidade: %s", codigo_cidade);
    printf("\nEstado: %c", estado);

    printf("\nNome: %s", nome_cidade);
    printf("\nPopulação: %d", populacao);
    printf("\nÁrea: %.2f km²", area);
    printf("\nPIB: %.2lf bilhões de reais", pib);
    printf("\nPontos turisticos: %d", pontos_turisticos);
    printf("\nPib per capita: %.2lf", pib_per_capita);
    printf("\nDensidade populacional: %.2lf \n", densidade_populacional);

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