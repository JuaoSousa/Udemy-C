/*
Programa que armazena 3 notas escolares de um aluno
Calcula a media e armazena em uma variavel
apresenta a media do aluno
usar variavel tipo float
*/

#include "stdio.h"

int main()
{
    float nota1,nota2,nota3,media;

    printf("Nota 1:  ");
    scanf("%f",&nota1);

    printf("Nota 2: ");
    scanf("%f",&nota2);

    printf("Nota 3: ");
    scanf("%f",&nota3);

 media = (nota1 + nota2 + nota3) / 3;

     printf("A media sera: %.2f \n",media);


}