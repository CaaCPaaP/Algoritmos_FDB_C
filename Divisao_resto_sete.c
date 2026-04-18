/*
Faça um programa para ler um número inteiro, calcular o valor da divisão inteira deste número por 7,
e o respectivo resto desta divisão (resto da divisão inteira por 7). Exibir o resultado na tela conforme o
exemplo abaixo.
***************************
* Digite um número: 23
* 23 dividido por 7 = 3
* 23 dividido por 7 resta 2
***************************
*/
#include <stdio.h>
int main (void)
{
	int num, divi, resto;
	
	printf ("*********************************************\n*Insira um numero para o dividir por sete: ");
	scanf ("%d", &num);
	
	divi = (num / 7);
	resto = (num % 7);
	
	printf ("*%d divido por sete = %d\n*%d dividido por sete resta %d\n*********************************************", num, divi, num, resto); 
}
