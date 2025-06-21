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
    int opcao1, opcao2;

    
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
    
    /*  DESAFIO NÍVEL NOVATO
    printf("Carta 1 - %s: %d\n", cidade1, populacao1);
    printf("Carta 2 - %s: %d\n", cidade2, populacao2);

    //Realizando a comparação utilizando if/else.
    //Atributo escolhido: POPULAÇÃO
        if(populacao1 > populacao2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
 }   */


    //Solicitando que o usuário escolha um atributo para comparação das cartas (Nível aventureiro):
    printf("*** ESCOLHA O PRIMEIRO ATRIBUTO PARA COMPARAR AS CARTAS: ***\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demogrática\n\n");

    scanf("%d", &opcao1); // Armazenando a opção selecionada.

    printf("\n");

    //Solicitando ao usuário que escolha o segundo atibuto.
    printf("*** ESCOLHA O SEGUNDO ATRIBUTO: ***\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demogrática\n\n");

    scanf("%d", &opcao2); // Armazenando a opção selecionada.

    //Verificando se o segundo atributo é igual ao primeiro:
        if(opcao1 == opcao2){
            printf("O segundo atributo não pode ser igual ao primeiro. Escolha outro atributo.\n");
            return 1;  //Se os dois atributos forem iguais, encerrará o programa.
        }

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


// Calculando a soma dos atributos para cada carta
float soma1 = 0, soma2 = 0;

// Comparação do primeiro atributo
printf("Primeiro atributo escolhido para comparação: ");
switch (opcao1) {
    case 1: 
        printf("População\n");
        soma1 += populacao1;
        soma2 += populacao2;
        break;
    case 2: 
        printf("Área\n");
        soma1 += area1;
        soma2 += area2;
        break;
    case 3: 
        printf("PIB\n");
        soma1 += pib1;
        soma2 += pib2;
        break;
    case 4: 
        printf("Pontos Turísticos\n");
        soma1 += pontoturistico1;
        soma2 += pontoturistico2;
        break;
    case 5: 
        printf("Densidade Demográfica\n");
        soma1 += densidade1;
        soma2 += densidade2;
        break;
    default: 
        printf("Opção inválida\n");
        return 1;
}

// Comparação do segundo atributo
printf("Segundo atributo escolhido para comparação: ");
switch (opcao2) {
    case 1: 
        printf("População\n");
        soma1 += populacao1;
        soma2 += populacao2;
        break;
    case 2: 
        printf("Área\n");
        soma1 += area1;
        soma2 += area2;
        break;
    case 3: 
        printf("PIB\n");
        soma1 += pib1;
        soma2 += pib2;
        break;
    case 4: 
        printf("Pontos Turísticos\n");
        soma1 += pontoturistico1;
        soma2 += pontoturistico2;
        break;
    case 5: 
        printf("Densidade Demográfica\n");
        soma1 += densidade1;
        soma2 += densidade2;
        break;
    default: 
        printf("Opção inválida\n");
        return 1;
}

// Exibindo o resultado final
printf("\nResultado da soma dos atributos:\n");
printf("Carta 1: %.2f \nCarta 2: %.2f\n", soma1, soma2);

printf("\n");

// Verificando o vencedor ou empate
if (soma1 > soma2) {
    printf("### CARTA 1, VENCEU! ###\n");
} else if (soma1 < soma2) {
    printf("### CARTA 2, VENCEU! ###\n");
} else {
    printf("### EMPATE! ###\n");
}




 /* DESAFIO NÍVEL AVENTUREIRO:
    //Utilizando o SWTICH para fazer a seleção.
    switch (opcao1) {
        case 1: //Quando for selecionada a primeira opção.
        printf("Nome das cidades: %s X %s.\n", cidade1, cidade2);
        printf("Atributo selecionado: POPULAÇÃO\n");
        printf("População: %d X %d\n", populacao1, populacao2);
            
            if(populacao1 > populacao2) {
                printf("### CARTA 1, VENCEU ! ###\n");
            }  else if(populacao1 == populacao2) {
                printf("### EMPATE ! ###");
            }
            else {
                printf("### CARTA 2, VENCEU ! ###\n");
            }
            break;

        case 2: //Quando for selecionada a segunda opção.
        printf("Nome das cidades: %s X %s.\n", cidade1, cidade2);
        printf("Atributo selecionado: ÁREA\n");
        printf("Área: %f X %f\n", area1, area2);

            if(area1 > area2) { //Utilizando IF
                printf("### CARTA 1, VENCEU ! ###\n");
            }  else if(area1 == area2) { //Utilizando ELSE IF
                printf("### EMPATE ! ###");
            }
            else { //utilizando ELSE
                printf("### CARTA 2, VENCEU ! ###\n");
            }
            break;

        case 3: //Quando for selecionada a terceira opção.
        printf("Nome das cidades: %s X %s.\n", cidade1, cidade2);
        printf("Atributo selecionado: PIB\n");
        printf("PIB: %f X %f\n", pib1, pib2);

            if(pib1 > pib2) {
                printf("### CARTA 1, VENCEU ! ###\n");
            }  else if(pib1 == pib2) {
                printf("### EMPATE ! ###");
            }
            else {
                printf("### CARTA 2, VENCEU ! ###\n");
            }
            break;

        case 4: //Quando for selecionada a quarta opção.
        printf("Nome das cidades: %s X %s.\n", cidade1, cidade2);
        printf("Atributo selecionado: Pontos Turísticos\n");
        printf("Pontos Turísticos: %d X %d\n", pontoturistico1, pontoturistico2);

            if(pontoturistico1 > pontoturistico2) {
                printf("### CARTA 1, VENCEU ! ###\n");
            }  else if(pontoturistico1 == pontoturistico2) {
                printf("### EMPATE ! ###");
            }
            else {
                printf("### CARTA 2, VENCEU ! ###\n");
            }
            break;

        case 5: //Quando for selecionada a quinta opção.
        printf("Nome das cidades: %s X %s.\n", cidade1, cidade2);
        printf("Atributo selecionado: Densidade Demográfica\n");
        printf("Densidade Demográfica: %d X %d\n", densidade1, densidade2);

            if(densidade1 < densidade2) {
                printf("### CARTA 1, VENCEU ! ###\n");
            }  else if(densidade1 == densidade2) {
                printf("### EMPATE ! ###");
            }
            else {
                printf("### CARTA 2, VENCEU ! ###\n");
            }
            break;

        default://Caso o usuário digite um número não listado, retornará esta mensagem:
        printf("Opção inválida.\nTente novamente.\n");

    }
 */

    return 0;
}