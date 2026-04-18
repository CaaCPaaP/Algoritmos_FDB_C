/*
Elaborar um programa que efetue a apresentação do valor da conversão em real de um valor lido em
dólar. O programa deve solicitar o valor da cotação do dólar e também a quantidade de dólares
disponível com o usuário, para que seja apresentado o valor em reais.
*/
#include <stdio.h>
int main (void)
{
	float dolar_cot, dolar_usu, reais;
	
	printf ("Insira a cotacao atual do dolar: ");
	scanf ("%f", &dolar_cot);
	
	printf ("Insira quantos dolares voce gostaria de converter para real: ");
	scanf ("%f", &dolar_usu);
	
	reais = (dolar_usu * dolar_cot);
	
	printf ("$%f em reais e R$%f.", dolar_usu, reais);
	
}
