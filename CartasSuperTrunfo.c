#include <stdio.h>

int main (){
    
    char estado[20] = "São Paulo";
    char codigocarta [4]= "A01";
    char cidade[20] = "Mogi das Cruzes";
    int populacao = 451;
    float areakm2 = 712;
    float pib = 19;
    int pontosturisticos = 20;

    printf("Carta 1: pressione a tecla enter para mostrar");
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
