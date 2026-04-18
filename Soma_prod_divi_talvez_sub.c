/*
Leia dois números e calcule a soma e o produto entre eles, e a subtração e a divisão do
primeiro valor com o segundo. Escreva o resultado na tela. Neste exercício, no segundo
número poderá ser digitado o valor zero. Além disto, somente deve ser calculado o
resultado da subtração quando ele não for negativo. 
*/
#include <stdio.h>
int main (void)
{
	float num_1, num_2, soma, prod, sub, divi;
	
	printf ("Insira o primeiro numero: ");
	scanf ("%f", &num_1);
	
	printf ("Insira o segundo numero: ");
	scanf ("%f", &num_2);
	
	soma = (num_1 + num_2);
	prod = (num_1 * num_2);
	divi = (soma / prod);
	
	if (soma - prod >= 0)
	{
		sub = (soma - prod);
	}
	printf ("Resultados: %.2f, %.2f, %.2f, %.2f", soma, prod, sub, divi);
}
