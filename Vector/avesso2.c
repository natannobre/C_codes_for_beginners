#include <stdio.h>

int main(){
	int i, j, n, x, aux;

	scanf("%d", &n);
	scanf("%d", &x);
	
	int vet[n], vot[x];
	for(i=0; i<n; i++){
	scanf("%d", &vet[i]);
	}
	for(i=0; i<x; i++){
	scanf("%d", &vot[i]);
	}

	for(i=0; i<x; i++){
		for(j=0; j<n; j++){
			if(j==0 && (vet[j]==vot[i] || vet[j]*(-1)==vot[i])){
				vet[j+1]*= (-1);
			}
			if(j!=0 && j!= (n-1) && (vet[j]==vot[i] || vet[j]*(-1)==vot[i])){
				vet[j-1]*= (-1);
				vet[j+1]*= (-1);
			}
			if(j==(n-1) && (vet[j]==vot[i] || vet[j]*(-1)==vot[i])){
				vet[j-1]*= (-1);
			}
		}
	}
	for(i=0; i<n; i++){
		printf("%d", vet[i]);
		if(i<n-1){
			printf(",");
		}
	}
	printf("\n");	

	return 0;
}
