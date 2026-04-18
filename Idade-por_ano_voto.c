/*
Escreva um programa para ler o ano de nascimento de uma pessoa e escrever uma
mensagem que diga se ela poderá ou não votar este ano (não é necessário considerar o
mês em que ela nasceu). 
*/
#include <stdio.h>
int main (void)
{
	int ano_nasc, ano_atual, idade;
	
	ano_atual = 2024;
	
	printf ("Insira o seu ano de nascimento: ");
	scanf ("%d", &ano_nasc);
	
	idade = (ano_atual - ano_nasc);
	
	if (idade >= 16)
	{
		printf ("Voce pode votar este ano.");
	}
	else
	{
		printf ("Voce nao pode votar este ano.");
	}
}
