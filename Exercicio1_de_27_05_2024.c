#include <stdio.h>
int main (void)
{
	int idade[10];
	int i, somaIdades = 0;
	double media;
	
	for (i = 0;i < 10; i++)
	{
		printf ("Informe a idade: ");
		scanf ("%d", &idade[i]);
	}
	
	for (i=0; i < 10; i++)
	{
		somaIdades = somaIdades + idade[i];
	}
	media = (double) somaIdades / 10;
	printf ("A media calculada: %1f", media);
}
