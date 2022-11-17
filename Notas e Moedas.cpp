#include <stdio.h>
#include <math.h>

int main(){
	int sacar = 0;
	int n100,n50,n20, n10, n5, n2, m1;
	float m050, m025, m010, m005, m001;
	float resto=0; 
	scanf("%f", &sacar);
	if (sacar <= 0 || sacar >= 1000000)
	{
		printf("Valor invalido, por favor, digite outro.");
		return 0;
	}
	
	n100=(sacar/100);
	n50 = (sacar%100)/50;
	n20 =((sacar%100)%50)/20;
	n10 =(((sacar%100)%50)%20)/10;
	n5 = ((((sacar%100)%50)%20)%10)/5;
	n2 = (((((sacar%100)%50)%20)%10)%5)/2;
	m1 = ((((((sacar%100)%50)%20)%10)%5)%2)/1;
	m050 = (((((((sacar%100)%50)%20)%10)%5)%2)%1)/0.50;
	
	
	printf("NOTAS\n");
	printf("%.2f nota(s) de R$ 100,00\n", n100);
	printf("%.2f nota(s) de R$ 50,00\n", n50);
	printf("%.2f nota(s) de R$ 20,00\n",n20);
	printf("%.2f nota(s) de R$ 10,00\n", n10);
	printf("%.2f nota(s) de R$ 5,00\n", n5);
	printf("%.2f nota(s) de R$ 2,00\n", n2);
	printf("%.2f nota(s) de R$ 1,00\n", m1);
	printf("MOEDAS: \n");
	printf("%.2f moeda(s) de R$ 0.50", m050);
	
	return 0;
	
}
