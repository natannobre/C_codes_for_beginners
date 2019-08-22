#include <stdio.h>

int main(){

	int x, y, i, j;

	for(i=0;;i++){
		int soma=0;
		scanf("%d", &x);	
		scanf("%d", &y);

		if(x == 0 || y == 0 || x < 0 || y < 0){
			break;
		}else if (x < y){
			for(j = x; j <= y; j++){					
				printf("%d ", j);
				soma+= j;
			}
			printf("Sum=%d\n", soma);
		}else{
			for(j = y; j <= x; j++){					
				printf("%d ", j);
				soma+= j;
			}
			printf("Sum=%d\n", soma);
		}
	}

	return 0;
}
