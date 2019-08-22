#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int i, j, tam=0, count=0, aux=0;
	char frase[100], str[100];
		
	scanf("%[^\n]", frase);
	getchar();
	scanf("%[^\n]", str);
	

	for(i=0; str[i]; i++){
		tam++;
	}

	printf("%d", tam);
	for(i=0; frase[i]; i++){
		aux=0;
		for(j=i;j<i+tam; j++){
			if(frase[j]==str[j-i]){
				aux++;
			}
		}
		if(aux==tam){
			count++;
		}
	}
	printf("%d\n", count);





	return 0;
}
