#include <stdio.h>

int main(){
	int cod, qnt;
	float valor; 

	scanf("%d%d", &cod,&qnt);

	switch(cod){

	case 1:
				valor= qnt*4;
				printf("Total: R$ %.2f\n", valor);
	break;
	case 2:
				valor= qnt*4.50;
				printf("Total: R$ %.2f\n", valor);
	break;
	case 3:
				valor= qnt*5;
				printf("Total: R$ %.2f\n", valor);
	break;
	case 4:
				valor= qnt*2;
				printf("Total: R$ %.2f\n", valor);
	break;
	case 5:
				valor= qnt*1.50;
				printf("Total: R$ %.2f\n", valor);
	break;
	default:
	break;
	
	}

	return 0;
}
