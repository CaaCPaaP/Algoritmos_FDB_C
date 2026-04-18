/*
Escreva um programa para ler um valor e escrever se é positivo ou negativo. Considere
o zero como neutro, ou seja, se for digitado o valor zero, escrever a palavra zero.
*/
#include <stdio.h>
int main (void)
{
	float num;
	
	printf ("Insira um numero: ");
	scanf ("%f", &num);
	
	if (num < 0)
	{
		printf ("O numero e negativo");
	}
	
	if (num > 0)
	{
		printf ("O numero e positivo");
	}
	
	if (num == 0)
	{
		printf ("Zero");
	}
}
