/*
Fazer um programa que tem dois vetores do mesmo tamanho (6). O usuário fornecerá
os dados do primeiro, e depois deverá ser armazenado e exibido o valor do segundo
vetor que é o valor do primeiro vetor somado a posição do elemento. 
*/
#include <stdio.h>
#define TAM 6
int main (void)
{
	int v1[TAM], v2[TAM], cont = 0;
	
	for (cont = 1; cont <= TAM; cont++)
	{
		printf ("Insira um numero: ");
		scanf ("%d", &v1[cont]);
		v2[cont] = v1[cont] + cont;
		printf ("O valor de %d mais a sua posicao e de: %d\n", v1[cont], v2[cont]);
	}
}
