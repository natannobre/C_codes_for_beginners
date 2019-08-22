#include <stdio.h>

int main(){
	int num, i, aux, vet[16];

	scanf("%d", &num);
	for(int j=0; j<16; j++){
		aux= num;
		for(i=0; i<16; i++){
			vet[i]= aux%2;
			aux/= 2;
		}

		printf("\n");
		for(i=15; i>=0; i--){
			printf("%d", vet[i]);
		}	
		printf("\n");
		num= (num << 1);
	}

	return 0;
}
