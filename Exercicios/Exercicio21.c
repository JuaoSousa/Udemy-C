/*
Escreva um programa que leia o codigo numerico de um produto e que escreva o nome do produto a que se refere o código.

Os códigos podem ser:

    1 - Panela
    2 - Chaleira
    3 - Prato

Qualquer outro número digitado deverá informar: Código digitado é invalido
*/

#include "stdio.h"

int main()
{ 
    int codigo;

    printf("Digite um codigo numerico: ");
    scanf("%d", &codigo);

    switch (codigo)
    {
        case 1:
        printf("panela \n");
          break;

        case 2:
        printf("Chaleira \n");
          break;

        case 3:
        printf("Prato \n");
          break;

        default:
        printf("Codigo digitado eh invalido");
          break;
   
    }


}
