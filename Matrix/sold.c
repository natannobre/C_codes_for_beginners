#include <stdio.h>

int main(){
	int matriz[3][3], i, j, aux=0;

	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			if(matriz[i][j]>matriz[i+1][j]){
				aux++;
			}	
		}
	}
	printf("\n%d\n", aux);




	return 0;
}
