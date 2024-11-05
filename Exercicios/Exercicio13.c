//Escreva um programa que leia um número. Informar se o numero lido é maior do que 1000

#include "stdio.h"

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    if (numero > 1000)
    {
        printf("Numero escolhido eh maior que 1000.");
    }
    if (numero < 1000)
    {
        printf("Numero escolhido eh menor que 1000.");
    }
    
    



}