#include <stdio.h>

int main (){
	int horas =0;
	int velocidade =0;
	float combustivel =12.0;
	float litros =0;
	
	scanf("%d", &horas);
	scanf("%d", &velocidade);		
			
	litros = (velocidade/combustivel)*horas;
	
	printf("%.3f\n", litros);
}

