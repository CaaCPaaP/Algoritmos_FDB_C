#include <stdio.h>
int main (void)
{
	int mat [4][4], l, c;
	
	for (l = 0;l < 4;l++)
	{
		for(c = 0;c < 4;c++)
		{
			scanf("%d", &mat [l][c]);
		}
	}
	
	for (l = 0;l < 4;l++)
	{
		for(c = 0;c < 4;c++)
		{
			printf ("%d ", mat [l][c]);
		}
		printf ("\n");
	}
}
