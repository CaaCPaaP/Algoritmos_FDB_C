/* FACULDADE DOM BOSCO DE PORTO ALEGRE
* Sistemas de Informação & Análise e Desenvolvimento de Sistemas
* Algoritmos
*
* Programa SegundoT2:
* -------------------------
* Objetivo do Programa:
* Autor:
* Data da entrega do arquivo fonte:
*/
#include <stdio.h>
#include <strings.h>
int main (void)
{
	char pal[26], vetx [10] [26], vetr [10] [26], menorp [26], maiorp [26];
	int menor = 1000, maior = 0, totalx = 0, mediax, excessx = 0, excessr = 0, flag = 1, contx = 0, contr = 0, cont = 0, nummax;
	
	while (flag == 1)
	{
		printf ("Insira uma palavra (maximo de 25 caracteres): ");
		scanf ("%s", pal);
		fflush(stdin);
		
		if (strlen(pal) < menor)
		{
			for (cont = 0; pal[cont] != '\0'; cont++)
			{
				menorp [cont] = pal[cont];
			}
		}
		
		nummax = strlen(pal);
		if ((pal[nummax] == 'r') || (pal[nummax] == 'R'))
		{
			if (nummax > maior)
			{
				maior = nummax;
				for (cont = 0; pal[cont] != '\0'; cont++)
				{
					maiorp[cont] = pal[cont];
				}
			}
		}
		/*	
		for (nummax = 0; pal[nummax] != '\0'; nummax++)
		{
			//Para contar quantos caracteres possuí a palavra inserida
		}
		nummax = nummax - 1;
		if ((nummax > maior) && (pal[nummax] == 'r'))
		{
			maior = nummax;
			for (cont = 0; pal[cont] != '\0'; cont++)
			{
				maiorp [cont] = pal[cont];
			}
		}
		*/
		
		if ((pal[0] == 'x') || (pal[0] == 'X'))
		{
			if (contx < 10)
			{
				strcpy(vetx[contx], pal);
				contx++;
			}
		}
		
		if ((pal[0] == 'r') || (pal[0] == 'R'))
		{
			if (contr < 10)
			{
				strcpy(vetr[contr], pal);
				contr++;
			}
		}
		
		
		
		printf ("Gostaria de inserir outra palavra?\n1 para sim\n2 para nao\n");
		scanf ("%d", &flag);
	}
	for (cont = 0; cont < 10; cont++)
	{
		printf ("Palavra na posicao %d: %s\n", cont, vetx[cont]);
	}
	for (cont = 0; cont < 10; cont++)
	{
		printf ("Palavra na posicao %d: %s\n", cont, vetr[cont]);
	}
	printf ("A menor palavra inserida foi: %s\n", menorp);
	printf ("A maior palavra inserida foi: %s", maiorp);
}
