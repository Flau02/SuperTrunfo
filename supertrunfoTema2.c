#include <stdio.h>

int main() {

    // Declaração de variavéis carta 1 e carta 2

    short codigo_1[3], codigo_2[3];
    char estado_1[20], cidade_1[25];
    char estado_2[20], cidade_2[25]; 
    unsigned long int populacao_1, populacao_2; 
    int turisticos_1, turisticos_2;
    float pib_1, pib_2; 
    float area_1, area_2;
    float pib_percapta_1, pib_percapta_2;
    float densidade_1, densidade_2;
    float superPoder_1, superPoder_2;
    int primeiroAtributo, segundoAtributo,terceiroAtributo;
    int resultado1, resultado2, resultado3;

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

     //Calcular super poder carta 2

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

   
    //Menu de escolha do primeiro atributo para inicio do jogo

    printf("** CARTAS CADASTRADA, AGORA ESCOLHA 2 ATRIBUTOS PARA INICIAR O JOGO **\n\n");
    printf("Opções de atributos:\n\n");
    printf("1 - População\n");
    printf("2 - Pontos turistícos\n");
    printf("3 - PIB\n");
    printf("4 - Área territorial\n");
    printf("5 - PIB percapta\n");
    printf("6 - Densidade demográfica\n");
    printf("7 - Super Poder\n\n");

    printf("Digite o número do primeiro atributo: ");
    scanf("%d", &primeiroAtributo);

    switch (primeiroAtributo)   // Switch para escolha do primeiro atributo e atribui valor a resultado1
    {
    case 1:
        printf("Você escolheu atributo 'POPULAÇÃO'\n");
        resultado1 = populacao_1 > populacao_2 ? 1 : 0;
        printf("POPULAÇÃO %s: %d X POPULAÇÃO %s: %d\n\n", codigo_1,populacao_1, codigo_2, populacao_2);
        break;
    case 2:
        printf("Você escolheu atributo 'PONTOS TURÍSTICOS'\n\n");
        resultado1 = turisticos_1 > turisticos_2 ? 1 : 0;
        printf("PONTOS TURÍSTICOS %s: %d X PONTOS TURÍSTICOS %s: %d\n\n", codigo_1,turisticos_1, codigo_2, turisticos_2);
        break;
    case 3:
        printf("Você escolheu atributo 'PIB'\n\n");
        resultado1 = pib_1 > pib_2 ? 1 : 0;
        printf("PIB %s: %.3f X PIB %s: %.3f\n\n", codigo_1, pib_1, codigo_2, pib_2);
        break;
    case 4:
        printf("Você escolheu atributo 'ÁREA TERRITORIAL'\n\n");
        resultado1 = area_1 > area_2 ? 1 : 0;
        printf("ÁREA TERRITORIAL %s: %.3f X ÁREA TERRITORIAL %s: %.3f\n\n", codigo_1, area_1, codigo_2, area_2);
        break;    
    case 5:
        printf("Você escolheu atributo 'PIB PERCAPTA'\n\n");
        resultado1 = pib_percapta_1 > pib_percapta_2 ? 1 : 0;
        printf("PIB PERCAPTA %s: %.3f X PIB PERCAPTA %s: %.3f\n\n", codigo_1, pib_percapta_1, codigo_2, pib_percapta_2);
        break;
    case 6:
        printf("Você escolheu atributo 'DENSIDADE DEMOGRÁFICA'\n\n");
        resultado1 = densidade_1 < densidade_2 ? 1 : 0;
        printf("DENSIDADE DEMOGRÁFICA %s: %.3f X DENSIDADE DEMOGRÁFICA %s: %.3f\n\n", codigo_1, densidade_1, codigo_2, densidade_2);
        break;
    case 7:
        printf("Você escolheu atributo 'SUPER PODER'\n\n");
        resultado1 = turisticos_1 > turisticos_2 ? 1 : 0;
        printf("SUPER PODER %s: %.3f X SUPER PODER %s: %.3f\n\n", codigo_1, superPoder_1, codigo_2, superPoder_2);
        break;
    
    default:
        printf("OPÇÃO ESCOLHIDA INVÁLIDA!!!\n\n");
        break;
    }

    //Menu para escolha do segundo atributo

    printf("Escolha o segundo atributo diferente do primeiro escolhido.\n\n");
    printf("1 - População\n");
    printf("2 - Pontos turistícos\n");
    printf("3 - PIB\n");
    printf("4 - Área territorial\n");
    printf("5 - PIB percapta\n");
    printf("6 - Densidade demográfica\n");
    printf("7 - Super Poder\n\n");

    printf("Digite o número do segundo atributo: ");
    scanf("%d", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo) // Bloqueio de escolha de mesmo atributo
    {
        printf("Você escolheu o mesmo atributo escolha atributos diferentes.\n\n");
    }
    else{
        switch (segundoAtributo) // Switch para escolha de segundo atributo e atribui valor a resultado2
    {
        case 1:
        printf("Você escolheu atributo 'POPULAÇÃO'\n");
        resultado1 = populacao_1 > populacao_2 ? 1 : 0;
        printf("POPULAÇÃO %s: %d X POPULAÇÃO %s: %d\n\n", codigo_1,populacao_1, codigo_2, populacao_2);
        break;
    case 2:
        printf("Você escolheu atributo 'PONTOS TURÍSTICOS'\n\n");
        resultado1 = turisticos_1 > turisticos_2 ? 1 : 0;
        printf("PONTOS TURÍSTICOS %s: %d X PONTOS TURÍSTICOS %s: %d\n\n", codigo_1,turisticos_1, codigo_2, turisticos_2);
        break;
    case 3:
        printf("Você escolheu atributo 'PIB'\n\n");
        resultado1 = pib_1 > pib_2 ? 1 : 0;
        printf("PIB %s: %.3f X PIB %s: %.3f\n\n", codigo_1, pib_1, codigo_2, pib_2);
        break;
    case 4:
        printf("Você escolheu atributo 'ÁREA TERRITORIAL'\n\n");
        resultado1 = area_1 > area_2 ? 1 : 0;
        printf("ÁREA TERRITORIAL %s: %.3f X ÁREA TERRITORIAL %s: %.3f\n\n", codigo_1, area_1, codigo_2, area_2);
        break;    
    case 5:
        printf("Você escolheu atributo 'PIB PERCAPTA'\n\n");
        resultado1 = pib_percapta_1 > pib_percapta_2 ? 1 : 0;
        printf("PIB PERCAPTA %s: %.3f X PIB PERCAPTA %s: %.3f\n\n", codigo_1, pib_percapta_1, codigo_2, pib_percapta_2);
        break;
    case 6:
        printf("Você escolheu atributo 'DENSIDADE DEMOGRÁFICA'\n\n");
        resultado1 = densidade_1 < densidade_2 ? 1 : 0;
        printf("DENSIDADE DEMOGRÁFICA %s: %.3f X DENSIDADE DEMOGRÁFICA %s: %.3f\n\n", codigo_1, densidade_1, codigo_2, densidade_2);
        break;
    case 7:
        printf("Você escolheu atributo 'SUPER PODER'\n\n");
        resultado1 = turisticos_1 > turisticos_2 ? 1 : 0;
        printf("SUPER PODER %s: %.3f X SUPER PODER %s: %.3f\n\n", codigo_1, superPoder_1, codigo_2,superPoder_2, turisticos_2);
        break;
    
    default:
        printf("OPÇÃO ESCOLHIDA INVÁLIDA!!!\n\n");
        break;
    }
    }

    // Tratamento do resultado

    if (primeiroAtributo == segundoAtributo) {    
        // Estrutura vazia somente para bloquear continuação do programa se atributos forem iguais.
      } else if (resultado1 && resultado2) {      
        printf("PARABÉNS VOCÊ VENCEU O JOGO!!!\n");
      
      } else if (resultado1 != resultado2) {
        printf("EMPATOU O JOGO!!!\n\n");
        printf("Escolha o terceiro atributo diferente dos anteriores para desempate.\n\n");
        printf("1 - População\n");
        printf("2 - Pontos turistícos\n");
        printf("3 - PIB\n");
        printf("4 - Área territorial\n");
        printf("5 - PIB percapta\n");
        printf("6 - Densidade demográfica\n");
        printf("7 - Super Poder\n\n");

        printf("Digite o número do terceiro atributo: ");
        scanf("%d", &terceiroAtributo);

        if (terceiroAtributo == primeiroAtributo)
        {
            printf("Você escolheu o mesmo atributo escolha atributos diferentes.\n\n");
        }else if (terceiroAtributo == segundoAtributo)
        {
            printf("Você escolheu o mesmo atributo escolha atributos diferentes.\n\n");
        }else
        {
            switch (terceiroAtributo)  // Switch para escolha de terceiro atributo para desempate e atribui valor a resultado3
            {
                case 1:
                printf("Você escolheu atributo 'POPULAÇÃO'\n");
                resultado1 = populacao_1 > populacao_2 ? 1 : 0;
                printf("POPULAÇÃO %s: %d X POPULAÇÃO %s: %d\n\n", codigo_1,populacao_1, codigo_2, populacao_2);
                break;
            case 2:
                printf("Você escolheu atributo 'PONTOS TURÍSTICOS'\n\n");
                resultado1 = turisticos_1 > turisticos_2 ? 1 : 0;
                printf("PONTOS TURÍSTICOS %s: %d X PONTOS TURÍSTICOS %s: %d\n\n", codigo_1,turisticos_1, codigo_2, turisticos_2);
                break;
            case 3:
                printf("Você escolheu atributo 'PIB'\n\n");
                resultado1 = pib_1 > pib_2 ? 1 : 0;
                printf("PIB %s: %.3f X PIB %s: %.3f\n\n", codigo_1, pib_1, codigo_2, pib_2);
                break;
            case 4:
                printf("Você escolheu atributo 'ÁREA TERRITORIAL'\n\n");
                resultado1 = area_1 > area_2 ? 1 : 0;
                printf("ÁREA TERRITORIAL %s: %.3f X ÁREA TERRITORIAL %s: %.3f\n\n", codigo_1, area_1, codigo_2, area_2);
                break;    
            case 5:
                printf("Você escolheu atributo 'PIB PERCAPTA'\n\n");
                resultado1 = pib_percapta_1 > pib_percapta_2 ? 1 : 0;
                printf("PIB PERCAPTA %s: %.3f X PIB PERCAPTA %s: %.3f\n\n", codigo_1, pib_percapta_1, codigo_2, pib_percapta_2);
                break;
            case 6:
                printf("Você escolheu atributo 'DENSIDADE DEMOGRÁFICA'\n\n");
                resultado1 = densidade_1 < densidade_2 ? 1 : 0;
                printf("DENSIDADE DEMOGRÁFICA %s: %.3f X DENSIDADE DEMOGRÁFICA %s: %.3f\n\n", codigo_1, densidade_1, codigo_2, densidade_2);
                break;
            case 7:
                printf("Você escolheu atributo 'SUPER PODER'\n\n");
                resultado1 = turisticos_1 > turisticos_2 ? 1 : 0;
                printf("SUPER PODER %s: %.3f X SUPER PODER %s: %.3f\n\n", codigo_1, superPoder_1, codigo_2, superPoder_2);
                break;
            
            default:
                printf("OPÇÃO ESCOLHIDA INVÁLIDA!!!\n\n");
                break;
            }
            
            if (resultado3 == 1)
                {
                 printf("PARABÉNS VOCÊ VENCEU O JOGO!!!\n\n");  
                }else{
                    printf("VOCÊ PERDEU O JOGO!!!\n");
                     }  
        }
        
      } else {
        printf("VOCÊ PERDEU O JOGO!!!\n");
      }

    return 0;
}