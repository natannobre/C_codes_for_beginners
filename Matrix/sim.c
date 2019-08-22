#include <stdio.h>

int main(){
	int i, j, matriz[3][3], aux=0;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			scanf("%d", &matriz[i][j]);
		}
	}

	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			if(i!=j){
				if(matriz[i][j]==matriz[j][i]){
					aux++;
					printf("\n%d\n", aux);
				}
			}
		}
	}
	
	if(aux==6){
		printf("\nSIM\n");
	}else{
		printf("\nNAO\n");
	}

	return 0;
}
