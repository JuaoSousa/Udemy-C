/*
Escreva um programa que leia a receita e a despesa de uma empresa no ano anterior
Apresente a mensagem "Lucro" ou "Prejuizo", conforme a situação da empresa.
*/

#include "stdio.h"

int main()
{
    float receita, despesa;

    printf("Valor da Receita: ");
    scanf("%f",&receita);

    printf("Valor da Despesa: ");
    scanf("%f", &despesa);

    if (receita <= despesa)
    {
        printf("PREJUIZO");
    }
    else
    printf("LUCRO");
    


}