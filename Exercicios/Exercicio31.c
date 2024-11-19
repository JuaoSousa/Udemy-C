/*
Exercício 31

Escreva um programa que leia números inteiros.

no final apresentar:

a média dos números lidos

obs: o programa deve fazer pergunta: "Deseja digitar outro número? (s/n)
     Se o usuário responder s, fica dentro do laço de repetição
     Se o usuário responder n, ou qualquer outra letra diferente de s, sai do laço de repetição e então calcula a média e apresenta o resultado da média dos números lidos

================================================================================
*/
#include "stdio.h"
#include "conio.h" //include para usar o _gettche

int main()
{
   int numero, soma = 0, qtdLido = 0;
   float media;
   char = resposta = 's';

   while (resposta == 's')
   {
     printf("Digite um numero: ");
     scanf("%d", &numero);
    
     soma += numero;    // mesma coisa que   soma = soma + numero;
     qtdLido++;


    printf("Deseja digitar outro número? (s/n) \n");
    resposta = _gettche(); //_gettche é um comando que le a letra e mostra ela no console.
    printf("\n \n");
   }

 media = soma / qtdLido

 printf("Media dos números digitados: %.2f \n", media);
 
