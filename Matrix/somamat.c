#include <stdio.h>

int main(){
	int result=0, i, j, matriz[2][3];

		
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			scanf("%d", &matriz[i][j]);			
			result= result+matriz[i][j];
		}
	}	

	printf("\n%d\n", result);

	return 0;
}
