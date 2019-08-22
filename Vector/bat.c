#include <stdio.h>

int main(){
	int i, j, x, n;

	scanf("%d", &n);
	
	int vet[n];
	for(i=0; i<n; i++){
		scanf("%d", &vet[i]);
	}
	for(i=0; i<n; i++){
		for(j= i+1; j<n; j++){
			if(vet[i]>vet[j]){
				x= vet[i];
				vet[i]= vet[j];
				vet[j]= x;
			}
		}
	}
	for(i=0; i<n; i++){
		printf("%d", vet[i]);
		if(i<(n-1)){
			printf(",");
		}
	}
	printf("\n");




	return 0;
}
