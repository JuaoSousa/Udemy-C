/*
Escreva um programa que calcule o valor do volume de uma lata de azeite de forma cilindrica.
Volume = 3.14159 * raio2 * altura
*/
#include "stdio.h"

int main()
{
    float volume,raio,altura;

    printf("Digite o Raio: ");
    scanf("%f",&raio);

    printf("Digite a altura: ");
    scanf("%f",&altura);

    volume = 3.14159 * raio * raio * altura;

    printf("Valor do volume: %.2f \n",volume);


}