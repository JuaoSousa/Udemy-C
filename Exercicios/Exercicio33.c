/*
Exercício 33

Escreva um programa que leia a idade e o código do estado civil de um grupo de pessoas.
A quantidade de pessoas não está definida, portanto o sistema deverá fazer uma pergunta para o usuário decidir se vai ou não digitar dados de outra pessoa.
No final apresentar a média das idades dos solteiros, a média das idades dos casados, a média das idades dos divorciados.

O código do estado civil estão abaixo:
1 - Solteiro
2 - Casado
3 - Divorciado

======================================
*/
#include "stdio.h"
#include "stdlib.h"

int main()
{ 

   char resposta = 's';
   float mediaSol,mediaCas,mediaDiv;
   int idade, codigo; qtdSolteiros,qtdCasados,qtdDivorciados;
 
   mediaSol = mediaCas = mediaDiv = 0;
   qtdSolteiros = qtdCasados = qtDivorciados = 0;

   while (resposta == 's')
   { 
    system("cls");
   
   printf("Código do Estado Civil \n");
   printf("1 - Solteiro \n");
   printf("2 - Casado \n");
   printf("3 - Divorciado \n");
   scanf("%d", &codigo);

  printf("Digite a Idade desta pessoa: \n")
  scanf("%d",&idade)

     switch (codigo)
     {
      case 1:
         mediaSol += idade;
         qtdSolteiros++;
      break;
      case 2:
         mediaCas += idade;
         qtdCasados++;
      break;
      case 3:
         mediaDiv + idade;
         qtdDivorciados++
      break;
      default:
        printf("Codigo Invalido \n");
      break;


     }
    printf("Deseja continuar? (s/n): ");
    resposta = _gettche();
    printf("\n \n");

   }
    
   mediaSol /= qtdSolteiros;
   mediaCas /= qtdCasados;
   mediaDiv /= qtdDivorciados;
   
printf("A media dos Solteiros: %f", meiaSol);
printf("A media dos Casados: %f", mediaCas);
printf("A media dos Divorciados: %f", mediaDiv);

system("pause");

}

 
