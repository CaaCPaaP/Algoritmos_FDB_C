/*
Faça um programa que calcule e mostre a área de um trapézio,
Onde Trapézio=((baseMaior + baseMenor) * altura) / 2
*/
#include <stdio.h>
int main (void)
{
	float base_ma, base_me, altura;
	float area;
	
	printf ("Insira a base maior do trapezio: ");
	scanf ("%f", &base_ma);
	
	printf ("Insira a base menor do trapezio: ");
	scanf ("%f", &base_me);
	
	printf ("Insira a altura do trapezio: ");
	scanf ("%f", &altura);
	
	area = ((base_ma + base_me) * altura) / 2;
	
	printf ("A area do trapezio e de %f", area);
}
