#include <stdio.h>

int main(){
	int i;
	char vet[10];

	fgets(vet,10,stdin);
	
	printf("\n");

	for(i = 0; vet[i]; i++){
	printf("%c\n", vet[i]);
	}
	printf("\n");

	return 0;
}
