#include<stdio.h>

int main(){
	int i, j, n, x, aux=0;

	scanf("%d", &n);
	int vet[n];
	for(i=0; i<n; i++){
		scanf("%d", &vet[i]);
	}

	scanf("%d", &x);
	int vot[x];
	for(i=0; i<x; i++){
		scanf("%d", &vot[i]);
	}
	
	for(i=0; i<n; i++){	
		for(j=0; j<x; j++){	
			if(vet[i]==vot[j]){
				aux++;
				break;
			}
		}
	}
	if(aux==n){
		printf("sim\n");
	}else{
		printf("nao\n");
	}
	


	return 0;
}
