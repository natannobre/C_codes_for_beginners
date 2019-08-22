#include <stdio.h>

int main(){

	int i, j, aux=0, vet[3], vot[3];

	for(i = 0; i < 3; i++){
		scanf("%d", &vet[i]);
	}

	for(i=0; i<3; i++){
		vot[i]= vet[i];
	}

	for(i=0; i<2; i++){
		for(j=i+1; j<3; j++){
			if(vet[i]>vet[j]){
				aux= vet[i];
				vet[i]= vet[j];
				vet[j]= aux;
			}
		}
	}

	for(i=0; i<3; i++){
		printf("%d\n", vet[i]);
	}
	printf("\n");
	for(i=0; i<3; i++){
		printf("%d\n", vot[i]);
	}		

	return 0;
}
