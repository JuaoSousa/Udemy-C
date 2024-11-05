/*
Escreva um programa que leia o salario de um funcionario
deverá ser concedido ao funcionario um reajuste de salario baseado nas informações a seguir:
Salario                          Taxa de Ajuste
Até R$1000                     15% de reajuste           
R$1000 até R$2000              10% de reajuste
acima de R$2000                5%  de reajuste
*/
#include "stdio.h"

int main()
{
    float salarioVelho,taxa,salarioNovo;

    printf("Informe o Salario do funcionario: ");
    scanf("%f",&salarioVelho);

    if (salarioVelho <= 1000)
     taxa = 15;
    else if (salarioVelho <= 2000)
     taxa = 10;
    else 
     taxa = 5;

     salarioNovo = salarioVelho + (salarioVelho * (taxa / 100));

    printf("Salario Velho........ %.2f \n",salarioVelho );
    printf("Taxa de reajuste..... %.2f%% \n", taxa);
    printf("Salario Novo......... %.2f \n", salarioNovo);

    
}