#include <stdio.h>

int main(){
    char estado1, estado2, estado3;
    char codigo1 [20], codigo2 [20];
    char nome_cidade1 [20], nome_cidade2 [20];
    unsigned long int populacao1, populacao2;
    float  area1, area2;
    float pib, pib2, pib3, pib4, pib5;
    int pontosturisticos1, pontosturisticos2;
    float divisao1, divisao2;
    float total1, totaL2, total3, total4, total5;


    printf("---- CADASTRE A CARTA 1 ----\n\n");

    printf("--DIGITE A E LETRA INICIAL DO ESTADO): \n");
            scanf(" %c", &estado1,  estado2);
            printf("--QUAL O CODIGO DO ESTADO ( LETRA INICIAL DO ESTADO E UM NÚMERO A1, R2, B3): \n");
            scanf ("%s", &codigo1);

            printf("-- QUAL O NOME DO ESTADO: \n");
            scanf(" %s[^\n]", nome_cidade1, nome_cidade2);
            printf("--POPULAÇÃO DO ESTADO: \n");
            scanf("%lu", &populacao1, populacao2);
            printf("--QUAL A AREA EM KM2: \n");
            scanf("%f", &area1, area2);
            printf("--QUAL O VALOR DO PIB: \n");
            scanf("%f", &pib, pib2);
            printf("--QUANTIDADE DE PONTOS TURISTICOS: \n");
            scanf ("%F", &pontosturisticos1);

            divisao1  = (populacao2 + area2) / 2;

            divisao2 = (pib2+populacao2) / 2;
           
            printf("\n--CADASTRE A CARTA 2--\n\n");
            printf("--DIGITE A E LETRA INICIAL DO ESTADO): \n");

            scanf(" %c", &estado1,  estado2);
            printf("--QUAL O CODIGO DO ESTADO ( LETRA INICIAL DO ESTADO E UM NÚMERO A1, R2, B3): \n");
            scanf ("%s", &codigo1);

            printf("-- QUAL O NOME DO ESTADO: \n");
            scanf(" %s[^\n]", nome_cidade1, nome_cidade2);
            printf("--POPULAÇÃO DO ESTADO: \n");
            scanf("%lu", &populacao1, populacao2);
            printf("--QUAL A AREA EM KM2: \n");
            scanf("%f", &area1, area2);
            printf("--QUAL O VALOR DO PIB: \n");
            scanf("%f", &pib, pib2);
            printf("--QUANTIDADE DE PONTOS TURISTICOS: \n");
            scanf ("%F", &pontosturisticos1);

            divisao1  = (populacao2 + area2) / 2;

            divisao2 = (pib2+populacao2) / 2;

            printf("-ESTADO: %c\n", estado3);
            printf("-CÓDIGO DA ESTADO: %s\n", codigo2);
            printf("-NOME DO ESTADOe: %s\n", nome_cidade2);
            printf("-POPULACAO DO ESTADO: %lu\n", populacao2);
            printf("-AREA EM km²: %.2f KM²\n", area2);
            printf("-PIIB DO ESTADO EM MILHOES: %.2f milhoes de reais\n", pib2);
            printf("-PONTOS TURISTICOS: %d\n", pontosturisticos2);
            printf("-DENSIDADE POPULACIONAL: %.2f hab/km²\n", divisao2);
            printf("-PIB: %.2f reais\n", divisao2);
