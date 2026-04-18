/*
Ler dois vetores: R de 5 elementos e S de 10 elementos. Gerar um vetor X de 15
elementos cujas 5 primeiras posições contenham os elementos de R e as 10 últimas
posições, os elementos de S. Escrever o vetor X.
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
	
	
}
