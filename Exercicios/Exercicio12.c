/*
Escreva um programa que leia o ano de nascimento de uma pessoa
Calcular e apresentar a quantidade de dias, de horas, de minutos e a quantidade de segundos esta pessoa vive desde o seu nascimento.
*/

int main()
{
    int idade,ano,dias,horas,minutos,segundos;

    printf("Qual o ano do seu nascimento: ");
    scanf("%d",&ano);

    idade = 2024 - ano;

    dias = idade * 365;

    printf ("Voce tem %d dias de vida \n",dias);

    horas = dias * 24;

    printf("Voce tem %d horas de vida \n", horas);

    minutos = horas * 60;

    printf("Voce tem %d minutos de vida \n",minutos);

    segundos = minutos * 60;

    printf("Voce tem %d segundos de vida \n",segundos);
    

}