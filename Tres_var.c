/*
Faça um programa que leia 3 valores em variáveis distintas, armazene a soma das duas primeiras em
uma nova variável e o produto das duas últimas em outra, e mostre como resultado o produto das duas
novas variáveis.
*/
#include <stdio.h>
int main (void)
{
	float var_1, var_2, var_3;
	float var_12, var_23, var_fim;
	
	printf ("Insira o valor da primeira variavel: ");
	scanf ("%f", &var_1);
	
	printf ("Insira o valor da segunda variavel: ");
	scanf ("%f", &var_2);
	
	printf ("Insira o valor da terceira variavel: ");
	scanf ("%f", &var_3);
	
	var_12 = (var_1 + var_2);
	var_23 = (var_2 * var_3);
	var_fim = (var_12 * var_23);
	
	printf ("A soma do primeiro e segundo numero e de: %f\nO produto do segundo e terceiro numero e de: %f\nO produto da soma com o  produto e de %f", var_12, var_23, var_fim);
}
