#include<stdio.h>

int main(){
	int i, j, n, count=0;

	scanf("%d", &n);

	int vet[n];
	for(i=0; i<n; i++){
		scanf("%d", &vet[i]);
	}
	for(i=0; i<n; i++){
			if(i==n-1){
				break;
			}
			if(vet[i]-vet[i+1]>1){
				count++;
			}
			if(vet[i]-vet[i+1]<-1){
				count++;
			}
			
	}
	printf("%d\n", count);

	return 0;
}
