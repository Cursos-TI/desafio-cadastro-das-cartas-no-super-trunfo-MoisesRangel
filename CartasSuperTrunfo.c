#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Declaração das variaveis.
    int pontos_turisticos, atributo1, atributo2, menu_principal;
    long int populacao;
    float area, densidade_populacional;
    char estado, nome_cidade[20], codigo_cidade[10]; 
    double pib, pib_per_capita, super_poder;

    //Declaração das variáveis da segunda carta
    int pontos_turisticos02;
    long int populacao02;
    float area02, densidade_populacional02;
    char estado02, nome_cidade02[20], codigo_cidade02[10];
    double pib02, pib_per_capita02, super_poder02;
    
    //Declaração das variáveis das cartas da IA
    int pontos_turisticosIA, estado_rand;
    long int populacaoIA;
    float areaIA, densidade_populacionalIA;
    double pibIA, pib_per_capitaIA, super_poderIA;
    char estadoIA[20], nome_cidadeIA[20], codigo_cidadeIA[10];

    srand(time(NULL));

    printf("Bem vindo ao jogo Super Trunfo!\n");
    printf("1 - Informar os dados das 2 cartas PVP (player vs player):\n");
    printf("2 - Informar os dados da 1 carta e jogar contra IA:\n");
    printf("3 - Regras:\n");
    printf("4 - Sair:\n");
    printf("Digite um número:");
    scanf("%d", &menu_principal);
    switch (menu_principal){
        case 1:
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
            densidade_populacional = (float) populacao / area;
            pib_per_capita = (double) (pib * 1000000000) / populacao;

            //Somando todos os valores da carta 1
            super_poder = (double) populacao + area + pib + pontos_turisticos + pib_per_capita + densidade_populacional;

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
            printf("\nSoma de todos os atributos da carta: %.2lf\n", super_poder);

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
            densidade_populacional02 = (float) populacao02 / area02;
            pib_per_capita02 = (double) (pib02 * 1000000000) / populacao02;

            //Somando todos os valores da carta 2
            super_poder02 = (double) populacao02 + area02 + pib02 + pontos_turisticos02 + densidade_populacional02 + pib_per_capita02;
            
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
            printf("\nSoma de todos os atributos da carta: %.2lf\n", super_poder02);
        
            // Menu interativo para seleção de atributos e exibição dos resultados.
            printf("\n\nEscolha qual 1° atributo que deseja comparar da 1° carta:\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Densidade populacional\n");
            printf("5 - PIB per capita\n");
            printf("6 - Pontos turísticos\n");
            printf("7 - Super Poder\n");
            printf("Digite um número:");
            scanf("%d", &atributo1);

            printf("\n\nEscolha qual 2° atributo que deseja comparar da 2° carta:\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Densidade populacional\n");
            printf("5 - PIB per capita\n");
            printf("6 - Pontos turísticos\n");
            printf("7 - Super poder\n");
            printf("Digite um número:");
            scanf("%d", &atributo2);
            // Exibindo todos os 21 possiveis resultados das opções selecionadas com PvP
            switch (atributo1) {
                case 1:
                    switch(atributo2){
                        case 1:
                            printf("Comparação do atributo População:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, População: %ld \n", estado, codigo_cidade, populacao);
                            printf("Carta 2 - Estado: %c, Código: %s, População: %ld \n", estado02, codigo_cidade02, populacao02);
                            populacao > populacao02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 2:
                            printf("Comparação do atributo População e Área:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, População: %ld \n", estado, codigo_cidade, populacao);
                            printf("Carta 2 - Estado: %c, Código: %s, Área: %.2f \n", estado02, codigo_cidade02, area02);
                            populacao > area02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 3:
                            printf("Comparação do atributo População e PIB:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, População: %ld \n", estado, codigo_cidade, populacao);
                            printf("Carta 2 - Estado: %c, Código: %s, PIB: %.2lf \n", estado02, codigo_cidade02, pib02);
                            populacao > pib02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 4:
                            printf("Comparação do atributo População e Densidade Populacional:\n");    
                            printf("Carta 1 - Estado: %c, Código: %s, População: %ld \n", estado, codigo_cidade, populacao);
                            printf("Carta 2 - Estado: %c, Código: %s, Densidade Populacional: %.2f \n", estado02, codigo_cidade02, densidade_populacional02);
                            populacao > densidade_populacional02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 5:
                            printf("Comparação do atributo População e PIB per capita:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, População: %ld \n", estado, codigo_cidade, populacao);
                            printf("Carta 2 - Estado: %c, Código: %s, PIB per capita: %.2lf \n", estado02, codigo_cidade02, pib_per_capita02);
                            populacao > pib_per_capita02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 6:
                            printf("Comparação do atributo População e Pontos turísticos:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, População: %ld \n", estado, codigo_cidade, populacao);
                            printf("Carta 2 - Estado: %c, Código: %s, Pontos turísticos: %d \n", estado02, codigo_cidade02, pontos_turisticos02);
                            populacao > pontos_turisticos02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 7:
                            printf("Comparação do atributo População e Super poder:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, População: %ld \n", estado, codigo_cidade, populacao);
                            printf("Carta 2 - Estado: %c, Código: %s, Super poder: %.2lf \n", estado02, codigo_cidade02, super_poder02);
                            populacao > super_poder02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                    }
                break;
                case 2:
                    switch(atributo2){
                        case 1:
                            printf("Comparação do atributo Área e População:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Área: %.2f \n", estado, codigo_cidade, area);
                            printf("Carta 2 - Estado: %c, Código: %s, População: %ld \n", estado02, codigo_cidade02, populacao02);
                            area > populacao02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 2:
                            printf("Comparação do atributo Área:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Área: %.2f \n", estado, codigo_cidade, area);
                            printf("Carta 2 - Estado: %c, Código: %s, Área: %.2f \n", estado02, codigo_cidade02, area02);
                            area > area02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 3:
                            printf("Comparação do atributo Área e PIB:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Área: %.2f \n", estado, codigo_cidade, area);
                            printf("Carta 2 - Estado: %c, Código: %s, PIB: %.2lf \n", estado02, codigo_cidade02, pib02);
                            area > pib02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 4:
                            printf("Comparação do atributo Área e Densidade Populacional:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, População: %ld \n", estado, codigo_cidade, populacao);
                            printf("Carta 2 - Estado: %c, Código: %s, Densidade Populacional: %.2f \n", estado02, codigo_cidade02, densidade_populacional02);
                            area > densidade_populacional02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 5:
                            printf("Comparação do atributo Área e PIB per capita:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Área: %.2f \n", estado, codigo_cidade, area);
                            printf("Carta 2 - Estado: %c, Código: %s, PIB per capita: %.2lf \n", estado02, codigo_cidade02, pib_per_capita02);
                            area > pib_per_capita02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 6:
                            printf("Comparação do atributo Área e Pontos turísticos:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Área: %.2f \n", estado, codigo_cidade, area);
                            printf("Carta 2 - Estado: %c, Código: %s, Pontos turísticos: %d \n", estado02, codigo_cidade02, pontos_turisticos02);
                            area > pontos_turisticos02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 7:
                            printf("Comparação do atributo Área e Super poder:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Área: %.2f \n", estado, codigo_cidade, area);
                            printf("Carta 2 - Estado: %c, Código: %s, Super poder: %.2lf \n", estado02, codigo_cidade02, super_poder02);
                            area > super_poder02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                    }
                break;
                case 3:
                    switch(atributo2){
                        case 1:
                            printf("Comparação do atributo PIB e População:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, PIB: %.2lf \n", estado, codigo_cidade, pib);
                            printf("Carta 2 - Estado: %c, Código: %s, População: %ld \n", estado02, codigo_cidade02, populacao02);
                            pib > populacao02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 2:
                            printf("Comparação do atributo PIB e Área:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, PIB: %.2lf \n", estado, codigo_cidade, pib);
                            printf("Carta 2 - Estado: %c, Código: %s, Área: %.2f \n", estado02, codigo_cidade02, area02);
                            pib > area02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 3:
                            printf("Comparação do atributo PIB:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, PIB: %.2lf \n", estado, codigo_cidade, pib);
                            printf("Carta 2 - Estado: %c, Código: %s, PIB: %.2lf \n", estado02, codigo_cidade02, pib02);
                            area > pib02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 4:
                            printf("Comparação do atributo PIB e Densidade Populacional:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, PIB: %.2lf \n", estado, codigo_cidade, pib);
                            printf("Carta 2 - Estado: %c, Código: %s, Densidade Populacional: %.2f \n", estado02, codigo_cidade02, densidade_populacional02);
                            pib > densidade_populacional02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 5:
                            printf("Comparação do atributo PIB e PIB per capita:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, PIB: %.2lf \n", estado, codigo_cidade, pib);
                            printf("Carta 2 - Estado: %c, Código: %s, PIB per capita: %.2lf \n", estado02, codigo_cidade02, pib_per_capita02);
                            pib > pib_per_capita02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 6:
                            printf("Comparação do atributo PIB e Pontos turísticos:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, PIB: %.2lf \n", estado, codigo_cidade, pib);
                            printf("Carta 2 - Estado: %c, Código: %s, Pontos turísticos: %d \n", estado02, codigo_cidade02, pontos_turisticos02);
                            pib > pontos_turisticos02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 7:
                            printf("Comparação do atributo PIB e Super poder:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, PIB: %.2lf \n", estado, codigo_cidade, pib);
                            printf("Carta 2 - Estado: %c, Código: %s, Super poder: %.2lf \n", estado02, codigo_cidade02, super_poder02);
                            pib > super_poder02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                    }
                break;
                case 4:
                    switch(atributo2){
                        case 1:
                            printf("Comparação do atributo Densidade Populacional e População:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Densidade Populacional: %.2f \n", estado, codigo_cidade, densidade_populacional);
                            printf("Carta 2 - Estado: %c, Código: %s, População: %ld \n", estado02, codigo_cidade02, populacao02);
                            densidade_populacional < populacao02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 2:
                            printf("Comparação do atributo Densidade Populacional e Área:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Densidade Populacional: %.2f \n", estado, codigo_cidade, densidade_populacional);
                            printf("Carta 2 - Estado: %c, Código: %s, Área: %.2f \n", estado02, codigo_cidade02, area02);
                            densidade_populacional < area02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 3:
                            printf("Comparação do atributo Densidade Populacional e PIB:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Densidade Populacional: %.2f \n", estado, codigo_cidade, densidade_populacional);
                            printf("Carta 2 - Estado: %c, Código: %s, PIB: %.2lf \n", estado02, codigo_cidade02, pib02);
                            densidade_populacional < pib02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 4:
                            printf("Comparação do atributo Densidade Populacional:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Densidade Populacional: %.2f \n", estado, codigo_cidade, densidade_populacional);
                            printf("Carta 2 - Estado: %c, Código: %s, Densidade Populacional: %.2f \n", estado02, codigo_cidade02, densidade_populacional02);
                            densidade_populacional < densidade_populacional02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 5:
                            printf("Comparação do atributo Densidade Populacional e PIB per capita:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Densidade Populacional: %.2f \n", estado, codigo_cidade, densidade_populacional);
                            printf("Carta 2 - Estado: %c, Código: %s, PIB per capita: %.2lf \n", estado02, codigo_cidade02, pib_per_capita02);
                            densidade_populacional < pib_per_capita02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 6:
                            printf("Comparação do atributo Densidade Populacional e Pontos turísticos:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Densidade Populacional: %.2f \n", estado, codigo_cidade, densidade_populacional);
                            printf("Carta 2 - Estado: %c, Código: %s, Pontos turísticos: %d \n", estado02, codigo_cidade02, pontos_turisticos02);
                            densidade_populacional < pontos_turisticos02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 7:
                            printf("Comparação do atributo Densidade Populacional e Super poder:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Densidade Populacional: %.2f \n", estado, codigo_cidade, densidade_populacional);
                            printf("Carta 2 - Estado: %c, Código: %s, Super poder: %.2lf \n", estado02, codigo_cidade02, super_poder02);
                            densidade_populacional < super_poder02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                    }
                break;
                case 5:
                    switch(atributo2){
                        case 1:
                            printf("Comparação do atributo PIB per capita e População:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, PIB per capita: %.2lf \n", estado, codigo_cidade, pib_per_capita);
                            printf("Carta 2 - Estado: %c, Código: %s, População: %ld \n", estado02, codigo_cidade02, populacao02);
                            pib_per_capita > populacao02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 2:
                            printf("Comparação do atributo PIB per capita e Área:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, PIB per capita: %.2lf \n", estado, codigo_cidade, pib_per_capita);
                            printf("Carta 2 - Estado: %c, Código: %s, Área: %.2f \n", estado02, codigo_cidade02, area02);
                            pib_per_capita > area02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 3:
                            printf("Comparação do atributo PIB per capita e PIB:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, PIB per capita: %.2lf \n", estado, codigo_cidade, pib_per_capita);
                            printf("Carta 2 - Estado: %c, Código: %s, PIB: %.2lf \n", estado02, codigo_cidade02, pib02);
                            pib_per_capita > pib02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 4:
                            printf("Comparação do atributo PIB per capita e Densidade Populacional:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, PIB per capita: %.2lf \n", estado, codigo_cidade, pib_per_capita);
                            printf("Carta 2 - Estado: %c, Código: %s, Densidade Populacional: %.2f \n", estado02, codigo_cidade02, densidade_populacional02);
                            pib_per_capita > densidade_populacional02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 5:
                            printf("Comparação do atributo PIB per capita:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, PIB per capita: %.2lf \n", estado, codigo_cidade, pib_per_capita);
                            printf("Carta 2 - Estado: %c, Código: %s, PIB per capita: %.2lf \n", estado02, codigo_cidade02, pib_per_capita02);
                            pib_per_capita > pib_per_capita02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 6:
                            printf("Comparação do atributo PIB per capita e Pontos turísticos:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, PIB per capita: %.2lf \n", estado, codigo_cidade, pib_per_capita);
                            printf("Carta 2 - Estado: %c, Código: %s, Pontos turísticos: %d \n", estado02, codigo_cidade02, pontos_turisticos02);
                            pib_per_capita > pontos_turisticos02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 7:
                            printf("Comparação do atributo PIB per capita e Super poder:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, PIB per capita: %.2lf \n", estado, codigo_cidade, pib_per_capita);
                            printf("Carta 2 - Estado: %c, Código: %s, Super poder: %.2lf \n", estado02, codigo_cidade02, super_poder02);
                            pib_per_capita > super_poder02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                    }
                break;
                case 6:
                    switch(atributo2){
                        case 1:
                            printf("Comparação do atributo Pontos turísticos e População:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Pontos turísticos: %d \n", estado, codigo_cidade, pontos_turisticos);
                            printf("Carta 2 - Estado: %c, Código: %s, População: %ld \n", estado02, codigo_cidade02, populacao02);
                            pontos_turisticos > populacao02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 2:
                            printf("Comparação do atributo Pontos turísticos e Área:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Pontos turísticos: %d \n", estado, codigo_cidade, pontos_turisticos);
                            printf("Carta 2 - Estado: %c, Código: %s, Área: %.2f \n", estado02, codigo_cidade02, area02);
                            pontos_turisticos > area02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 3:
                            printf("Comparação do atributo Pontos turísticos e PIB:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Pontos turísticos: %d \n", estado, codigo_cidade, pontos_turisticos);
                            printf("Carta 2 - Estado: %c, Código: %s, PIB: %.2lf \n", estado02, codigo_cidade02, pib02);
                            pontos_turisticos > pib02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 4:
                            printf("Comparação do atributo Pontos turísticos e Densidade Populacional:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Pontos turísticos: %d \n", estado, codigo_cidade, pontos_turisticos);
                            printf("Carta 2 - Estado: %c, Código: %s, Densidade Populacional: %.2f \n", estado02, codigo_cidade02, densidade_populacional02);
                            pontos_turisticos > densidade_populacional02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 5:
                            printf("Comparação do atributo Área e PIB per capita:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Pontos turísticos: %d \n", estado, codigo_cidade, pontos_turisticos);
                            printf("Carta 2 - Estado: %c, Código: %s, PIB per capita: %.2lf \n", estado02, codigo_cidade02, pib_per_capita02);
                            pontos_turisticos > pib_per_capita02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 6:
                            printf("Comparação do atributo Pontos turísticos e Pontos turísticos:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Pontos turísticos: %d \n", estado, codigo_cidade, pontos_turisticos);
                            printf("Carta 2 - Estado: %c, Código: %s, Pontos turísticos: %d \n", estado02, codigo_cidade02, pontos_turisticos02);
                            pontos_turisticos > pontos_turisticos02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 7:
                            printf("Comparação do atributo Pontos turísticos e Super poder:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Pontos turísticos: %d \n", estado, codigo_cidade, pontos_turisticos);
                            printf("Carta 2 - Estado: %c, Código: %s, Super poder: %.2lf \n", estado02, codigo_cidade02, super_poder02);
                            pontos_turisticos > super_poder02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                    }
                break;
                case 7:
                    switch(atributo2){
                        case 1:
                            printf("Comparação do atributo Super poder e População:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Super poder: %.2lf \n", estado, codigo_cidade, super_poder);
                            printf("Carta 2 - Estado: %c, Código: %s, População: %ld \n", estado02, codigo_cidade02, populacao02);
                            super_poder > populacao02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 2:
                            printf("Comparação do atributo Super poder e Área:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Super poder: %.2lf \n", estado, codigo_cidade, super_poder);
                            printf("Carta 2 - Estado: %c, Código: %s, Área: %.2f \n", estado02, codigo_cidade02, area02);
                            super_poder > area02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 3:
                            printf("Comparação do atributo Super poder e PIB:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Super poder: %.2lf \n", estado, codigo_cidade, super_poder);
                            printf("Carta 2 - Estado: %c, Código: %s, PIB: %.2lf \n", estado02, codigo_cidade02, pib02);
                            super_poder > pib02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 4:
                            printf("Comparação do atributo Super poder e Densidade Populacional:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Super poder: %.2lf \n", estado, codigo_cidade, super_poder);
                            printf("Carta 2 - Estado: %c, Código: %s, Densidade Populacional: %.2f \n", estado02, codigo_cidade02, densidade_populacional02);
                            super_poder > densidade_populacional02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 5:
                            printf("Comparação do atributo Super poder e PIB per capita:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Super poder: %.2lf \n", estado, codigo_cidade, super_poder);
                            printf("Carta 2 - Estado: %c, Código: %s, PIB per capita: %.2lf \n", estado02, codigo_cidade02, pib_per_capita02);
                            super_poder > pib_per_capita02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 6:
                            printf("Comparação do atributo Super poder e Pontos turísticos:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Super poder: %.2lf \n", estado, codigo_cidade, super_poder);
                            printf("Carta 2 - Estado: %c, Código: %s, Pontos turísticos: %d \n", estado02, codigo_cidade02, pontos_turisticos02);
                            super_poder > pontos_turisticos02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 7:
                            printf("Comparação do atributo Super poder:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Super poder: %.2lf \n", estado, codigo_cidade, super_poder);
                            printf("Carta 2 - Estado: %c, Código: %s, Super poder: %.2lf \n", estado02, codigo_cidade02, super_poder02);
                            super_poder > super_poder02 ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                    }
                break;
                default:
                    printf("Número inválido...\n");
            }
        break;
        case 2:
        //Solicitando os dados e atribuindo os valores dos dados às variaveis da primeira carta. Player vs IA
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
            densidade_populacional = (float) populacao / area;
            pib_per_capita = (double) (pib * 1000000000) / populacao;

            //Somando todos os valores da carta 1
            super_poder = (double) populacao + area + pib + pontos_turisticos + pib_per_capita + densidade_populacional;

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
            printf("\nSoma de todos os atributos da carta: %.2lf\n", super_poder);

            //Criando a carta da IA com dados aleatórios
            populacaoIA = rand() % 10000 * 10000;
            areaIA = rand() % 10000;
            pibIA = rand() % 10000 * 100000;
            pontos_turisticosIA = rand() % 100;
            pib_per_capitaIA = rand() % 10000 * 100000;
            densidade_populacionalIA = rand() % 10000;
            super_poderIA = rand() % 10000 * 100000;

            estado_rand = rand() % 4 + 1;

            if(estado_rand == 1) {
                strcpy(estadoIA, "A");
                strcpy(codigo_cidadeIA, "A01");
                strcpy(nome_cidadeIA, "Osasco");
            }else if(estado_rand == 2){
                strcpy(estadoIA, "B");
                strcpy(codigo_cidadeIA, "B02");
                strcpy(nome_cidadeIA, "Taboão da Serra");
            }else if(estado_rand == 3){
                strcpy(estadoIA, "C");
                strcpy(codigo_cidadeIA, "C03");
                strcpy(nome_cidadeIA, "Barueri");
            }else if(estado_rand == 4){
                strcpy(estadoIA, "D");
                strcpy(codigo_cidadeIA, "D04");
                strcpy(nome_cidadeIA, "Diadema");
            }

            printf("\nSegunda Carta IA:");
            printf("\nEstado: %s", estadoIA);
            printf("\nCodigo da cidade : %s", codigo_cidadeIA);
            printf("\nNome da cidade: %s", nome_cidadeIA);
            printf("\nPopulação: %ld", populacaoIA);
            printf("\nÁrea: %.2f km²", areaIA);
            printf("\nPIB: %.2lf bilhões de reais", pibIA);
            printf("\nPontos turísticos: %d", pontos_turisticosIA);
            printf("\nPib per capita: %.2lf", pib_per_capitaIA);
            printf("\nDensidade populacional: %.2f", densidade_populacionalIA);
            printf("\nSuper poder: %.2lf \n", super_poderIA);

            
            // Menu interativo para seleção de atributos e exibição dos resultados.
            printf("\n\nEscolha qual 1° atributo que deseja comparar da 1° carta:\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Densidade populacional\n");
            printf("5 - PIB per capita\n");
            printf("6 - Pontos turísticos\n");
            printf("7 - Super Poder\n");
            printf("Digite um número:");
            scanf("%d", &atributo1);

            printf("\n\nEscolha qual 2° atributo que deseja comparar da 2° carta:\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Densidade populacional\n");
            printf("5 - PIB per capita\n");
            printf("6 - Pontos turísticos\n");
            printf("7 - Super poder\n");
            printf("Digite um número:");
            scanf("%d", &atributo2);

            // Exibindo todos os 21 possiveis resultados das opções selecionadas com a IA
            switch (atributo1) {
                case 1:
                    switch(atributo2){
                        case 1:
                            printf("Comparação do atributo População:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, População: %ld \n", estado, codigo_cidade, populacao);
                            printf("Carta 2 - Estado: %s, Código: %s, População: %ld \n", estadoIA, codigo_cidadeIA, populacaoIA);
                            populacao > populacaoIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 2:
                            printf("Comparação do atributo População e Área:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, População: %ld \n", estado, codigo_cidade, populacao);
                            printf("Carta 2 - Estado: %s, Código: %s, Área: %.2f \n", estadoIA, codigo_cidadeIA, areaIA);
                            populacao > areaIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 3:
                            printf("Comparação do atributo População e PIB:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, População: %ld \n", estado, codigo_cidade, populacao);
                            printf("Carta 2 - Estado: %s, Código: %s, PIB: %.2lf \n", estadoIA, codigo_cidadeIA, pibIA);
                            populacao > pibIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 4:
                            printf("Comparação do atributo População e Densidade Populacional:\n");    
                            printf("Carta 1 - Estado: %c, Código: %s, População: %ld \n", estado, codigo_cidade, populacao);
                            printf("Carta 2 - Estado: %s, Código: %s, Densidade Populacional: %.2f \n", estadoIA, codigo_cidadeIA, densidade_populacionalIA);
                            populacao > densidade_populacionalIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 5:
                            printf("Comparação do atributo População e PIB per capita:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, População: %ld \n", estado, codigo_cidade, populacao);
                            printf("Carta 2 - Estado: %s, Código: %s, PIB per capita: %.2lf \n", estadoIA, codigo_cidadeIA, pib_per_capitaIA);
                            populacao > pib_per_capitaIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 6:
                            printf("Comparação do atributo População e Pontos turísticos:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, População: %ld \n", estado, codigo_cidade, populacao);
                            printf("Carta 2 - Estado: %s, Código: %s, Pontos turísticos: %d \n", estadoIA, codigo_cidadeIA, pontos_turisticosIA);
                            populacao > pontos_turisticosIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 7:
                            printf("Comparação do atributo População e Super poder:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, População: %ld \n", estado, codigo_cidade, populacao);
                            printf("Carta 2 - Estado: %s, Código: %s, Super poder: %.2lf \n", estadoIA, codigo_cidadeIA, super_poderIA);
                            populacao > super_poderIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                    }
                break;
                case 2:
                    switch(atributo2){
                        case 1:
                            printf("Comparação do atributo Área e População:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Área: %.2f \n", estado, codigo_cidade, area);
                            printf("Carta 2 - Estado: %s, Código: %s, População: %ld \n", estadoIA, codigo_cidadeIA, populacaoIA);
                            area > populacaoIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 2:
                            printf("Comparação do atributo Área:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Área: %.2f \n", estado, codigo_cidade, area);
                            printf("Carta 2 - Estado: %s, Código: %s, Área: %.2f \n", estadoIA, codigo_cidadeIA, areaIA);
                            area > areaIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 3:
                            printf("Comparação do atributo Área e PIB:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Área: %.2f \n", estado, codigo_cidade, area);
                            printf("Carta 2 - Estado: %s, Código: %s, PIB: %.2lf \n", estadoIA, codigo_cidadeIA, pibIA);
                            area > pibIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 4:
                            printf("Comparação do atributo Área e Densidade Populacional:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, População: %ld \n", estado, codigo_cidade, populacao);
                            printf("Carta 2 - Estado: %s, Código: %s, Densidade Populacional: %.2f \n", estadoIA, codigo_cidadeIA, densidade_populacionalIA);
                            area > densidade_populacionalIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 5:
                            printf("Comparação do atributo Área e PIB per capita:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Área: %.2f \n", estado, codigo_cidade, area);
                            printf("Carta 2 - Estado: %s, Código: %s, PIB per capita: %.2lf \n", estadoIA, codigo_cidadeIA, pib_per_capitaIA);
                            area > pib_per_capitaIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 6:
                            printf("Comparação do atributo Área e Pontos turísticos:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Área: %.2f \n", estado, codigo_cidade, area);
                            printf("Carta 2 - Estado: %s, Código: %s, Pontos turísticos: %d \n", estadoIA, codigo_cidadeIA, pontos_turisticosIA);
                            area > pontos_turisticosIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 7:
                            printf("Comparação do atributo Área e Super poder:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Área: %.2f \n", estado, codigo_cidade, area);
                            printf("Carta 2 - Estado: %s, Código: %s, Super poder: %.2lf \n", estadoIA, codigo_cidadeIA, super_poderIA);
                            area > super_poderIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                    }
                break;
                case 3:
                    switch(atributo2){
                        case 1:
                            printf("Comparação do atributo PIB e População:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, PIB: %.2lf \n", estado, codigo_cidade, pib);
                            printf("Carta 2 - Estado: %s, Código: %s, População: %ld \n", estadoIA, codigo_cidadeIA, populacaoIA);
                            pib > populacaoIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 2:
                            printf("Comparação do atributo PIB e Área:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, PIB: %.2lf \n", estado, codigo_cidade, pib);
                            printf("Carta 2 - Estado: %s, Código: %s, Área: %.2f \n", estadoIA, codigo_cidadeIA, areaIA);
                            pib > areaIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 3:
                            printf("Comparação do atributo PIB:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, PIB: %.2lf \n", estado, codigo_cidade, pib);
                            printf("Carta 2 - Estado: %s, Código: %s, PIB: %.2lf \n", estadoIA, codigo_cidadeIA, pibIA);
                            area > pibIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 4:
                            printf("Comparação do atributo PIB e Densidade Populacional:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, PIB: %.2lf \n", estado, codigo_cidade, pib);
                            printf("Carta 2 - Estado: %s, Código: %s, Densidade Populacional: %.2f \n", estadoIA, codigo_cidadeIA, densidade_populacionalIA);
                            pib > densidade_populacionalIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 5:
                            printf("Comparação do atributo PIB e PIB per capita:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, PIB: %.2lf \n", estado, codigo_cidade, pib);
                            printf("Carta 2 - Estado: %s, Código: %s, PIB per capita: %.2lf \n", estadoIA, codigo_cidadeIA, pib_per_capitaIA);
                            pib > pib_per_capitaIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 6:
                            printf("Comparação do atributo PIB e Pontos turísticos:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, PIB: %.2lf \n", estado, codigo_cidade, pib);
                            printf("Carta 2 - Estado: %s, Código: %s, Pontos turísticos: %d \n", estadoIA, codigo_cidadeIA, pontos_turisticosIA);
                            pib > pontos_turisticosIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 7:
                            printf("Comparação do atributo PIB e Super poder:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, PIB: %.2lf \n", estado, codigo_cidade, pib);
                            printf("Carta 2 - Estado: %s, Código: %s, Super poder: %.2lf \n", estadoIA, codigo_cidadeIA, super_poderIA);
                            pib > super_poderIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                    }
                break;
                case 4:
                    switch(atributo2){
                        case 1:
                            printf("Comparação do atributo Densidade Populacional e População:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Densidade Populacional: %.2f \n", estado, codigo_cidade, densidade_populacional);
                            printf("Carta 2 - Estado: %s, Código: %s, População: %ld \n", estadoIA, codigo_cidadeIA, populacaoIA);
                            densidade_populacional < populacaoIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 2:
                            printf("Comparação do atributo Densidade Populacional e Área:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Densidade Populacional: %.2f \n", estado, codigo_cidade, densidade_populacional);
                            printf("Carta 2 - Estado: %s, Código: %s, Área: %.2f \n", estadoIA, codigo_cidadeIA, areaIA);
                            densidade_populacional < areaIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 3:
                            printf("Comparação do atributo Densidade Populacional e PIB:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Densidade Populacional: %.2f \n", estado, codigo_cidade, densidade_populacional);
                            printf("Carta 2 - Estado: %s, Código: %s, PIB: %.2lf \n", estadoIA, codigo_cidadeIA, pibIA);
                            densidade_populacional < pibIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 4:
                            printf("Comparação do atributo Densidade Populacional:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Densidade Populacional: %.2f \n", estado, codigo_cidade, densidade_populacional);
                            printf("Carta 2 - Estado: %s, Código: %s, Densidade Populacional: %.2f \n", estadoIA, codigo_cidadeIA, densidade_populacionalIA);
                            densidade_populacional < densidade_populacionalIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 5:
                            printf("Comparação do atributo Densidade Populacional e PIB per capita:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Densidade Populacional: %.2f \n", estado, codigo_cidade, densidade_populacional);
                            printf("Carta 2 - Estado: %s, Código: %s, PIB per capita: %.2lf \n", estadoIA, codigo_cidadeIA, pib_per_capitaIA);
                            densidade_populacional < pib_per_capitaIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 6:
                            printf("Comparação do atributo Densidade Populacional e Pontos turísticos:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Densidade Populacional: %.2f \n", estado, codigo_cidade, densidade_populacional);
                            printf("Carta 2 - Estado: %s, Código: %s, Pontos turísticos: %d \n", estadoIA, codigo_cidadeIA, pontos_turisticosIA);
                            densidade_populacional < pontos_turisticosIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 7:
                            printf("Comparação do atributo Densidade Populacional e Super poder:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Densidade Populacional: %.2f \n", estado, codigo_cidade, densidade_populacional);
                            printf("Carta 2 - Estado: %s, Código: %s, Super poder: %.2lf \n", estadoIA, codigo_cidadeIA, super_poderIA);
                            densidade_populacional < super_poderIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                    }
                break;
                case 5:
                    switch(atributo2){
                        case 1:
                            printf("Comparação do atributo PIB per capita e População:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, PIB per capita: %.2lf \n", estado, codigo_cidade, pib_per_capita);
                            printf("Carta 2 - Estado: %s, Código: %s, População: %ld \n", estadoIA, codigo_cidadeIA, populacaoIA);
                            pib_per_capita > populacaoIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 2:
                            printf("Comparação do atributo PIB per capita e Área:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, PIB per capita: %.2lf \n", estado, codigo_cidade, pib_per_capita);
                            printf("Carta 2 - Estado: %s, Código: %s, Área: %.2f \n", estadoIA, codigo_cidadeIA, areaIA);
                            pib_per_capita > areaIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 3:
                            printf("Comparação do atributo PIB per capita e PIB:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, PIB per capita: %.2lf \n", estado, codigo_cidade, pib_per_capita);
                            printf("Carta 2 - Estado: %s, Código: %s, PIB: %.2lf \n", estadoIA, codigo_cidadeIA, pibIA);
                            pib_per_capita > pibIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 4:
                            printf("Comparação do atributo PIB per capita e Densidade Populacional:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, PIB per capita: %.2lf \n", estado, codigo_cidade, pib_per_capita);
                            printf("Carta 2 - Estado: %s, Código: %s, Densidade Populacional: %.2f \n", estadoIA, codigo_cidadeIA, densidade_populacionalIA);
                            pib_per_capita > densidade_populacionalIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 5:
                            printf("Comparação do atributo PIB per capita:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, PIB per capita: %.2lf \n", estado, codigo_cidade, pib_per_capita);
                            printf("Carta 2 - Estado: %s, Código: %s, PIB per capita: %.2lf \n", estadoIA, codigo_cidadeIA, pib_per_capitaIA);
                            pib_per_capita > pib_per_capitaIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 6:
                            printf("Comparação do atributo PIB per capita e Pontos turísticos:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, PIB per capita: %.2lf \n", estado, codigo_cidade, pib_per_capita);
                            printf("Carta 2 - Estado: %s, Código: %s, Pontos turísticos: %d \n", estadoIA, codigo_cidadeIA, pontos_turisticosIA);
                            pib_per_capita > pontos_turisticosIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 7:
                            printf("Comparação do atributo PIB per capita e Super poder:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, PIB per capita: %.2lf \n", estado, codigo_cidade, pib_per_capita);
                            printf("Carta 2 - Estado: %s, Código: %s, Super poder: %.2lf \n", estadoIA, codigo_cidadeIA, super_poderIA);
                            pib_per_capita > super_poderIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                    }
                break;
                case 6:
                    switch(atributo2){
                        case 1:
                            printf("Comparação do atributo Pontos turísticos e População:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Pontos turísticos: %d \n", estado, codigo_cidade, pontos_turisticos);
                            printf("Carta 2 - Estado: %s, Código: %s, População: %ld \n", estadoIA, codigo_cidadeIA, populacaoIA);
                            pontos_turisticos > populacaoIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 2:
                            printf("Comparação do atributo Pontos turísticos e Área:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Pontos turísticos: %d \n", estado, codigo_cidade, pontos_turisticos);
                            printf("Carta 2 - Estado: %s, Código: %s, Área: %.2f \n", estadoIA, codigo_cidadeIA, areaIA);
                            pontos_turisticos > areaIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 3:
                            printf("Comparação do atributo Pontos turísticos e PIB:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Pontos turísticos: %d \n", estado, codigo_cidade, pontos_turisticos);
                            printf("Carta 2 - Estado: %s, Código: %s, PIB: %.2lf \n", estadoIA, codigo_cidadeIA, pibIA);
                            pontos_turisticos > pibIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 4:
                            printf("Comparação do atributo Pontos turísticos e Densidade Populacional:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Pontos turísticos: %d \n", estado, codigo_cidade, pontos_turisticos);
                            printf("Carta 2 - Estado: %s, Código: %s, Densidade Populacional: %.2f \n", estadoIA, codigo_cidadeIA, densidade_populacionalIA);
                            pontos_turisticos > densidade_populacionalIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 5:
                            printf("Comparação do atributo Área e PIB per capita:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Pontos turísticos: %d \n", estado, codigo_cidade, pontos_turisticos);
                            printf("Carta 2 - Estado: %s, Código: %s, PIB per capita: %.2lf \n", estadoIA, codigo_cidadeIA, pib_per_capitaIA);
                            pontos_turisticos > pib_per_capitaIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 6:
                            printf("Comparação do atributo Pontos turísticos e Pontos turísticos:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Pontos turísticos: %d \n", estado, codigo_cidade, pontos_turisticos);
                            printf("Carta 2 - Estado: %s, Código: %s, Pontos turísticos: %d \n", estadoIA, codigo_cidadeIA, pontos_turisticosIA);
                            pontos_turisticos > pontos_turisticosIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 7:
                            printf("Comparação do atributo Pontos turísticos e Super poder:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Pontos turísticos: %d \n", estado, codigo_cidade, pontos_turisticos);
                            printf("Carta 2 - Estado: %s, Código: %s, Super poder: %.2lf \n", estadoIA, codigo_cidadeIA, super_poderIA);
                            pontos_turisticos > super_poderIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                    }
                break;
                case 7:
                    switch(atributo2){
                        case 1:
                            printf("Comparação do atributo Super poder e População:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Super poder: %.2lf \n", estado, codigo_cidade, super_poder);
                            printf("Carta 2 - Estado: %s, Código: %s, População: %ld \n", estadoIA, codigo_cidadeIA, populacaoIA);
                            super_poder > populacaoIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 2:
                            printf("Comparação do atributo Super poder e Área:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Super poder: %.2lf \n", estado, codigo_cidade, super_poder);
                            printf("Carta 2 - Estado: %s, Código: %s, Área: %.2f \n", estadoIA, codigo_cidadeIA, areaIA);
                            super_poder > areaIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 3:
                            printf("Comparação do atributo Super poder e PIB:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Super poder: %.2lf \n", estado, codigo_cidade, super_poder);
                            printf("Carta 2 - Estado: %s, Código: %s, PIB: %.2lf \n", estadoIA, codigo_cidadeIA, pibIA);
                            super_poder > pibIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 4:
                            printf("Comparação do atributo Super poder e Densidade Populacional:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Super poder: %.2lf \n", estado, codigo_cidade, super_poder);
                            printf("Carta 2 - Estado: %s, Código: %s, Densidade Populacional: %.2f \n", estadoIA, codigo_cidadeIA, densidade_populacionalIA);
                            super_poder > densidade_populacionalIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 5:
                            printf("Comparação do atributo Super poder e PIB per capita:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Super poder: %.2lf \n", estado, codigo_cidade, super_poder);
                            printf("Carta 2 - Estado: %s, Código: %s, PIB per capita: %.2lf \n", estadoIA, codigo_cidadeIA, pib_per_capitaIA);
                            super_poder > pib_per_capitaIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 6:
                            printf("Comparação do atributo Super poder e Pontos turísticos:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Super poder: %.2lf \n", estado, codigo_cidade, super_poder);
                            printf("Carta 2 - Estado: %s, Código: %s, Pontos turísticos: %d \n", estadoIA, codigo_cidadeIA, pontos_turisticosIA);
                            super_poder > pontos_turisticosIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                        case 7:
                            printf("Comparação do atributo Super poder:\n");
                            printf("Carta 1 - Estado: %c, Código: %s, Super poder: %.2lf \n", estado, codigo_cidade, super_poder);
                            printf("Carta 2 - Estado: %s, Código: %s, Super poder: %.2lf \n", estadoIA, codigo_cidadeIA, super_poderIA);
                            super_poder > super_poderIA ? printf("Resultado: Carta 1 é a vencedora!\n") : printf("Resultado: Carta 2 é a vencedora!\n");
                        break;
                    }
                break;
                default:
                    printf("Número inválido...\n");
            }




        
        break;
        case 3:
            printf("Regras...");
        break;
        case 4:

        default:
            printf("Saindo...\n");
    }


    return 0;
}