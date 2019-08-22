#include <stdio.h>
#include <math.h>

float expo(float a, int b);
float qua(float m, float n);

int main(){
	float x1, y1, x2, y2, delta_x=0, delta_y=0, result=0;

	scanf("%f%f%f%f", &x1, &y1, &x2, &y2);	
	
	delta_x= qua(x2,x1);
	delta_y= qua(y2,y1);

	result= delta_x + delta_y;	
	result= sqrt(result);

	printf("%.4f\n", result);

	return 0;
}
float expo(float a, int b){
	int i;
	float r=1;

	for(i=0; i<b; i++){
		r=r*a;
	}	
	return(r);

}

float qua(float m, float n){
	float a1=0, a2=0, a3=0, re=0;
	
	a1= expo(m,2);
	a2= 2*m*n;
	a3= expo(n,2);

	re= a1-a2+a3;

	return(re);
}
	
