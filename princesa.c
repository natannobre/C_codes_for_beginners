#include <stdio.h>

/*int prox(int vetor[], int morte, int limite){
	int k=0, ret;
	if (morte<limite){
		for (k=morte+1; k<=limite; k++){
			if(morte==limite){
				k= 0;
			}
			if (vetor[k] != 0){
				ret= vetor[k];
			}
		}
	}else if(morte==limite){
		for(k=0; k<=limite; k++){
			if (morte==limite){
				k= 0;
			}
			if (vetor[k] != 0){
				ret= vetor[k];
			}
		}
	}

	return(ret);
}*/

int main(){
	int n, x;
	scanf("%d", &n);
	scanf("%d", &x);
	int vet[n], i, qt, j;

	for(i=0; i<n; i++){
		vet[i]= i+1;
	}

	qt= n;
	while(qt>1){
		if(x == n){
			for(i=0;i<=n;i++){
				if (i==n){
					i=0;
				}
				if(vet[i] != 0){
					vet[i]= 0;
					break;
				}
			}
			for(i=i+1;i<=n;i++){
				if(i==n){
					i=0;
				}
				if(vet[i] != 0){
					x= vet[i];
					break;
				}
			}
			qt--;
		}else{
			for(i=x;i<=n;i++){
				if(i==n){
					i=0;
				}
				if(vet[i] != 0){
					vet[i]= 0;
					break;
				}
			}
			for(i=i+1;i<=n;i++){
				if(i==n){
					i=0;
				}
				if(vet[i] != 0){
					x= vet[i];
					break;
				}
			}
		qt--;	
		}
	}
		printf("\n%d\n", x);

	return 0;
}