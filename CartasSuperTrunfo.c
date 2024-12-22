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
    float area, pib;
    char nome_cidade[20], codigo_cidade[3]; 
    char estado;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o estado: ");
    scanf(" %c", &estado);

    printf("Digite o código da cidade: ");
    scanf(" %s", codigo_cidade);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome_cidade);

    printf("Digite o número da população: ");
    scanf(" %d", &populacao);

    printf("Digite o valor da area: ");
    scanf(" %f", &area);

    printf("Digite o PIB: ");
    scanf(" %f", &pib);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nEstado: %c", estado);
    printf("\nCodigo da cidade: %s", codigo_cidade);
    printf("\nNome: %s", nome_cidade);
    printf("\nPopulação: %d", populacao);
    printf("\nÁrea: %.2f km²", area);
    printf("\nPIB: %.2f bilhões de reais", pib);
    printf("\nPontos turisticos: %d\n", pontos_turisticos);

    return 0;
}


/*Estado: A
Código da Carta: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50*/