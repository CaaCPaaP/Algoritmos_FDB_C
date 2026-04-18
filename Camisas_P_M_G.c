/*
Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo vendida
respectivamente por 10, 15, 18 reais. Construa um programa em que o usuário forneça a quantidade de
camisetas pequenas, médias e grandes vendidas. Informe o valor a ser cobrado.
*/
#include <stdio.h>
int main (void)
{
	int camisa_p = 10;
	int camisa_m = 15;
	int camisa_g = 18;
	int quantia_p, quantia_m, quantia_g, valor_p, valor_m, valor_g, valor_t;
	
	printf ("Uma camisa pequena custa R$10\nUma camisa media custa R$15\nUma camisa grande custa R$18\nQuantas camisas pequenas voce gostaria de comprar? ");
	scanf ("%d", &quantia_p);
	printf ("Quantas camisas medias voce gostaria de comprar? ");
	scanf ("%d", &quantia_m);
	printf ("Quantas camisas grandes voce gostaria de comprar? ");
	scanf ("%d", quantia_g);
	
	valor_p = (camisa_p * quantia_p);
	valor_m = (camisa_m * quantia_m);
	valor_g = (camisa_g * quantia_g);
	
	valor_t = valor_p + valor_m + valor_g;
	
	printf ("O valor total da compra e de R$%d", valor_t);
}
