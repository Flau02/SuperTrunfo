#include <stdio.h>

int main() {

    // Declaração de variavéis carta 1 e carta 2

    short codigo_1[3], codigo_2[3];
    char estado_1[20], cidade_1[25];
    char estado_2[20], cidade_2[25]; 
    unsigned long int populacao_1, populacao_2; 
    int turisticos_1, turisticos_2;
    float pib_1, area_1; 
    float pib_2, area_2;
    float pib_percapta_1, pib_percapta_2;
    float densidade_1, densidade_2;
    float superPoder_1, superPoder_2;
   
   
    printf("** JOGO SUPER TRUNFO ** \n\n");
    
    //Imprime as orientações de cadastro das cartas

    printf("CADASTRAR CARTAS: \n\n"); 
    printf("Regra de cadastro das cartas: \n\n");
    printf("Serão oito estados, identificados pelas letras de A a H.\n");
    printf("Cada estado terá quatro cidades, numeradas de 1 a 4.\n");
    printf("A combinação da letra do estado e o número da cidade\n");
    printf("define o código da carta (por exemplo, A01, A02, B01, B02).\n");
    printf("Vamos começar? \n");

    //Entradas para cadastro das informações da carta 1
    
    printf("Digite o código da cidade da carta 1: "); 
    scanf(" %3s", codigo_1);

    printf("Digite o nome do estado da carta 1: ");
    scanf(" %20[^\n]", estado_1);

    printf("Digite o nome da cidade da carta 1: ");
    scanf(" %25[^\n]", cidade_1);
    
    printf("Digite a população da carta 1: ");
    scanf("%d", &populacao_1);
    
    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib_1);
   
    printf("Digite a área da carta 1: ");
    scanf("%f", &area_1);
    
    printf("Digite o número de pontos turistícos da carta 1:");
    scanf("%d", &turisticos_1);
   
    printf("\n");

    pib_percapta_1 = pib_1 / (float) populacao_1;
    densidade_1 = (float) populacao_1 / area_1;

    //Calcular super poder carta 1

    superPoder_1 = ((float) populacao_1 + area_1 + pib_1 + (float) turisticos_1 + pib_percapta_1) + (1 / densidade_1);

    //Imprime as informações cadastradas da carta 1

    printf("Código da carta: %s\n", codigo_1);
    printf("Estado: %s\n", estado_1);
    printf("Cidade: %s\n", cidade_1);
    printf("População: %d\n", populacao_1);
    printf("PIB: %.2f\n", pib_1);
    printf("Área: %.3f\n", area_1);
    printf("Pontos turísticos: %d\n", turisticos_1);
    printf("Densidade popilacional: %.3f\n", densidade_1);
    printf("PIB percapta: %.3f\n", pib_percapta_1);
    printf("Super poder carta 1: %.3f\n\n", superPoder_1);

    //Entradas para cadastro das informações da carta 2

    printf("Digite o código da cidade 2: "); 
    scanf("%s",codigo_2);

    printf("Digite o nome do estado: ");
    scanf(" %20[^\n]",estado_2);

    printf("Digite o nome da cidade: ");
    scanf(" %25[^\n]",cidade_2);
    
    printf("Digite a população: ");
    scanf("%d", &populacao_2);
    
    printf("Digite o PIB: ");
    scanf("%f", &pib_2);
   
    printf("Digite a área: ");
    scanf("%f", &area_2);
    
    printf("Digite o número de pontos turistícos:");
    scanf("%d", &turisticos_2);
   
    printf("\n");

    pib_percapta_2 = pib_2 / (float) populacao_2;
    densidade_2 = (float) populacao_2 / area_2;

     //Calcular super poder carat 2

     superPoder_2 = ((float) populacao_2 + area_2 + pib_2 + (float) turisticos_2 + pib_percapta_2) + (1 / densidade_2);

    //Imprime as informações cadastradas da carta 2

    printf("Código da carta: %s\n", codigo_2);
    printf("Estado: %s\n", estado_2);
    printf("Cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("PIB: %.2f\n", pib_2);
    printf("Área: %.3f\n", area_2);
    printf("Pontos turísticos: %d\n", turisticos_2);
    printf("Densidade popilacional: %.3f\n", densidade_2);
    printf("PIB percapta: %.3f\n", pib_percapta_2);
    printf("Super poder carta 2: %.3f\n\n", superPoder_2);

   
    //Menu para escolhas dos atributos

    printf(" ** ESCOLHER ATRIBUTOS PARA COMEÇAR O JOGO ** \n\n");
    







    return 0;
}