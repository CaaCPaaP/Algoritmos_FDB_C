/*
Uma empresa tem para um determinado funcionário uma ficha contendo o número de horas 
trabalhadas e o número de dependentes.
Considerando que:
a) A empresa paga 12 reais por hora e 40 reais por dependentes, isto é o salário bruto.
b) Sobre o salário bruto são feitos descontos de 8,5% para o INSS e 5% para IR.
Faça um programa para ler o número de horas trabalhadas e número de dependentes de um funcionário.
Após a leitura, escreva qual o salário bruto, os valores descontados para cada tipo de imposto e
finalmente qual o salário líquido do funcionário. 
*/
#include <stdio.h>
int main (void)
{
	float r_por_h, r_por_d, inss, ir;
	float num_h, num_d, sal_bruto, sal_liqui;
	
	r_por_h = 12; //Quantos reais a empresa paga por hora
	r_por_d = 40; //Quantos reais a empresa paga por dependente
	inss = 0.085; //0.085 = 8,5%
	ir = 0.05; //0.05 = 5%
	
	printf ("Insira o numero de horas trabalhadas por mes do funcionario: ");
	scanf ("%f", &num_h);
	
	printf ("Insira o numero de dependentes do funcionario: ");
	scanf ("%f", &num_d);
	
	r_por_h = (num_h * r_por_h); //Calculo de quantos reais o funcionario recebe no fim do mes de acordo com as horas trabalhadas no mes
	r_por_d = (num_d * r_por_d); //Calculo de quantos reais o funcionario recebe no fim do mes de acordo com o seu numero de dependentes
	
	sal_bruto = (r_por_h + r_por_d); //Calculo do salário bruto do funcionario
	
	inss = (sal_bruto * inss); //Calculo do desconto do INSS sobre o salário bruto
	ir = (sal_bruto * ir); //Calculo do desconto do IR sobre o salário bruto
	
	sal_liqui = sal_bruto - (inss + ir); //Calculo do salário liquido do funcionario
	
	printf ("O salario bruto do funcionario e de R$%f\nO desconto do INSS foi de R$%f\nO desconto do IR foi de R$%f\nO salario liquido do funcionario e de R$%f", sal_bruto, inss, ir, sal_liqui);
}
