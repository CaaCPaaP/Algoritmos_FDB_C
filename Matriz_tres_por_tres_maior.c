/*
Ler uma matriz 3 X 3 com números inteiros. Percorrer a matriz e encontrar o maior valor. Exibilo.
*/
#include <stdio.h>
int main (void)
{
	int m [3] [3], lin, col, maior = 0;
	
	for (lin = 0;lin < 3;lin++)
	{
		for(col = 0;col < 3;col++)
		{
			printf ("Insira o valor para a linha %d coluna %d da matriz: ", lin, col);
			scanf("%d", &m [lin][col]);
			if (m [lin][col] > maior)
			{
				maior = m [lin][col];
			}
		}
	}
	printf ("O maior valor presente na matriz e de: %d", maior);
}
