/*
Dada uma matriz de ordem 3x3 faça um algoritmo que:
a) Calcule a soma dos elementos da primeira coluna;
b) Calcule o produto dos elementos da primeira linha;
c) Calcule a soma de todos os elementos da matriz;
*/
#include <stdio.h>
int main (void)
{
	int m [3] [3], lin, col, soma1 = 0, soma2 = 0, prod [3], prod_total, cont;
	
	for (lin = 0;lin < 3;lin++)
	{
		for(col = 0;col < 3;col++)
		{
			printf ("Insira o valor para a linha %d coluna %d da matriz: ", lin, col);
			scanf("%d", &m [lin][col]);
			soma1 = soma1 + m [lin][col];
			
			while (col == 0)
			{
				soma2 = soma2 + m [lin][col];
			}
		}
	}
	
	for (lin = 0;lin < 3;lin++)
	{
		while (lin == 0)
	{
		for (cont = 0;cont < 3;cont++)
		{
			prod [cont] = m [lin][col];
		}
			prod_total = ((prod [0] * prod [1]) * prod [2]);
		}
	}
	
	printf ("---------------------------------------------------\nA matriz completa:\n");
		for (lin = 0;lin < 3;lin++)
	{
		for(col = 0;col < 3;col++)
		{
			printf ("%d ", m [lin][col]);
		}
		printf ("\n");
	}
}
