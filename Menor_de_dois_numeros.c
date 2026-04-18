/*
Leia dois valores numéricos e escreva o menor valor.
*/
#include <stdio.h>
int main (void)
{
	float num_1, num_2;
	
	printf ("Insira o primeiro numero: ");
	scanf ("%f", &num_1);
	
	printf ("Insira o segundo numero: ");
	scanf ("%f", &num_2);
	
	if (num_1 < num_2)
	{
		printf ("O numero %.2f e menor que o numero %.2f.", num_1, num_2);
	}
	else
	{
		printf ("O numero %.2f e menor que o numero %.2f.", num_2, num_1);
	}
}
