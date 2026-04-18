/*
Escrever um programa que lê uma matriz M de 6 linhas X 5 colunas e escreve a quantidade de
elementos iguais a 0 (zero) da matriz.
*/
#include <stdio.h>
int main (void)
{
	int m [6] [5], lin, col, zero = 0;
	
	for (lin = 0;lin < 6;lin++)
	{
		for(col = 0;col < 5;col++)
		{
			printf ("Insira o valor para a linha %d coluna %d da matriz: ", lin, col);
			scanf("%d", &m [lin][col]);
			if (m [lin][col] == 0)
			{
				zero++;
			}
		}
	}
	
	printf ("A matriz possui %d numeros zero.\n", zero);
	
	printf ("---------------------------------------------------\nA matriz completa:\n");
		for (lin = 0;lin < 6;lin++)
	{
		for(col = 0;col < 5;col++)
		{
			printf ("%d ", m [lin][col]);
		}
		printf ("\n");
	}
}
