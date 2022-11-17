#include <stdio.h>
#include <math.h>

int main (){
	float x1 =0;
	float y1=0;
	float x2=0;
	float y2 =0;
	float distancia = 0;
	
	scanf("%f", &x1);
	scanf("%f", &y1);
	scanf("%f", &x2);
	scanf("%f", &y2);
	
	// função sqrt para tirar a raiz da variavel.
	//função pow para poder elevear a quadrado, 1 parametro conta, 2 parametro expoente para elevar.
	distancia = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	
	printf("%.4f\n",distancia);
	
}
