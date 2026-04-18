/*
As laranjas custam R$ 0,50 cada se forem compradas menos do que uma dúzia, e R$
0,35 se forem compradas pelo menos doze. Escreva um programa que leia o número de
laranjas compradas, calcule e escreva o valor total da compra. 
*/
#include <stdio.h>
int main (void)
{
	float laranja, total;
	int quantia;
	
	printf ("Insira quantas laranjas foram compradas: ");
	scanf ("%d", &quantia);
	
	if (quantia >= 12)
	{
		laranja = 0.35;
	}
	else
	{
		laranja = 0.50;
	}
	
	total = (laranja * quantia);
	
	printf ("A compra deu R$%.2f no total", total);
}
