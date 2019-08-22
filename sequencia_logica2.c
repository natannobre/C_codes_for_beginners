#include <stdio.h>

int main(){

	int i, j, x, y, aux=0, aux_y=1, aux_j=1; 

	scanf("%d", &x);
	scanf("%d", &y);

	aux_y= y/x;
	if((y%x)!=0){
		aux_y++;
	}
	aux= x;
	for(i=0; i<aux_y; i++){
		for(j=aux_j; j<=aux; j++){
			if(j<=y){
				if(j==aux){
					printf("%d", j);
				}else{
					printf("%d ", j);	
				}
				
			}
		}
		aux_j= j;
		printf("\n");
		aux+= x; 
	}


	return 0;
}