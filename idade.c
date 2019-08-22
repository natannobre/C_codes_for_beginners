#include <stdio.h>

int main(){
	int idade, ano=0, mes=0;

	scanf("%d", &idade);

	ano= idade/365;
	idade= idade%365;

	mes= idade/30;
	idade= idade%30;	

	printf("%d ano(s)\n", ano);
	printf("%d mes(es)\n", mes);
	printf("%d dia(s)\n", idade);

	return 0;
}
