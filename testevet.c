#include <stdio.h>

int main(){
	int i, j, vet[10], x=0;

	for(i=0; i<10; i++){
		scanf("%d", &vet[i]);
	}
	for(i=0; i<10; i++){
		for(j=(i+1); j<10; j++){
			if(vet[j]>vet[i]){
				x= vet[i];
				vet[i]= vet[j];
				vet[j]= x; 
			}
		}
	}
	for(i=0; i<10; i++){
		printf("\n%d\n", vet[i]);
	}

	
	return 0;
}
