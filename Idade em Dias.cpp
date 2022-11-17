#include <stdio.h>

int main(){
	int idade=0;
	int ano=0;
	int mes=0;
	int dias=0;
	int resto=0;
	
	scanf("%d",&idade);
	
	ano = idade /365;
	resto = idade %365;
	mes = resto /30;
	dias = resto %30;
	
	printf("%d ano(s)\n%d mes (es)\n%d dia(s)\n", ano,mes, dias);
}
