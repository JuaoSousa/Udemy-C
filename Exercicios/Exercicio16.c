/*
Escreva um programa que leia dois numeros
Apresente o resultado do calculo do maior dividido pelo menor
Desvio Condicional Composto.
*/

#include "stdio.h"

int main()
{
    float numero1,numero2,dividirMaior;

    printf("digite o primeiro numero: ");
    scanf("%f",&numero1);

    printf("digite o segundo numero: ");
    scanf("%f",&numero2);

    if (numero1 > numero2)
    dividirMaior = numero1 / numero2;
    else
    dividirMaior = numero2 / numero1;
    
    printf("A divisao do maior pelo menor: %.2f",dividirMaior);


}