#include <stdio.h>
#include <strings.h>

int main(){
    
    // Declaração das variáveis para armazenar os dados das cartas

    char estado1[20], estado2[20];
    char codigo[20], codigo2[20];
    char cidade1 [20], cidade2[20];
    int populacao1, populacao2; 
    float area1, area2;
    float pib1, pib2;
    int npt, npt2; /*NPT = Número de pontos turísticos*/

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
    scanf(" %d %d", &populacao1 , &populacao2);

    printf("Digite a área de cada estado: ");
    scanf(" %f %f",&area1, &area2);
    
    printf("Digite o PIB de cada estado: ");
    scanf(" %f %f",&pib1, &pib2); 

    printf("Digite o número de pontos turisticos dos estados: ");
    scanf(" %d  %d",&npt, &npt2); 
    // O espaço antes de %d para limpar o buffer e evitar leitura incorreta, e o retorno não ficar em branco

    // Exibição das informações da primeira carta
    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f Bilhões de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", npt);

    // Separação visual entre as cartas
    printf("\n");

    // Exibição das informações da segunda carta
    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f Bilhões de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", npt2);

    return 0;

}