#include <stdio.h>

int main(){
	int i, j, n, f, x=0, aux=0;

	scanf("%d", &f);
	scanf("%d", &n);	

	int vet[n], vot[f];
	for(i=0; i<n; i++){
		scanf("%d", &vet[i]);
	}
	for(i=0; i<f; i++){
		vot[i]= i+1;
	}

	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(vet[i]==vet[j]){
				printf("%d", vet[i]);
				i= j-1;
				break;
			}
		}
	}
	for(i=0; i<f; i++){
		if(vot[i]!=0){
			printf("%d", vot[i]);
		}
	}


	return 0;
}
