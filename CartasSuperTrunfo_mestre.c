#include <stdio.h>
int main (){
    
    //inserir informações da carta 1
    char estado1[20] = "A";
    char codigocarta1[4]= "A01";
    char cidade1[20] = "Mogi";
    unsigned long int populacao1 = 451000;
    float areakm1 = 725;
    double pib1 = 19000000000;
    int pontosturisticos1 = 4;
    float densidadepopul1 = (float) populacao1 / areakm1;
    float pibpercapita1 = (float) pib1 / populacao1;
    //somas para pontuação do super poder1
    double superpoder1 = populacao1 + areakm1 + pib1 + pontosturisticos1 + pibpercapita1 + densidadepopul1;
    
    //inserir informações da carta 2
    char estado2[20] = "B";
    char codigocarta2[4] = "B01";
    char cidade2[20] = "Angra";
    unsigned long int populacao2 = 179000;
    float areakm2 = 813;
    double pib2 = 11000000000;
    int pontosturisticos2 = 8;
    float densidadepopul2 = (float) populacao2 / areakm2;
    float pibpercapita2 = (float) pib2 / populacao2;
    //somas para pontuação do super poder2
    double superpoder2 = populacao2 + areakm2 + pib2 + pontosturisticos2 + pibpercapita2 + densidadepopul2;
    
    //impressão dos dados da carta 1
    printf("Dados cidade carta1:\n");
    printf("Estado1: %s\n", estado1);
    printf("Código da carta1: %s\n", codigocarta1);
    printf("Cidade1: %s\n", cidade1);
    printf("População cidade1: %d habitantes\n", populacao1);
    printf("Área cidade1: %.0fkm²\n", areakm1);
    printf("Pib cidade1: R$ %.0lf\n", pib1);
    printf("Pontos turísticos cidade1: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.0f hab/km²\n", densidadepopul1);
    printf("Pib per capita: R$ %.2f\n", pibpercapita1);
    printf("Super Poder1: %.0lf pontos\n", superpoder1);


//impressão dos dados da carta 2
    printf("\nDados cidade carta2:\n");
    printf("Estado2: %s\n", estado2);
    printf("Código da carta2: %s\n", codigocarta2);
    printf("Cidade2: %s\n", cidade2);
    printf("População cidade2: %d habitantes\n", populacao2);
    printf("Área cidade2: %.0fkm²\n", areakm2);
    printf("Pib cidade2: R$ %.0lf \n", pib2);
    printf("Pontos turísticos cidade2: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.0f hab/km²\n", densidadepopul2);
    printf("Pib per capita: R$ %.2f\n", pibpercapita2);
    printf("Super Poder2: %.0lf pontos\n", superpoder2);

    //Iniciar as comparações das carta1 e carta2:    
    int resultadoPopul;
    int resultadoArea;
    resultadoPopul = populacao1 > populacao2;
    resultadoArea = areakm1 > areakm2;
    
    printf("\n***** Comparativos das Cartas 1 e 2 *****\n");
    printf("População Carta 1 venceu? %d\n", populacao1 > populacao2);
    printf("Área Carta 1 venceu? %d\n", areakm1 > areakm2);


        
    return 0;

}


