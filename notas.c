#include <stdio.h>

int main(){
	int valor, i=0, n100=0, n50=0, n20=0, n10=0, n5=0, n2=0, n1=0;
	int m100, m50, m25, m10, m5, m1;
	double aux=0; 
	
	scanf("%lf", &aux);
	aux*=100;
	valor= aux;

	n100= valor/10000;
	valor= valor-n100*10000;

	n50= valor/5000;
	valor= valor-n50*5000;
	
	n20= valor/2000;
	valor= valor-n20*2000;

	n10= valor/1000;
	valor= valor-n10*1000;
	
	n5= valor/500;
	valor= valor-n5*500;

	n2= valor/200;
	valor= valor-n2*200;


	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", n100);
	printf("%d nota(s) de R$ 50.00\n", n50);
	printf("%d nota(s) de R$ 20.00\n", n20);
	printf("%d nota(s) de R$ 10.00\n", n10);
	printf("%d nota(s) de R$ 5.00\n", n5);
	printf("%d nota(s) de R$ 2.00\n", n2);

	m100= valor/100;
	valor= valor-m100*100;	

	m50= valor/50;
	valor= valor-m50*50;

	m25= valor/25;
	valor= valor-m25*25;

	m10= valor/10;
	valor= valor-m10*10;
	
	m5= valor/5;
	valor= valor-m5*5;

	m1= valor/1;
	
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", m100);
	printf("%d moeda(s) de R$ 0.50\n", m50);
	printf("%d moeda(s) de R$ 0.25\n", m25);
	printf("%d moeda(s) de R$ 0.10\n", m10);
	printf("%d moeda(s) de R$ 0.05\n", m5);
	printf("%d moeda(s) de R$ 0.01\n", m1);	

	return 0;
}
