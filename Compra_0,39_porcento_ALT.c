/*
 Ler o valor de uma compra e escrever o quanto deverá ser pago, supondo que esta compra será paga em
trinta dias e terá um acréscimo de 0,39%.
*/
#include <stdio.h>
int main (void)
{
	float valor_ini, valor_fim, acrescimo;
	int dias;
	
	acrescimo = 0.0039;
	dias= 30;
	
	printf ("Insira o valor inicial da compra: ");
	scanf ("%f", &valor_ini);
	
	acrescimo = (valor_ini * acrescimo) * dias;
	valor_fim = (valor_ini + acrescimo);
	
	printf ("O preco final da compra, apos o prazo de %d dias, e de R$%f", dias, valor_fim);
}
