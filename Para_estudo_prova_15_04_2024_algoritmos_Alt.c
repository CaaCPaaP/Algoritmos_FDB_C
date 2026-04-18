/*
Este estudo inclui int, float, casting, while, if, else e inicialização
*/
#include <stdio.h>
int main (void)
{
	int cond, idade, total, quantia;
	float media;
	cond = 1;
	total = 0;
	quantia = 0;
	
	while (cond == 1)
	{
		printf ("Insira a idade do individuo: ");
		scanf ("%d", &idade);
		
		quantia++;
		
		total = (total + idade);
		
		if (idade >= 18)
		{
			printf ("O individuo e maior de idade.\n");
		}
		else
		{
			printf ("O individuo e menor de idade.\n");
		}
		
		printf ("Gostaria de continuar o programa?\n1 para sim\n2 para nao\n");
		scanf ("%d", &cond);
	}
	media = ((float)total / quantia);
	
	printf ("Um total de %d pessoas tiveram a sua idade registrada\nA soma das idade e de %d\nA media das idades e de %.2f.", quantia, total, media);
}
