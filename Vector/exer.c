#include<stdio.h>

int main(){
	int i, n, aux=0;
	
	scanf("%d", &n);

	int vet[n];
	for(i=0; i<n; i++){
		scanf("%d", &vet[i]);
	}
	for(i=0; i<n; i++){
		if(i==0 && vet[i]==0 && vet[i+1]==0){
			aux++;
		}
		if(i!=0 && i!=(n-1) && vet[i-1]==0 && vet[i]==0 && vet[i+1]==0){
			aux++;
		}
		if(i==(n-1) && vet[i]==0 && vet[i-1]==0){
			aux++;
		}
	}
	printf("%d\n", aux);
	
	return 0;
}
