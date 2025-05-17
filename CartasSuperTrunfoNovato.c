#include <stdio.h>

int main() {
    
    //Iniciando as variaveis para a carta 1
    char estado1;
    char codigo1[3];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    //Iniciando as variaveis para a carta 2
    char estado2;
    char codigo2[3];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    // Apresentação:
    printf("============ Bem vindo ao jogo super trunfo ============\n");

    // Cadastro da Carta 1:
    printf("============ Vamos começar cadastrando a carta 1 ============\n");

    printf("Digite uma letra de 'A' a 'H' para representar um dos estados\n");
    scanf("%c", &estado1);

    printf("Digite o código da carta, que deverá ser composto pela letra do estado seguida por um número de 01 a 04. (exemplo: A01):\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade. Em cidades com nomes compostos, substitua o espaço por '_'. Exemplo: São_Paulo:\n");
    scanf("%s", nomeCidade1);

    printf("Digite a quantidade populacional:\n");
    scanf("%d", &populacao1);

    printf("Digite a área em km quadrado:\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turístico:\n");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da Carta 2:
    printf("\n============ Vamos cadastrando a carta 2 ============\n");

    printf("Digite uma letra de 'A' a 'H' para representar um dos estados:\n");
    scanf("%c", &estado2);

    printf("Digite o código da carta, que deverá ser composto pela letra do estado seguida por um número de 01 a 04. (exemplo: A01):\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade. Em cidades com nomes compostos, substitua o espaço por '_'. Exemplo: São_Paulo:\n");
    scanf("%s", nomeCidade2);

    printf("Digite a quantidade populacional: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km quadrado:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turístico:\n");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos Dados das Cartas:
    printf("\n ============ Carta 1 ============\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: R$%.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n",pontosTuristicos1);

    printf("\n ============ Carta 2 ============\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: R$%.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n",pontosTuristicos2);

    return 0;
}
