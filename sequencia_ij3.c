#include <stdio.h>

int main(){
	int i, j=60, aux=0;

	for(i=1; i<=9; i+=2){
		if(i==1){
			j= 7;
			aux= j;
		}else{
			j+= 5;
			aux= j;
		}
		for(;j>=aux-2;j--){
			printf("I=%d J=%d\n", i, j);
		}
	}

	return 0;
}
