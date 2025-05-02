#include <stdio.h>
#include <stdlib.h>

int main()
{
    char estado1[20], estado2[20];
    char codigo[20], codigo2[20];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int npt1, npt2;
    float dp1, dp2, ppc1, ppc2, iv1, iv2, sp1, sp2;
    int atributo1, atributo2;
    float valor1A, valor2A, valor1B, valor2B, soma1, soma2;

    // Cadastro das cartas
    printf("Registre suas cartas!\n");
    printf("Digite o nome do primeiro Estado: ");
    scanf(" %s", estado1);
    printf("Digite o nome do segundo Estado: ");
    scanf(" %s", estado2);
    printf("Digite os códigos de cada carta: ");
    scanf(" %s %s", codigo, codigo2);
    printf("Digite os nomes das cidades de cada estado: ");
    scanf(" %s %s", cidade1, cidade2);
    printf("Digite a população de cada estado: ");
    scanf("%lu %lu", &populacao1, &populacao2);
    printf("Digite a área de cada estado: ");
    scanf("%f %f", &area1, &area2);
    printf("Digite o PIB de cada estado (em bilhões): ");
    scanf("%f %f", &pib1, &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d %d", &npt1, &npt2);

    // Cálculos
    dp1 = populacao1 / area1;
    dp2 = populacao2 / area2;
    ppc1 = (pib1 * 1000000000) / populacao1;
    ppc2 = (pib2 * 1000000000) / populacao2;
    iv1 = area1 / populacao1;
    iv2 = area2 / populacao2;
    sp1 = populacao1 + area1 + pib1 + npt1 + ppc1 + iv1;
    sp2 = populacao2 + area2 + pib2 + npt2 + ppc2 + iv2;

    // Menu
    printf("\nEscolha dois atributos diferentes para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");

    printf("Escolha o primeiro atributo (1 a 7): ");
    scanf("%d", &atributo1);

    if (atributo1 < 1 || atributo1 > 7) {
        printf("Atributo inválido.\n");
        return 1;
    }

    printf("Escolha o segundo atributo (diferente do primeiro): ");
    scanf("%d", &atributo2);

    if (atributo2 < 1 || atributo2 > 7 || atributo2 == atributo1) {
        printf("Atributo inválido ou repetido.\n");
        return 1;
    }

    // Obter valor do primeiro atributo
    switch (atributo1) {
        case 1: valor1A = populacao1; valor2A = populacao2; break;
        case 2: valor1A = area1; valor2A = area2; break;
        case 3: valor1A = pib1; valor2A = pib2; break;
        case 4: valor1A = npt1; valor2A = npt2; break;
        case 5: valor1A = dp1; valor2A = dp2; break;
        case 6: valor1A = ppc1; valor2A = ppc2; break;
        case 7: valor1A = sp1; valor2A = sp2; break;
    }

    // Obter valor do segundo atributo
    switch (atributo2) {
        case 1: valor1B = populacao1; valor2B = populacao2; break;
        case 2: valor1B = area1; valor2B = area2; break;
        case 3: valor1B = pib1; valor2B = pib2; break;
        case 4: valor1B = npt1; valor2B = npt2; break;
        case 5: valor1B = dp1; valor2B = dp2; break;
        case 6: valor1B = ppc1; valor2B = ppc2; break;
        case 7: valor1B = sp1; valor2B = sp2; break;
    }

    // Comparação: densidade populacional (menor é melhor)
    if (atributo1 == 5) valor1A = -valor1A;
    if (atributo2 == 5) valor1B = -valor1B;
    if (atributo1 == 5) valor2A = -valor2A;
    if (atributo2 == 5) valor2B = -valor2B;

    soma1 = valor1A + valor1B;
    soma2 = valor2A + valor2B;

    // Resultado
    printf("\n--- Resultado da Comparação ---\n");
    printf("Carta 1: %s\n", estado1);
    printf("Carta 2: %s\n", estado2);

    printf("\nAtributo %d -> Carta 1: %.2f | Carta 2: %.2f\n", atributo1, (atributo1 == 5 ? -valor1A : valor1A), (atributo1 == 5 ? -valor2A : valor2A));
    printf("Atributo %d -> Carta 1: %.2f | Carta 2: %.2f\n", atributo2, (atributo2 == 5 ? -valor1B : valor1B), (atributo2 == 5 ? -valor2B : valor2B));

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", estado1, soma1);
    printf("%s: %.2f\n", estado2, soma2);

    if (soma1 > soma2) {
        printf("\nA carta vencedora é: %s\n", estado1);
    } else if (soma2 > soma1) {
        printf("\nA carta vencedora é: %s\n", estado2);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
