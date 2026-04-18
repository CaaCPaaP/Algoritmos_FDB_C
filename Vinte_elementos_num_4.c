/*
Faça um programa para ler um vetor de 20 elementos numéricos inteiros. Após, exibir
as posições onde estão guardados os números ‘4’. Se não houver ocorrências deste
número, então exibir mensagem adequada.
*/
#include <stdio.h>
#define TAM 5
int main (void)
{
	int num[TAM], cont, flag = 0;
	
	for (cont = 0; cont < TAM; cont++)
	{
		printf ("Insira um numero: ");
		scanf ("%d", &num[cont]);
	}
	
	for (cont = 0; cont < TAM; cont++)
	{
		if (num[cont] == 4)
		{
			printf ("Posicao do numero 4: vetor %d\n", cont);
			flag = 1;
		}
	}
	
	if (flag == 0)
	{
		printf("O numero quatro nao esta presente no vetor.");
	}
	
	printf ("Os numeros que foram inseridos sao:\n");
	for (cont = 0; cont < TAM; cont++)
	{
		printf ("%d ", num[cont]);
	}
	
}
