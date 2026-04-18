/*
Escrever um programa para ler o número de eleitores de um município, o número de votos brancos, nulos
e válidos. Calcular e escrever o percentual que cada um representa em relação ao total de eleitores.
*/
#include <stdio.h>
int main (void)
{
	int eleitores, num_vb, num_vn, num_vv;
	float vb_per, vn_per, vv_per;
	
	printf ("Quantos eleitores possui o municipio? ");
	scanf ("%d", &eleitores);
	
	printf ("Houveram quantos votos validos? ");
	scanf ("%d", &num_vv);
	
	printf ("Houveram quantos votos em branco? ");
	scanf ("%d", &num_vb);
	
	printf ("Houveram quantos votos nulos? ");
	scanf ("%d", &num_vn);
	
	vv_per = (float)num_vv / eleitores * 100;
	vn_per = (float)num_vn / eleitores * 100;
	vb_per = (float)num_vb / eleitores * 100;
	
	printf ("Houveram %d eleitores, com %%%f de votos validos, %%%f de votos brancos e %%%f de votos nulos.", eleitores, vv_per, vb_per, vn_per);
}
