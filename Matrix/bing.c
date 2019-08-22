#include <stdio.h>

int main(){
	int vet[6], matriz[4][4], i, j, k, result=0, aux=0;

	for(i=0; i<6; i++){
		scanf("%d", &vet[i]);
	}
	printf("\n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	for(i=0; i<6; i++){
		for(k=0; k<4; k++){
			for(j=0; j<4; j++){
				if(vet[i]==matriz[k][j]){
					aux++;
					
				}
			}
		}
	}
	
	printf("\n%d\n", aux);

	return 0;
}
