/*
Faça um programa que leia o código do gênero de uma pessoa

0 - masculino
1 - Feminino

Identificar se o codigo digitado é valido ou não
*/
#include "stdio.h"

int main()
{
   int codigo;

  printf("Menu de Opcoes \n");
  printf("0 - Masculino \n");
  printf("1 - Feminino \n");   
  printf("Digite o codigo de gênero da pessoa: \n");
  scanf("%d", &codigo);

 if (codigo == 0 || codigo == 1 )
 
 printf("Código Valido \n");

 else

 printf("Código Invalido \n");

 return 0;
}
