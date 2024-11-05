/*
Escreva um programa que calcule e apresente o valor do volume de uma lata de azeite de forma cilindrica.
O programa deve utilizar a formula: volume = 3.14 * raio2 * altura
Atribua variaveis a raio e altura
*/
#include "stdio.h"

int main(){
    float volume,raio,altura;

    printf("Valor do Raio: ");
    scanf("%f",&raio);

    printf("Valor da Altura: ");
    scanf("%f",&altura);

    volume = 3.14159 * raio * raio * altura;

    printf("Valor do Volume sera: %.2f \n",volume);






}