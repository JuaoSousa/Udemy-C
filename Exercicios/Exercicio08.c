/*
Calcule a kilometragem inicial e a final de uma viagem
Faça a subtração e saiba quantos kms percorreu na viagem
*/

#include "stdio.h"

int main()
{
    int kmInicial,kmFinal,resultado;

    printf("Km comeco da viagem: ");
    scanf("%d",&kmInicial);

    printf("Km final da viagem: ");
    scanf("%d",&kmFinal);

    resultado = kmFinal - kmInicial;

    printf("Distancia percorrida: %dkm \n",resultado);

}