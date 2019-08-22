#include <stdio.h>

int main(){

	int n=0, i, alcool=0, gas=0, dies=0;

	do{
		do{
			scanf("%d", &n);
		}while(n!=1 && n!=2 && n!=3 && n!=4);

		if(n==1){
			alcool++;
		}else if(n==2){
			gas++;
		}else if(n==3){
			dies++;
		}else if(n==4){
			break;
		}
	}while(n!=4);

	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alcool);
	printf("Gasolina: %d\n", gas);
	printf("Diesel: %d\n", dies);

	return 0;
}