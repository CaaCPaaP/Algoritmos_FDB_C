/*
O preço de um automóvel é calculado pela soma do preço de fábrica com o preço dos impostos (45% do
preço de fábrica) e a percentagem do revendedor (28% do preço de fábrica). Faça um programa que leia o
preço de fábrica e imprima o seu preço final.
*/
#include <stdio.h>
int main (void)
{
	float preco_fab, preco_fim;
	float preco_i, perc_rev;
	
	preco_i = 0.45; //0.45 = 45%
	perc_rev = 0.28; //0.28 = 28%
	
	printf ("Insira o preco de fabrica do automovel ");
	scanf ("%f", &preco_fab);
	
	preco_i = (preco_fab * preco_i); //Encontra 45% do valor inserido
	perc_rev = (preco_fab * perc_rev); //Encontra 28% do valor inserido
	
	preco_fim = preco_fab + (preco_i + perc_rev); //Encontra o preço final do automóvel
	
	printf ("O preco final do automovel e de R$%f", preco_fim);
}
