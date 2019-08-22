#include <stdio.h>

int main(){
	int i, j, n, x, y;

	scanf("%d", &n);
	for(i=0; i < n; i++){
		int soma=0;
		scanf("%d", &x);
		scanf("%d", &y);
		if(x<=y){
			for(j=x+1; j<y; j++){
				if(j%2!=0){
					soma+= j;
				}
			}	
		}else{
			for(j=y+1; j<x; j++){
				if(j%2!=0){
					soma+= j;
				}
			}
		}
		printf("%d\n", soma);	
	}

	return 0;
}
