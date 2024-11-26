/*
Exercício 32

Em uma escola a professora necessita de um programa que leia as 3 notas escolares de um aluno, calcule a média e apresente-a, depois deverá informar se o aluno foi: "aprovado" ou "reprovado", baseando-se na média de escola que é 6.

OBS o programa deve fazer a pergunta "Deseja digitar as notas de outro aluno? (S/N)"

======================================
*/
#include "stdio.h"
#include "stdlib.h"  //Livraria para usar a função system

int main()
{

 char resposta = 's';
 float nota1,nota2,nota3,media;

  while (resposta == 's')
  {
   system("cls");   //Clear screen, esse comando limpará a tela quando o codigo for reiniciado 

   printf("Digite a primeira nota: ");            //Entrada de dados
   scanf("%f", &nota1);
   printf("Digite a segunda nota: ");
   scanf("%f", &nota2);
   printf("Digite a terceira nota: ");
   scanf("%f", &nota3);
   
   media = (nota1 + nota2 + nota3) / 3            //Calculo

  printf("A media do aluno foi: %.2f \n", media); //saída de dados

 if (media >= 6)                                
    printf("APROVADO \n")

 else
   printf("REPROVADO \n")


  printf("Deseja digitar as notas de outro aluno? (s/n): ");
  resposta = _gettche();
  printf("\n \n");
 
  }

 
