#include <stdio.h>

int main (){
	int a,b, c, maior;
	
	printf("Digite tres valores:\n ");
	scanf("%d%d%d", &a, &b, &c);
	
	if (a>b){
		if (a>c)
		maior =a;
		else
		maior = c;
	}
	else {
		if(b>c)
		maior = b;
		else maior = c;
	}

	printf("%d eh o maior", maior);
}

