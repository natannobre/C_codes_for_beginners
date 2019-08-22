#include<stdio.h>

int main(){
	int i, j, n, aux=0;
	
	scanf("%d", &n);

	int vet[n];
	for(i=0; i<n; i++){
		scanf("%d", &vet[i]);
	}
	
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(vet[i]==vet[j]*(-1)){
				aux++;
				break;
			}
		}
	}
	printf("%d\n", aux);
	




	return 0;
}
