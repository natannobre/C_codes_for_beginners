#include <stdio.h>

int main(){
	int i, v, n[10];
	
	scanf("%d", &v);

	if(v<=50){
	n[0]= v;
	
		for(i=1; i<10; i++){
			n[i]= n[i-1]*2;	

		}		
	}

		for(i=0; i<10; i++){
			printf("N[%d] = %d\n", i, n[i]);

		}

	return 0;
}
