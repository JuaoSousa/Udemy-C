/*
  if (teste1)
     comando1;
  else if (teste2)
     comando2;
  else if (teste3)
     comando3;
  else 
     comando4;
*/
#include "stdio.h"

int main()
{
    int numero1;

    printf("Digite um numero: ");
    scanf("%d",&numero1);

    if (numero1 > 0)
        printf("POSITIVO");

    else if (numero1 < 0)
    printf("NEGATIVO");

    else
    printf("NULO");
    


}