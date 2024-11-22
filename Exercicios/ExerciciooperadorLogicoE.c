/*
faça um programa que leia um numero inteiro qualquer
Informar se este número está na faixa de 0 até 100
*/

#include "stdio.h"

int main()
{
 int numero;

 printf("Digite um número: ")
 scanf("%d", &numero);

 if(numero >= 0 && numero <=100)
   printf("O numero digitado esta na faixa de 0 até 100");
 else 
  printf("O numero digitado esta fora da faixa de 0 até 100");

 return 0;

}
