#include <stdio.h>

int main(){
	int i; 
	float soma=1;

	for(i = 2; i <= 100; i++){
		soma+= 1/(float)i;
	}
	printf("%.2f\n", soma);	


	return 0;
}