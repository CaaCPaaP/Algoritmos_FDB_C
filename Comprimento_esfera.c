/*
Faça um programa que receba o raio, calcule e mostre o comprimento de uma esfera, sabe-se que
C=2*PI*R.
*/
#include <stdio.h>
int main (void)
{
	float raio, pi;
	float comprimento;
	
	pi = 3.14;
	
	printf ("Insira o raio da esfera: ");
	scanf ("%f", &raio);
	
	comprimento = (2 * pi * raio);
	
	printf ("O comprimento da esfera e de %f.", comprimento);
}
