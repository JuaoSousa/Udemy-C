/*
Exercício 30

Escreva um programa que leia números inteiros até que seja digitado um número zero

repetição indeterminada, logo, usaremos o comando WHILE

No final Apresentar:

O somatório dos números Positivos

O somatório dos números Negativos

======================================================
*/
#include "stdio.h"

int main()
{

  int numero = 77;   // Coloco qualquer valor, pois numero não pode ser 0 
  int somaPos= 0, somaNeg = 0; //Usaremos essas variantes para armazenar os números positivos e negativos

  while (numero != 0) // Numero tem que ser diferente de zero, while irá repetir até q digitemos 0
 {
   Printf("Digite um numero: ");
   scanf("%d", &numero);
  
  if (numero > 0)
     somaPos = somaPos = numero;
  else
     somaNeg = somaNeg = numero;
  
 }

printf("Soma dos Positivos: %d \n", somaPos);
printf("Soma dos Negativos: %d \n", somaNeg);

}

