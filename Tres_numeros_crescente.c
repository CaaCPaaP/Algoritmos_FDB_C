/*
(Questão de Trabalho) Leia três valores numéricos inteiros e escreva-os em ordem
crescente. 
*/
#include <stdio.h>
int main (void)
{
	int num_1, num_2, num_3;
	
	printf ("Insira o primeiro numero inteiro: ");
	scanf ("%d", &num_1);
	
	printf ("Insira o segundo numero inteiro: ");
	scanf ("%d", &num_2);
	
	printf ("Insira o terceiro numero inteiro: ");
	scanf ("%d", &num_3);
	
	if (num_1 < num_2 < num_3);
	{
		printf ("%d, %d, %d.", num_1, num_2, num_3);
	}
	if (num_1 < num_3 < num_2)
	{
		printf ("%d, %d, %d.", num_1, num_3, num_2);
	}
	if (num_2 < num_1 < num_3)
	{
		printf ("%d, %d, %d.", num_2, num_1, num_3);
	}
	if (num_2 < num_3 < num_1)
	{
		printf ("%d, %d, %d.", num_2, num_3, num_1);
	}
	if (num_3 < num_1 < num_2)
	{
		printf ("%d, %d, %d.", num_3, num_1, num_2);
	}
	if (num_3 < num_2 < num_1)
	{
		printf ("%d, %d, %d.", num_3, num_2, num_1);
	}
}
