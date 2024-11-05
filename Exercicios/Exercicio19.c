/*
Escreva um programa que leia o salário bruto de um funcionario.
Calcular o desconto de INSS baseado nas informações a seguir.
Salario Bruto                                Taxa de INSS

Salario até 1317.07                       8% de Desconto
Salario acima de 1317.07 até 2195.12      9% de Desconto
salario acima de 2195.12                  11% de Desconto

*/

#include "stdio.h"

int main()
{
    float salario,inss,salarioNovo,taxa;

    printf("Informe o Salario do Funcionario: ");
    scanf("%f",&salario);

    if (salario <= 1317.07)
     inss = 8;
     else if (salario <= 2195.12)
     inss = 9;
     else 
     inss = 11;

     taxa = inss / 100

     salarioNovo = salario - (salario * (inss /100))

     printf("Salario Bruto........ %.2f \n",salario);
     printf("Taxa de INSS.......... %.2f%%",inss)
     printf("Desconto do INSS........ %.2f \n",taxa);

  printf("Salario Liquido........ %.2f \n",salarioNovo ");
}