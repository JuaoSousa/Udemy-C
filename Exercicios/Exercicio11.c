/*
Escreva um programa que leia 3 notas de cada aluno e calcule a média
*/
#include "stdio.h"

int main()
{
    float nota1,nota2,nota3,media;
    char nome[40];

    printf("Digite o nome do Aluno: ");
    gets(nome);

    printf("Nota 1: ");
    scanf("%f",&nota1);

    printf("Nota 2: ");
    scanf("%f",&nota2);

    printf("Nota 3: ");
    scanf("%f",&nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A media do Aluno %s foi de %.2f \n",nome,media);

}