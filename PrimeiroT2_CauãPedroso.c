/* FACULDADE DOM BOSCO DE PORTO ALEGRE
* Sistemas de Informação – Análise e Desenvolvimento de Sistemas
* Algoritmos
*
* Programa PrimeiroT2:
* -------------------------
* Objetivo do Programa: Calcular o fatorial de todos os números positivos inseridos no vetor
* Componentes do grupo: Cauã da Silva Pedroso
* Data da entrega do arquivo fonte: 13/06/2024
*/
#include <stdio.h>
#define CONS 20
int main (void)
{
	int veta [CONS], vetf [CONS], cont = 0, flag = 0, fat [CONS];
	
	for (cont = 0; cont < CONS; cont++)
	{
		flag = 0;
		while (flag == 0) 
		{
			printf ("Insira o numero positivo da posicao %d para ser fatorado: ", cont);
			scanf ("%d", &veta[cont]);
			
			if (veta[cont] > 0)
			{
				vetf[cont] = veta[cont];
				if (veta[cont] > 1)
				{
					fat[cont] = (veta[cont] - 1);
				}
				else
				{
					fat[cont] = veta[cont];
				}
				
				for (fat[cont]; fat[cont] > 1; fat[cont]--)
				{
					vetf[cont] = (vetf[cont] * fat[cont]);
				}
				
				flag = 1;
			}
			else
			{
				printf ("Numero invalido, insira apenas numeros positivos\n");
			}
		}
	}
	printf ("-----------------------------------------------------------------------------------------\n");
	for (cont = 0; cont < CONS; cont++)
	{
		printf ("Numero presente na posicao %d: %d\n", cont, veta[cont]);
	}
	printf ("-----------------------------------------------------------------------------------------\n");
	for (cont = 0; cont < CONS; cont++)
	{
		printf ("Fatorial presente na posicao %d: %d\n", cont, vetf[cont]);
	}
}
