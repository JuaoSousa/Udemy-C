/*
Escreva um programa que informe se o numero digitado é igual ou diferente a 1000
*/
#include "stdio.h"

int main()
{
    int numero;

    printf("digite um numero:");
    scanf("%d",&numero);

    if (numero != 1000)
    {
        printf("Numero digitado eh diferente de 1000.");
    }
    else
    printf("Numero digitado eh igual a 1000.");
    



}