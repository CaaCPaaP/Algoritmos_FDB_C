/*
Este estudo contem: strings
*/
#include <stdio.h>
#include <strings.h>
int main (void)
{
	char pal1 [26], pal2[26], copia1[26], copia2[26], conc1[26], conc2[26];
	int tamanho, comp1, comp2;
	
	printf ("Insira a primeira palavra (maximo de 25 caracteres): ");
	scanf ("%s", pal1);
	fflush(stdin);
	
	printf ("Insira a segunda palavra (maximo de 25 caracteres): ");
	gets (pal2);
	fflush(stdin);
	
	tamanho = strlen(pal1);
	printf ("Tamanho da primeira palavra: %d", tamanho);
	
	comp1 = strcmp(pal1, pal2);
	printf ("\nComparacao com tamanho de letras: %d", comp1); //Se o resultado for 0, são iguais
	
	comp2 = strcasecmp(pal1, pal2);
	printf ("\nComparacao sem tamanho de letras: %d", comp2); //Se o resultado for 0, são iguais
	
	strcpy(copia1, pal1);
	printf ("\nCopia da palavra 1: %s", copia1);
	
	strncpy(copia2, pal2, 2);
	copia2 [2] = '\0'; //Necessário para evitar erro
	printf ("\nCopia das duas primeiras letras da palavra 2: %s", copia2);
	
	printf ("\nConcatenacao das duas palavras: %s", strcat(pal1, pal2));
	
	printf ("\nConcatenacao da primeira copia com a primeira letra da segunda: %s", strncat(copia1, copia2, 1));
}
