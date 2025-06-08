#include <stdio.h>

int main (){
    //Carta 1
    char estado[20] = "São Paulo";
    char codigocarta[5] = "SP01";
    char cidade[20] = "Mogi das Cruzes";
    int populacao = 451;
    float areakm2 = 712;
    float pib = 19;
    int pontosturisticos = 20;

    printf("Super Trunfo Países - carta 1- Digite a sigla do estado: ");
    scanf("Digite o Estado: ");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigocarta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d mil habitantes \n", populacao);
    printf("Área: %0.f mil km2 \n", areakm2);
    printf("Pib: R$ %0.f bilhões \n", pib);
    printf("Pontos Turísticos: %d\n", pontosturisticos);
    printf("\n");

    return 0;
}
