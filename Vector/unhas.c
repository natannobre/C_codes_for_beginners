#include <stdio.h>

int main(){
	int i, n, aux=1, x=0;

	scanf("%d", &n);
	
	int vet[n];
	for(i=0; i<n; i++){
		scanf("%d", &vet[i]);
	}
	
	for(i=(n-1); i>=0; i--){
		x= x+(vet[i]*aux);
		aux*= 10;
	}
	printf("%d\n", x);



	return 0;
}
