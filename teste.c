#include <stdio.h>
#include <string.h>

int main(){
	int tamanho=0;
	char frase[10];
	
	scanf("%s", frase);
	
	tamanho= strlen(frase);

	printf("\n%d\n", tamanho);

	return 0;
}
