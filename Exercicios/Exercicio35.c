/*
Exercício 35

Escreva um programa que leia o código e façaas tarefas, conforme a tabela de códigos abaixo:

0 - Encerrar programa
1 - Incluir uma unidade no estoque
2 - Excluir uma unidade no estoque
3 - Mostrar o total disponível no estoque
4 - Mostrar o total de entradas no estoque
5 - Mostrar o total de saídas no estoque

======================================
*/
#include "stdio.h"
#include "stdlib.h"

int main()
{
    int codigo, entradas,saidas;estoque; 
    entrada = saida = estoque = 0

  do{
     system("cls")
     
     printf("Menu de opções \n");

     printf("0 - Encerrar programa \n");
     printf("1 - Incluir uma unidade no estoque \n");
     printf("2 - Excluir uma unidade no estoque \n")
     printf("3 - Mostrar o total disponivel no estoque \n");
     printf("4 - Mostrar o total de entradas no estoque \n");
     printf("5 - Mostrar o total de saidas no estoque \n");
     scanf("%d", &codigo);

     switch(codigo)
     case 0:
      printf("Encerrando programa. \");
    break;
     case 1:
      printf("Incluindo uma unidade no estoque \n");
      estoque++;
      entrada++;
    break;
     case 2:
      printf("Excluindo uma unidade no estoque \n");

      if (estoque == 0)
       {
          printf("Estoque está vazio")
       }
      else
       {
        printf("Excluindo uma unidade no estoque \n");
        estoque--;
        saidas++; 

        }
   
    break;
     case 3:
      printf("Mostrando o total disponivel no estoque \n");
      printf("Total: %d \n", estoque);
    break;
     case 4:
      printf("Mostrando o total de entradas no estoque \n");
      printf("Total de entradas: %d \n", entradas);
    break;
     case 5:
      printf("Mostrando o total de saidas no estoque")
      pintf("Total de saidas: %d \n",saidas);
    break;
     default:
      printf("Codigo Invalido");
    break;     
     
    system("pause")

     } while (codigo != 0);

}

 
