#include <stdio.h>

int main(){

	int t, pa, pb, i, result1=0, result2=0, count=0;
	double g1, g2;

	scanf("%d", &t);

	for(i = 0; i < t; i++){
		scanf("%d", &pa);
		scanf("%d", &pb);
		scanf("%lf", &g1);
		scanf("%lf", &g2);
		count= 0;	

		do{

			result1= (pa*g1)/100;
			result2= (pb*g2)/100;
			pa+= result1;
			count++;
			pb+= result2;

		}while(pa <= pb);

		if (count<=100){

			printf("%d anos.\n", count);

		}else{

			printf("Mais de 1 seculo.\n");

		}


	}

	return 0;
}