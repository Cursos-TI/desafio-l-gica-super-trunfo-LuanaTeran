#include <stdio.h>

int main(){

    //Fazendo a declaração das variáveis.
    char estado1, estado2;
    char codigocarta1[5], codigocarta2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontoturistico1, pontoturistico2;
    float densidade1, densidade2;
    float calculopib1, calculopib2;
    int vencedor;

    
    //Iniciando a solicitação para que o usuário insira os dados da primeira carta.
    printf("Insira os dados da sua PRIMEIRA carta:\n");
    
    printf("Digite uma letra de A a H (Estado):\n");        //Solicitando ao usuário que insira uma letra.
    scanf(" %c", &estado1);      //Armazenando as informações que foram inseridas nas variáveis criadas.

    printf("Insira um número de 01 a 04 (Código da Carta):\n");
    scanf(" %s", &codigocarta1);

    // Usando fgets para ler o nome da cidade com espaços
    printf("Digite o nome da Cidade:\n");
    getchar();  // Limpa o buffer para garantir que o fgets funcione corretamente 
    fgets(cidade1, sizeof(cidade1), stdin); // Lê a linha inteira, incluindo espaços
    cidade1[strcspn(cidade1, "\n")] = 0; // Remove o caractere de nova linha, se existir

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%lu", &populacao1); // Usando %lu para unsigned long int.

    printf("Digite a área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto da cidade (em bilhões de reais):\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &pontoturistico1);

    //Realizando os cálculos da primeira carta:
    densidade1 = populacao1 / area1;    //Cálculo da densidade populacional.
    calculopib1 = (float) pib1 * 1000000000 / populacao1;    //Cálculo do PIB Per Capita.

    printf("\n");

    //Solicitando ao usuário que insira os dados da segunda carta.
    printf("Insira os dados da sua SEGUNDA carta:\n");

    printf("Digite uma letra de A a H (Estado):\n");
    scanf(" %c", &estado2);

    printf("Insira um número de 01 a 04 (Código da Carta):\n");
    scanf(" %s", &codigocarta2);

    // Usando fgets para ler o nome da cidade com espaços
    printf("Digite o nome da Cidade:\n");
    getchar();  // Limpa o buffer para garantir que o fgets funcione corretamente
    fgets(cidade2, sizeof(cidade2), stdin); // Lê a linha inteira, incluindo espaços
    cidade2[strcspn(cidade2, "\n")] = 0; // Remove o caractere de nova linha, se existir

    printf("Digite o número de habitantes da cidade:\n");
    scanf(" %lu", &populacao2); // Usando %lu para unsigned long int.

    printf("Digite a área da cidade em quilômetros quadrados:\n");
    scanf(" %f", &area2);

    printf("Digite o Produto Interno Bruto da cidade (em bilhões de reais):\n");
    scanf(" %f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf(" %d", &pontoturistico2);

    //Realizando os cálculos da segunda carta:
    densidade2 = populacao2 / area2;    //Cálculo da densidade populacional.
    calculopib2 = (float) pib2 * 1000000000 / populacao2;    //Cálculo do PIB Per Capita em bilhôes de reais.
    
    printf("\n");

    //Mostrando na tela as informações da primeira carta contendo os dados digitados pelo usuário.
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigocarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontoturistico1);
    //Mostrando na tela o resultado do cálculo da segunda carta.
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB Per Capita: %2.f reais\n", calculopib1);

    printf("\n");

    //Mostrando na tela as informações da segunda carta contendo os dados digitados pelo usuário.
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigocarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontoturistico2);
    //Mostrando na tela o resultado do cálculo da segunda carta.
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB Per Capita: %2.f reais\n", calculopib2);

    printf("\n\n");

    //Realizando a comparação utilizando if/else.
    //Atributo escolhido: POPULAÇÃO
        if(populacao1 > populacao2) {
    printf("Carta 1 - %s: %d\n", cidade1, populacao1);
    printf("Carta 2 - %s: %d\n", cidade2, populacao2);
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
    printf("Carta 1 - %s: %d\n", cidade1, populacao1);
    printf("Carta 2 - %s: %d\n", cidade2, populacao2);
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
}

    return 0;
}