/*
Dado o vetor X, criado na questão anterior, de 15 posições. Gerar o vetor de R com os
5 primeiros elementos de X e o vetor S com os 10 últimos elementos de X.
*/
#include <stdio.h>
int main (void)
{
	int vr[5], vs[10], vx[15], cont = 0;
	
	for (cont = 0; cont < 5; cont++)
	{
		printf ("Insira um numero para o primeiro vetor: ");
		scanf ("%d", &vr[cont]);
		vx[cont] = vr[cont];
	}
	
	for (cont = 0; cont < 10; cont++)
	{
		printf ("Insira um numero para o segundo vetor: ");
		scanf ("%d", &vs[cont]);
	}
	
	for (cont = 5; cont <= 15; cont++)
	{
		vx[cont] = vs[cont - 5];
	}
	
	printf ("-----------------------------------------------------------\n");
	
	for (cont = 0; cont < 15; cont++)
	{
		printf ("numero %d do vetor X: %d\n", cont, vx[cont]);
	}
	
	printf ("-----------------------------------------------------------\n");
	
	for (cont = 0; cont < 5; cont++)
	{
		printf ("numero %d do vetor R: %d\n", cont, vr[cont]);
	}
	
	printf ("-----------------------------------------------------------\n");
	
	for (cont = 0; cont < 10; cont++)
	{
		printf ("numero %d do vetor S: %d\n", cont, vs[cont]);
	}
}
