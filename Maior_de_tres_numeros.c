/*
Leia três valores numéricos e escreva o maior valor.
*/
#include <stdio.h>
int main (void)
{
	float num_1, num_2, num_3;
	
	printf ("Insira o primeiro numero: ");
	scanf ("%f", &num_1);
	
	printf ("Insira o segundo numero: ");
	scanf ("%f", &num_2);
	
	printf ("Insira o terceiro numero: ");
	scanf ("%f", &num_3);
	
	if ((num_1 > num_2) && (num_1 > num_3))
	{
		printf ("O maior valor e: %.2f.", num_1);
	}
	
	if ((num_2 > num_1) && (num_2 > num_3))
	{
		printf ("O maior valor e: %.2f.", num_2);
	}
	
	if ((num_3 > num_2) && (num_3 > num_1))
	{
		printf ("O maior valor e: %.2f.", num_3);
	}
}
