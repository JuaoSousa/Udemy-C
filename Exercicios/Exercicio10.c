/*
Escreva um programa que armazene a receita e a despesa anual de uma empresa.
Calcular e apresentar o lucro obtido pela empresa.
Receita = todo dinheiro que entrou no caixa
Despesa = todo dinheiro que saiu do caixa
Lucro = É a diferença entre o que entrou e o qu saiu do caixa da empresa
*/

#include "stdio.h"

int main()
{
    float receita,lucro,despesa;

    printf("Valor da Receita: ");
    scanf("%f",&receita);

    printf("Valor da Despesa: ");
    scanf("%f",&despesa);

    lucro = receita - despesa;

    printf("Valor total de Lucro: R$%.2f \n",lucro);




}