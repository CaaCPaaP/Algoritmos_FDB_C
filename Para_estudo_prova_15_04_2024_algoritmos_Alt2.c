/*
Este estudo contem switch
*/
#include <stdio.h>
int main (void)
{
	int exp;
	
	printf ("Insira a sua experiencia\n1 = nenhuma\n2 = pouca experiencia\n3 = experiencia mediana\n4 = muita experiencia\n");
	scanf ("%d", &exp);
	
	switch (exp)
	{
		case 1 :
			printf ("Reprovado");
		break;
		
		case 2 :
			printf ("Fim da lista");
		break;
		
		case 3 :
			printf ("Meio da lista");
		break;
		
		case 4 :
			printf ("Inicio da lista");
		break;
	}
}
