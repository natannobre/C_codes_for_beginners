#include <stdio.h>

int main(){

	int n, x, y, i; 
	float result=0;

	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &x);	
		scanf("%d", &y);

		if(y==0){
			printf("divisao impossivel\n");
		}else{
			result= (float)x/y;
			printf("%.1f\n", result);
		}


	}
	return 0;
}
