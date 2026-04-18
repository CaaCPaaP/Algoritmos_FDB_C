/*
Altere o exercício anterior para solicitar também o divisor
*/
#include <stdio.h>
int main (void)
{
	int num, divisor, divisao, resto;
	
	printf ("*********************************************\n*Insira um numero para ser dividido: ");
	scanf ("%d", &num);
	
	printf ("*Insira um numero para ser o divisor: ");
	scanf ("%d", &divisor);
	
	divisao = (num / divisor);
	resto = (num % divisor);
	
	printf ("*%d divido por %d = %d\n*%d dividido por %d resta %d\n*********************************************", num, divisor, divisao, num, divisor, resto); 
}
