#include <stdio.h>

int main(){
	int i, n, x;
	float soma=0, media=0;

	scanf("%d", &n);

	float vet[n];

	for(i=0; i<n; i++){
		scanf("%f", &vet[i]);
		soma+= vet[i];
	}
	
	media= soma/n;
	printf("\n%f\n", media);
	media= media*100;
	printf("\n%f\n", media);
	x= media;
	printf("\n%d\n", x);
	media= x;
	printf("\n%f\n", media);
	media= media/100;

	printf("\n%f\n", media);
	for(i=0; i<n; i++){
		if(vet[i]<media){
			printf(" P ");
		}
		if(vet[i]==media){
			printf(" M ");
		}
		if(vet[i]>media){
			printf(" G ");
		}
	}		
	printf("\n");


	return 0;
}
