/*
Elaborar um programa que efetue a leitura de um número inteiro e apresente uma
mensagem informando se o número é par ou ímpar.
*/
#include <stdio.h>
int main (void)
{
	int num, resto;
	
	printf ("Insira um numero inteiro: ");
	scanf ("%d", &num);
	
	resto = (num % 2);
	
	if (resto == 1)
	{
		printf ("O numero inserido e um numero impar");
	}
	else
	{
		printf ("O numero inserido e um numero par");
	}
}
