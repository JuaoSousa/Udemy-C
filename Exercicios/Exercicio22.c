/*
Escreva um programa que leia um numero inteiro

Vamos supor que seja digitado um numero entre 0 e 10 

Escreva na tela o numero digitado por extenso.

*/
#include "stdio.h"

int main()
{
    int numero;

    printf("digite um numero entre 0 e 10: ");
    scanf("%d",&numero);

    switch (numero)
    {
        case 0:
        printf("zero");
        break;

        case 1:
        printf("Um");
        break;

        case 2:
        printf("Dois");
        break;

        case 3:
        printf("Tres");
        break;

        case 4:
        printf("Quatro");
        break;

        case 5:
        printf("Cinco");
        break;

        case 6:
        printf("Seis");
        break;

        case 7:
        printf("Sete");
        break;

        case 8:
        printf("Oito");
        break;

        case 9:
        printf("Nove");
        break;

        case 10:
        printf("Dez");
        break;

        default:
        printf("Numero invalido");
        break;
    

    }



}
