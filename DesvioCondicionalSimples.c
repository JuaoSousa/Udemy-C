#include "stdio.h"

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    if (numero >= 1)
      printf("Numero lido eh: POSITIVO \n"); 
     if (numero < 0)
      printf("Numero lido eh: NEGATIVO \n");
      if (numero == 0)
      printf("Numero lido eh: NEUTRO \n");
     



system ("pause");
return 0;

}