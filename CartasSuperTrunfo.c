#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int populacao, turismo;
    float area, pib;
    char codigo[6];
    char cidade[30];
    char estado = "A, B, C";
    float area2, pib2;
    char codigo2[6];
    char cidade2[30];
    char estado2 ="A, B, C, D";
    int populacao2, turismo2;

    int densidade, densidade2;
    int cal_pib, cal_pib2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
        printf("Digite uma letra de 'A' a 'H' que representa um dos 8 estados: \n");
    scanf("%c", &estado);

    printf("Digite a letra do estado seguida de um numero de 01 a 04 'ex:A01 a B03': \n");
    scanf("%s", &codigo);
    
    printf("Digite nome da cidade : \n");
    scanf("%s", &cidade);

    printf("Digite o Número de Habitantes da Cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);

    printf("Digite o Produto interno Brutoto: \n");
    scanf("%f", &pib);

    printf("Digite a Quantidade de pontos turisticos: \n");
    scanf("%d", &turismo);

    printf("Digite uma letra de 'A' a 'H' que representa um dos 8 estados 2: \n");
    scanf("%s", &estado2);

    printf("Digite a letra do estado seguida de um numero de 01 a 04 'ex:A01 a B03'2: \n");
    scanf("%s", &codigo2);

    printf("Digite nome da cidade 2: \n");
    scanf("%s", &cidade2);

    printf("Digite o Número de Habitantes da Cidade 2: \n");
    scanf("%d", &populacao2);
    
    printf("Digite a área da cidade em quilômetros quadrados 2: \n");
    scanf("%f", &area2);

    printf("Digite o Produto interno Brutoto 2: \n");
    scanf("%f", &pib2);

    printf("Digite a Quantidade de pontos turisticos 2: \n");
    scanf("%d", &turismo2);

    densidade = (float)(populacao / area);
    cal_pib = (float)(pib / populacao);

    densidade2 =(float)(populacao2 / area2);
    cal_pib2 =(float)(pib2 / populacao2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

         //IMPRIMIR TELA RESULDADO DOS DADOS.
    printf("CARTA1: \n");
    printf("ESTADO: %c\n", estado);
    printf("CODIGO: %s\n", &codigo);
    printf("NOME DA CIDADE: %s\n", cidade);
    printf("POPULAÇÃO: %d\n", populacao);
    printf("ÀREA; %f KM²\n", area);
    printf("PIB: %.2f Bilhões de reais\n", pib);
    printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", turismo);
    printf("DENSIDADE POPULACIONAL: %f hab/km² \n", densidade);
    printf("PIB per Capita: %.2f reais \n", cal_pib);
    printf("\n");
        //IMPRESSAO DA SEGUNDA CARTA.
        
    printf("CARTA2 : \n");
    printf("ESTADO: %c\n", estado2);
    printf("CODIGO: %s\n", &codigo2);
    printf("NOME DA CIDADE: %s\n", cidade2);
    printf("POPULAÇÃO: %d\n", populacao2);
    printf("ÀREA; %f KM²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", turismo2);
    printf("DENSIDADE POPULACIONAL: %f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", cal_pib2);


    return 0;
}
