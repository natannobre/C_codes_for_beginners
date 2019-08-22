#include <stdio.h>

int main(){
	int matriz[5][5], i, j, plus_s=0, plus_p=0, result=0;

	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			scanf("%d", &matriz[i][j]);
			if(i==j){
				plus_p+= matriz[i][j];
			}
			if((i==0 && j==4) || (i==1 && j==3) || (i==2 && j==2) || (i==3 && j==1) || (i==4 && j==0)){
				plus_s+= matriz[i][j];
			}
		}
	}

			result= plus_p - plus_s;
	
			printf("\n%d\n", result);

	return 0;
}
