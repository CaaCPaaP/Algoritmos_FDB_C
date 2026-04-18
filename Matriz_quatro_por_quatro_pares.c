/*
Mostrar os elementos pares armazenados na matriz.
*/
#include <stdio.h>
int main (void)
{
	int mat [4][4], l, c, par[4][4];
	
	for (l = 0;l < 4;l++)
	{
		for(c = 0;c < 4;c++)
		{
			printf ("Insira o valor para a linha %d coluna %d da matriz: ", l, c);
			scanf("%d", &mat [l][c]);
			par [l][c] = mat [l][c] % 2;
		}
	}
	
	for (l = 0;l < 4;l++)
	{
		for(c = 0;c < 4;c++)
		{
			if (par [l][c] == 0)
			{
				printf ("linha %d coluna %d e par: %d\n", l, c, mat[l][c]);
			}
		}
	}
	
	printf ("A matriz completa:\n");
		for (l = 0;l < 4;l++)
	{
		for(c = 0;c < 4;c++)
		{
			printf ("%d ", mat [l][c]);
		}
		printf ("\n");
	}
}
