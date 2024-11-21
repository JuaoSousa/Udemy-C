/*
Exercício 34

Escreva um programa que leia o código numérico da opção de um menu e execute os comandos do menu.
O menu estã descrito abaixo:

0 - Encerrar programa
1 - Incluir uma panela no estoque
2 - Incluir uma chaleira no estoque
3 - Incluir uma vassoura no estoque
4 - Relatório de Inclusões 

======================================
*/
#include "stdio.h"
#include "stdlib.h"

int main()
{
    int codigo, contPan,contVas,contCha 

  do{
     
     system("clr");
     printf("Menu de opçoes \n");
     printf("0 - Encerrar programa \n");
     printf("1 - Incluir uma panela no estoque \n");
     printf("2 - Incluir uma chaleira no estoque \n");
     printf("3 - Incluir uma vassoura no estoque \n");
     printf("4 - Relatorio de Inclusoes \n");
     scanf("%d",&codigo);

    switch{
           case 0:
            printf("Encerrando programa. \n");
          break;
           case 1:
            printf("Incluindo panela no estoque \n");
            contPan++;
          break;
           case 2:
            printf("Inclindo chaleira no estoque");
            contCha++;
          break;
           case 3:
            printf("Incluindo vassoura no estoque \n");
            contVas++;
          break;
           case 4:
            printf("Relatorio de Inclusoes")
          break;
           default:
            printf("Codigo invalido \n")
          break;
      
          system("pause");

           }

     } while (codigo != 0)

   


}

 
