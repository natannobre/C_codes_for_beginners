#include <stdio.h>

int main(){

	int i, n, j, count=1, x;

	scanf("%d", &n);
	
	int vet[n];
	for(i=0; i<n; i++){
		scanf("%d", &vet[i]);
	}
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(vet[i]>vet[j]){
				x= vet[i];
				vet[i]= vet[j];
				vet[j]= x;
			}
		}
	}
	
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(vet[i]!=vet[j]){
				count++;
				i= (j-1);
				break;
			}
		}
	}

	printf("%d\n", count);





	return 0;
}
