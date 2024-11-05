/*
Escreva um programa que calcule e apresente o valor do volume de um paralelepipedo.
O programa deve utilizar a formula: volume = Comprimento * largura * altura
Atribua variaveis a raio e altura
*/

#include "stdio.h"

int main()
{
    float volume,comprimento,largura,altura;

    printf("Comprimento: ");
    scanf("%f",&comprimento);

    printf("Largura: ");
    scanf("%f",&largura);

    printf("Altura: ");
    scanf("%f",&altura);

    volume = comprimento * largura * altura;

    printf("Volume: %.2f \n",volume);


}