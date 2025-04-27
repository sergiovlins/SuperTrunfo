#include <stdio.h>
#include <strings.h>

int main(){
    
    // Declaração das variáveis para armazenar os dados das cartas

    char estado1[20], estado2[20];
    char codigo[20], codigo2[20];
    char cidade1 [20], cidade2[20];
    unsigned long int populacao1, populacao2; 
    float area1, area2;
    float pib1, pib2;
    float dp, dp2; // Densidade populacional
    float ppc, ppc2; // PIB per Capta
    int npt, npt2; /*NPT = Número de pontos turísticos*/
    float sp, sp2; // Super Poder de cada carta 
    float iv1, iv2; //Inverso da densidade

    //Foi solicitado o registro de ambas as cartas de uma vez, para reduzir o tamanho do código.
    printf("Registre suas cartas !\n");
    
    printf("Digite o nome do primeiro Estado: "); // Registra o estado 1 
    scanf(" %s", estado1); // Registra o estado 2 

    // Os estados foram registrados separadamente para evitar problemas de leitura com o Enter.
    printf("Digite o nome do segundo Estado: ");
    scanf(" %s", estado2);

    printf("Digite os códigos de cada carta: ");
    scanf(" %s %s", codigo, codigo2);

    printf("Digite os nomes das cidades de cada estado: ");
    scanf(" %s %s", cidade1, cidade2);

    printf("Digite a população de cada estado: ");
    scanf(" %lu %lu", &populacao1 , &populacao2);

    printf("Digite a área de cada estado: ");
    scanf(" %f %f",&area1, &area2);
    
    printf("Digite o PIB de cada estado: ");
    scanf(" %f %f",&pib1, &pib2); 

    printf("Digite o número de pontos turisticos dos estados: ");
    scanf(" %d  %d",&npt, &npt2); 
    // O espaço antes de %d para limpar o buffer e evitar leitura incorreta, e o retorno não ficar em branco
    
    ppc = (float) (pib1 * 1000000000)/populacao1; //Multiplicado o valor em bilhões, visto que o PIB no enunciado é de bilhões
    ppc2 = (float) (pib2 * 1000000000)/populacao2; //Multiplicado o valor em bilhões, visto que o PIB no enunciado é de bilhões
    dp = populacao1/area1; 
    dp2 = populacao2/area2;
    iv1 = area1/ populacao1;
    iv2 = area2/ populacao2;
    sp  = populacao1 + area1 + pib1 + npt  + ppc  + iv1;
    sp2 = populacao2 + area2 + pib2 + npt2 + ppc2 + iv2;

    printf("\n");


    // Exibição das informações da primeira carta
    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", npt);
    printf("Densidade populacional: %.2fhab/km²\n", dp);
    printf("Pib per Capita:  %.2f reais\n ", ppc);


    // Separação visual entre as cartas
    printf("\n");

    // Exibição das informações da segunda carta
    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", npt2);
    printf("Densidade populacional: %.2fhab/km²\n", dp2);
    printf("Pib per Capita:  %.2f reais \n", ppc2);

    printf("\n"); 

    // Carta vencedora 
    printf("Comparação das cartas: \n");
    printf ("População: Carta 1 vence (%d) Carta 2 vence (%d)\n ", populacao1 > populacao2, populacao2 > populacao1);
    printf ("Área: Carta 1 vence (%d) Carta 2 vence (%d)\n ", area1 > area2, area2 > area1);
    printf ("PIB: Carta 1 vence (%d) Carta 2 vence (%d)\n  ", pib1 > pib2, pib2 > pib1);
    printf ("Pontos turisticos: Carta 1 vence (%d) Carta 2 vence (%d)\n ", npt>npt2 , npt2>npt);
    printf ("Densidade Populacional: Carta 1 vence (%d) Carta 2 vence (%d)\n  " , iv1>iv2, iv2>iv1);
    printf ("PIB per Capita: Carta 1 vence (%d) Carta 2 vence (%d)\n  ", ppc>ppc2, ppc2>ppc);
    printf ("Super Poder: Carta 1 vence (%d) Carta 2 vence (%d)\n  ", sp>sp2 , sp2>sp);

    return 0;

} 