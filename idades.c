#include <stdio.h>

int main(){

	int i=0, n, soma=0;
	float media=0;

	do{
		scanf("%d", &n);
		if(n>=0){
			soma+= n;
			i++;
		}else{
			break;
		}

	}while(n>=0);

	media= soma/(float)i;
	printf("%.2f\n", media);

	return 0;
}