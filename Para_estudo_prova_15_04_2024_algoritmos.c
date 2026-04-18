/*
Este estudo inclui int, for, printf, scanf e if
*/
#include <stdio.h>
int main (void)
{
	int teste, cont;
	int soma = 0;
	
	for (cont = 1; cont <=5; cont++)
	{
	printf ("Insira o numero para o teste: ");
	scanf ("%d", &teste);
	
	printf ("Isto e um teste: %d\n", teste);
	
	soma = (soma + teste);
	}
	printf ("Resultado soma: %d\n", soma);
	
	if (soma < 100)
	{
		printf ("Resultado abaixo do esperado");
	}
	
	if ((soma >= 100) && (soma <= 200))
	{
		printf("Resultado esperado");
	}
	
	if (soma > 200)
	{
		printf ("Resultado acima do esperado");
	}
}
