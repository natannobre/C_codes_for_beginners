#include <stdio.h>

int main(){
 int i, n;
	
	scanf("%d", &n);
	
	int vet[n];

	for(i=0; i<n; i++){
		scanf("%d", &vet[i]);
	}


	for(i=0; i<n; i++){
		if(vet[i]%2!=0){
			printf("%d", vet[i]);
			if(i<(n-2)){
				printf(",");
			}
		}
	}
    printf("\n");
	for(i=0; i<n; i++){
		if(vet[i]%2==0){
			printf("%d", vet[i]);
			if(i<(n-2)){
				printf(",");
			}
		}
	}
	printf("\n");
	
	return 0;
}
