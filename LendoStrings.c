/*
Para guardar um dado do tipo string não declararemos a variavel como string, mas sim como char variavel[40]. 
*/
#include "stdio.h"

int main()
{
    char nome[40];

    printf("Digite um nome: ");
    gets(nome); //para armazenar uma variavel em "char" usaremos a função "gets"

    printf("Nome Lido: %s \n", nome);
 

}