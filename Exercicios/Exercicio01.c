//Crie um programa que diga o seu nome, o nome de sua mãe, e o nome de sua vóvó. Um em cada linha//
#include "stdio.h" 
#include "stdlib.h"                           //inclusão para reconhecer a estrutura "system"

/*
Para fazer comentario em varias linhas usamos 
*/

int main()
{
   printf("Joao Pedro \n");
   printf("Adriana \\Silva\\ \n");           //utilizo \\ para mostrar uma palavra entre barras
   printf("Claudinea \"florindo\" \n");      // Usando o \"\" eu posso usar as "" em uma palavra

   system("pause");                          //system pause para quando abrir o programa ele não fechar apos compilar.
}