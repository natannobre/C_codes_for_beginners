#include <stdio.h>

int main(){
	int i, t, n, g, j, k;

	scanf("%d", &t);
	
	for(i=0; i<t; i++){
		scanf("%d", &n);
		scanf("%d", &g);
		int vet[n];
		for(j=0; j<n; j++){
		scanf("%d", &vet[j]);
		}
		for(k=0; k<n; k++){
			if(k==0 && vet[k]==g){
				vet[k+1]*= (-1);
			}else if(k!=0 && k!=(n-1) && vet[k]==g){
				vet[k-1]*= (-1);
				vet[k+1]*= (-1);
			}else if(k==(n-1) && vet[k]==g){
				vet[k-1]*= (-1);
			}
		}
		for(k=0; k<n; k++){
			printf("%d", vet[k]);
			if(k!= n-1){
			printf(",");
			}
		}	
		printf("\n");
	}


	return 0;
}
