#include <stdio.h>

int main(){
	int segundos, h,m,s, resto;
	
	scanf("%d", &segundos);
	//3600 é segundos tem uma hora;
	h = segundos /3600;
	// % pode ser usado para pegar o resto da conta.
	//exemplo fez a conta segundos / 3600 e o que sobrou armenamos no % resto.
	resto = segundos %3600;
	m = resto /60;
	s = resto %60;
	printf("%d: %d: %d:\n", h, m, s);
	return 0;
	
}
