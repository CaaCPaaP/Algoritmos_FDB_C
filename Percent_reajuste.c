/*
Escrever um programa para ler o salário mensal e o percentual de reajuste. Calcular e escrever o valor
do novo salário.
*/
#include <stdio.h>
int main (void)
{
	float sal, percen, percen_2, sal_novo;
	
	printf ("Insira o salario mensal: ");
	scanf ("%f", &sal);
	
	printf ("Insira o percentual de reajuste (apenas numeros): ");
	scanf ("%f", &percen);
	
	percen = (percen / 100);
	percen_2 = (sal * percen);
	
	sal_novo = (sal + percen_2);
	
	printf ("O salario novo e de R$%f.", sal_novo);
}
