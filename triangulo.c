#include <stdio.h>

int main(){

	float a, b, c, per, area;

	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);

	if(((b-c)<a && (b+c)>a) && ((a-c)<b && (a+c)>b) && ((a-b)<c && (b+a)>c)){

		per= a+b+c;
		printf("Perimetro = %.1f\n", per);

	}else{
		
		area= ((a+b)*c)/2;
		printf("Area = %.1f\n", area);
	
	}		


	return 0;
}
