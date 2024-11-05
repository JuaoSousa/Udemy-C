/*
Escreva um programa que leia dois números inteiros quaisquer.
Escreva o maior deles.
*/
#include "stdio.h"

int main()
{
    int numero1,numero2;

    printf("Primeiro numero: ");
    scanf("%d",&numero1);

    printf("Primeiro numero ");
    scanf("%d",&numero2);

    if (numero1 > numero2)
    printf("%d eh maior que %d",numero1,numero2);
    else
    printf("%d eh maior que %d",numero2,numero1);





}