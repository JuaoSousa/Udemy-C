/*
Escreva um programa que leia o salário hora de um professor, a quantidade de horas trabalhadas, e a quantidade de filhos menores de 14 anos.

Calcular o valor do salario bruto deste professor.
(salarioBruto = salarioHora * horasTrabalhadas)
Para calcular o salario familia leve em consideração as informações a seguir

Salario Bruto                              Salario Familia

Salario ate de 700                    8.50 para cada filho
salario acima de 700 até 1000           6.50 para cada filho
salario acima de 1000                   2.50 para cada filho
*/

#include "stdio.h"

int main()
{
    float salarioHora,salarioBruto,salarioFamilia,salarioLiquido;
    int  horasTrabalhadas, filhos;

    printf("Digite o salario hora: ");
    scanf("%f", &salarioHora);

    printf("Digite a quantidade de horas trabalhadas:");
    scanf("%d",&horasTrabalhadas);

    printf("Digite a quantidade de filhos menores de 14 anos: ");
    scanf("%d", &filhos);

    salarioBruto = salarioHora * horasTrabalhadas;

    if (salarioBruto <= 700)
    {
        salarioFamilia = filhos * 8.50; 
    }
    else if (salarioBruto <= 1000)
    {
        salarioFamilia = filhos * 6.50;
    }
    else 
    {
        salarioFamilia = filhos * 2.50;
    }

    salarioLiquido = salarioFamilia + salarioBruto;

    printf("Salario Bruto: %.2f \n", salarioBruto);
    printf("Salario Familia: %.2f \n", salarioFamilia);
    printf("Salario Liquido; %.2f \n", salarioLiquido);
    printf("Fim do Programa! \n");



}