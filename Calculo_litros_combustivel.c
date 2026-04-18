/*
Efetuar o cálculo da quantidade de litros de combustível gastas em uma viagem, utilizando-se um
automóvel que faz 12 Km por litro. Para obter o cálculo, o usuário deverá fornecer o tempo gasto na
viagem e a velocidade média durante a mesma. Desta forma, será possível obter a distância percorrida
com a fórmula DISTANCIA = TEMPO * VELOCIDADE. Tendo o valor da distância, basta calcular a
quantidade de litros de combustível utilizada na viagem com a fórmula: LITROS = DISTANCIA / 12. O
programa deverá apresentar os valores da velocidade média, tempo gasto na viagem, à distância
percorrida e a quantidade de litros utilizada na viagem.
*/
#include <stdio.h>
int main (void)
{
	float tempo, velocidade;
	float distancia, litros;
	
	printf ("Quanto tempo, em minutos, durou a viagem? ");
	scanf ("%f",&tempo);
	
	printf ("Qual foi a velocidade media, em km/h, do veiculo durante a viagem? ");
	scanf ("%f",&velocidade);
	
	tempo = (tempo /60); //converte de minutos pra horas
	velocidade = (velocidade *1000); //converte de quilometros para metros
	
	distancia = (tempo * velocidade) /1000;
	
	litros = (distancia /12);
	
	printf ("Ao percorrer uma distancia de %f quilometros, voce gastou %f litros de gasolina", distancia, litros);
}
