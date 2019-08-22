#include <stdio.h>

int main(){

	int x, y, i;

	for(i=0;;i++){
		scanf("%d", &x);	
		scanf("%d", &y);

		if(x == y){
			break;
		}else if (x > y){			
				printf("Decrescente\n");
		}else{					
				printf("Crescente\n");
		}
	}

	return 0;
}
