#include <stdio.h>

int main (){
    
    //inserir dados da cidade
    char estado[20] = "São Paulo";
    char codigocarta [4]= "A01";
    char cidade[20] = "Mogi das Cruzes";
    int populacao = 451;
    float areakm2 = 712;
    float pib = 19;
    int pontosturisticos = 20;

    //inserir os comandos para programação
    printf("Carta 1: pressione a tecla enter para mostrar");
    scanf("Digitar enter para começar: ");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigocarta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d mil habitantes \n", populacao);
    //digitar ".0" entre o %.0f para remover as casas decimais
    printf("Área: %.0f mil km² \n", areakm2);
    printf("Pib: R$ %.0f bilhões \n", pib);
    printf("Pontos Turísticos: %d\n", pontosturisticos);
    printf("\n");

    return 0;
}
