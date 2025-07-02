#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
 char estado1[50], estado2[50], nome1[50], nome2[50], codigo1[20], codigo2[20];
    int populacao1, populacao2, pontos1, pontos2, opcao;
    float area1, area2, pib1, pib2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
     // Entrada dos dados da primeira cidade
    printf("\nCadastro da primeira carta:\n");

    printf("Represente seu Estado com 2 letras: ");
    scanf(" %s", estado1);

    printf("Código da carta exemplo (01 a 05): ");
    scanf(" %s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %s[^\n]", nome1);// Captura nomes com espaços

    printf("População: ");
    scanf("%d", &populacao1);
     printf("Área (km²): ");
    scanf("%f", &area1);
    
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);
    // Entrada dos dados da segunda cidade
    printf("\nCadastro da segunda carta:\n");

    printf("Estado: ");
    scanf(" %s", estado2);

    printf("Código da carta: ");
    scanf(" %s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %s[^\n]", nome2);// Captura nomes com espaços

    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área (km²): ");
    scanf("%f", &area2);
    
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
     printf("\nEscolha o atributo a ser comparado:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
     if (opcao == 1) {
        printf("População:\n");
        printf("- %s: %d habitantes\n", nome1, populacao1);
        printf("- %s: %d habitantes\n", nome2, populacao2);
        if (populacao1 > populacao2) {
            printf("Vencedora: %s\n", nome1);
        } else if (populacao2 > populacao1) {
            printf("Vencedora: %s\n", nome2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (opcao == 2) {
        printf("Área:\n");
        printf("- %s: %.2f km²\n", nome1, area1);
        printf("- %s: %.2f km²\n", nome2, area2);
        if (area1 > area2) {
            printf("Vencedora: %s\n", nome1);
        } else if (area2 > area1) {
            printf("Vencedora: %s\n", nome2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (opcao == 3) {
        printf("PIB:\n");
        printf("- %s: %.2f bilhões\n", nome1, pib1);
        printf("- %s: %.2f bilhões\n", nome2, pib2);
        if (pib1 > pib2) {
            printf("Vencedora: %s\n", nome1);
        } else if (pib2 > pib1) {
            printf("Vencedora: %s\n", nome2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (opcao == 4) {
        printf("Número de pontos turísticos:\n");
        printf("- %s: %d pontos turísticos\n", nome1, pontos1);
        printf("- %s: %d pontos turísticos\n", nome2, pontos2);
        if (pontos1 > pontos2) {
            printf("Vencedora: %s\n", nome1);
        } else if (pontos2 > pontos1) {
            printf("Vencedora: %s\n", nome2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else {
        printf("Opção inválida!\n");
    }



    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

      printf("\nDados das cartas cadastradas:\n");

    printf("\nCarta 1: %s (%s) - Estado: %s\n", nome1, codigo1, estado1);
    printf("População: %d | Área: %.2f km² | PIB: %.2f bilhões | Pontos turísticos: %d\n", populacao1, area1, pib1, pontos1);
    
    printf("\nCarta 2: %s (%s) - Estado: %s\n", nome2, codigo2, estado2);
    printf("População: %d | Área: %.2f km² | PIB: %.2f bilhões | Pontos turísticos: %d\n", populacao2, area2, pib2, pontos2);
    printf("\nResultado da comparação.\n");  
    

   
    return 0;
}
